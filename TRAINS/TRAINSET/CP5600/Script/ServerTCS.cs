#define RELEASE
using ORTS.Common;
using ORTS.Scripting.Api;
using System;
using System.Diagnostics;
using System.Collections.Generic;
using System.IO.Ports;
using System.IO;
using System.Net;
using System.Net.Sockets;
using System.Text;
using System.Linq;
using System.Threading.Tasks;
using System.Runtime.InteropServices;
using Orts.Common;
using Event = Orts.Common.Event;
using Orts.Simulation.Signalling;
namespace ORTS.Scripting.Script
{
    public class ServerTCS : TrainControlSystem
    {
        public Client c = null;
        HashSet<Parameter> parameters = new HashSet<Parameter>();
        List<InteractiveTCS> tcs = new List<InteractiveTCS>();
        public void RequestModule(string module)
        {
            if (c != null) c.WriteLine("request_module("+module+")");
        }
        public void Register(string parameter)
        {
            if (c != null) c.WriteLine("register("+parameter+")");
        }
        public void RemoveParameter(string parameter)
        {
            if (c != null) c.WriteLine("unregister("+parameter+")");
        }
        public void SendParameter(string parameter, string value)
        {
            if (c != null) c.WriteLine(parameter+"="+value);
        }
        Parameter GetParameter(string parameter)
        {
            Parameter compared = new Parameter(parameter);
            Parameter p = null;
            parameters.TryGetValue(compared, out p);
            return p;
        }
        float LocomotiveOverspeedMpS;
        public override void Initialize()
        {
            Activated = false;
            // tcs.Add(new HM(this));
            // if(GetBoolParameter("ASFA","Digital",false)) tcs.Add(new ASFADigital(this));
            // else tcs.Add(new ASFAclasico(this));
            tcs.Add(new CONVELDigital(this));
            #if RELEASE
            #else
            tcs.Add(new ETCS(this));
            #endif
            
            LocomotiveOverspeedMpS = MpS.FromKpH(GetIntParameter("General", "Sobrevelocidad", 500));
            
            foreach(InteractiveTCS i in tcs)
            {
                i.Activated = true;
                i.Initialize();
                parameters.UnionWith(i.GetParameters());
            }
            
            Parameter p = null;
            p = new Parameter("speed");
            p.GetValue = () => MpS.ToKpH(SpeedMpS()).ToString().Replace(',','.');
            parameters.Add(p);
            
            p = new Parameter("distance");
            p.GetValue = () => DistanceM().ToString().Replace(',','.');
            parameters.Add(p);
            
            p = new Parameter("cruise_speed");
            p.SetValue = (string val) => cruise_speed=MpS.FromKpH(float.Parse(val.Replace('.',',')));
            parameters.Add(p);
            
            p = new Parameter("train_length");
            p.GetValue = () => TrainLengthM().ToString().Replace(',','.');
            parameters.Add(p);
            
            p = new Parameter("controller::throttle");
            p.SetValue = (string val) => {
                float value = float.Parse(val.Replace('.',','));
                userThrottle = value;
            };
            parameters.Add(p);
            
            p = new Parameter("controller::brake::dynamic");
            p.SetValue = (string val) => {
                float value = float.Parse(val.Replace('.',','));
                userDynamic = value;
            };
            parameters.Add(p);
            
            p = new Parameter("controller::direction");
            p.SetValue = (string val) =>
            {
                if(val=="1") direction = Direction.Forward;
                else if(val=="-1") direction = Direction.Reverse;
                else direction = Direction.N;
            };
            parameters.Add(p);
            
            p = new Parameter("controller::headlight");
            p.SetValue = (string val) => 
            {
                if(val=="3") SignalEvent(Event._HeadlightOn);
                else if(val=="2") SignalEvent(Event._HeadlightDim);
                else SignalEvent(Event._HeadlightOff);
            };
            parameters.Add(p);
            
            p = new Parameter("controller::wipers");
             p.SetValue = (string val) => 
            {
                if(val=="3"||val=="1") SignalEvent(Event.WiperOn);
                else SignalEvent(Event.WiperOff);
            };
            parameters.Add(p);
            
            p = new Parameter("controller::sander");
            p.SetValue = (string val) => 
            {
                if(val=="1" || val == "true") SignalEventToTrain(Event.SanderOn);
                else SignalEventToTrain(Event.SanderOff);
            };
            parameters.Add(p);
            
            p = new Parameter("controller::horn");
            p.SetValue = (string val) => 
            {
                if(val=="1" || val == "true") SetHorn(true);
                else SetHorn(false);
            };
            parameters.Add(p);
            
            /*p = new Parameter("controller::bell");
            p.SetValue = (string val) => Locomotive.ManualBell = val != "true";
            parameters.Add(p);*/
            
            p = new Parameter("simulator_time");
            p.GetValue = () => ClockTime().ToString().Replace(',','.');
            parameters.Add(p);
        }
        float prevDynamic=0;
        float prevThrottle=0;
        float userThrottle=0;
        void setThrottle(float thr)
        {
            if (prevThrottle == thr) return;
            SetThrottleController(thr);
            prevThrottle = thr;
        }
        float userDynamic=0;
        void setDynamicBrake(float dyn)
        {
            if (prevDynamic == dyn) return;
            SetDynamicBrakeController(dyn);
            prevDynamic = dyn;
        }
        float ATFval=0;
        bool ServerAvailable = true;
        public override void Update()
        {
            if(!IsTrainControlEnabled())
            {
                if (c!=null)
                {
                    c.Stop();
                    foreach(Parameter p in parameters)
                    {
                        p.RemoveClient(c);
                    }
                    c = null;
                }
                return;
            }

            foreach(InteractiveTCS i in tcs)
            {
                i.Update();
            }
            if(c==null && ServerAvailable)
            {
                try{
                    TcpClient cl = new TcpClient();
                    cl.Connect("127.0.0.1", 5090);
                    c = new TCPClient(cl);
                } catch(Exception e)
                {
                    ServerAvailable = false;
                    c = null;
                    return;
                }
                c.WriteLine("register(controller::throttle)");
                c.WriteLine("register(cruise_speed)");
                c.WriteLine("register(controller::brake::dynamic)");
                c.WriteLine("register(controller::direction)");
                c.WriteLine("register(controller::horn)");
                c.WriteLine("register(controller::bell)");
                c.WriteLine("register(controller::wipers)");
                c.WriteLine("register(controller::sander)");
                c.WriteLine("register(controller::headlight)");
                c.WriteLine("register(hm::pressed)");
                c.WriteLine("register(+::emergency)");
                c.WriteLine("register(+::fullbrake)");
                c.WriteLine("register(+::tractioncutoff)");
                c.WriteLine("register(etcs::main_power_switch)");
                c.WriteLine("register(etcs::pantographs)");
                c.WriteLine("register(etcs::vperm)");
                c.WriteLine("register(etcs::vtarget)");
                c.WriteLine("register(etcs::supervision)");
                foreach(InteractiveTCS i in tcs)
                {
                    if (i is ASFADigital)
                    {
                        (i as ASFADigital).Conex();
                    }
                }
            }
            if (c != null)
            {
                String s = c.ReadLine();
                while(s!=null)
                {
                    if(s.StartsWith("register(") || s.StartsWith("get("))
                    {
                        int div = s.IndexOf('(');
                        int fin = s.LastIndexOf(')');
                        if(div<=0 || fin<=0)
                        {
                            s = c.ReadLine();
                            continue;
                        }
                        string fun = s.Substring(0, div);
                        string param = s.Substring(div+1, fin-div-1);
                        foreach (Parameter p in parameters)
                        {
                            if(p!=null && p.GetValue!=null && p.Matches(param))
                            {
                                if(fun == "register")
                                {
                                    Register r;
                                    if (p.name == "speed" || p.name == "simulator_time") r = new NumericRegister(0.2f);
                                    else if (p.name == "distance") r = new NumericRegister(0.5f);
                                    else r = new DiscreteRegister(false);
                                    p.registers[r] = c;
                                }
                                else c.WriteLine(p.name + '=' + p.GetValue());
                            }
                        }
                    }
                    else if(s.Contains('='))
                    {
                        int pos = s.IndexOf('=');
                        string param = s.Substring(0, pos);
                        string val = s.Substring(pos+1);
                        if(param != "connected") 
                        {
                            Parameter ps = GetParameter(param);
                            if(ps != null && ps.SetValue!=null) ps.SetValue(val);
                        }
                    }
                    s = c.ReadLine();
                }
                foreach(Parameter p in parameters)
                {
                    p.Send();
                }
            }
            
            bool Emergency = false;
            bool FullBrake = false;
            bool TCO = false;
            foreach(InteractiveTCS i in tcs)
            {
                if(i.Emergency) Emergency = true;
                if(i.FullBrake) FullBrake = true;
                if(i.TCO) TCO = true;
            }
            if(cruise_speed>MpS.FromKpH(15) && !IsDirectionNeutral() && userDynamic == 0)
            {
                ATFon = true;
                ATF(cruise_speed, ref ATFval);
                if (userThrottle==0) setThrottle(Math.Max(0,ATFval));
                else setThrottle(Math.Max(0,Math.Min(ATFval,userThrottle)));
                setDynamicBrake(Math.Max(-ATFval,0));
            }
            else
            {
                ATFval = 0;
                ATFon = false;
                setThrottle(userThrottle);
                setDynamicBrake(userDynamic);
            }
            SetDirection();
            SetEmergencyBrake(Emergency/*||IsDirectionNeutral()*/);
            SetFullBrake(FullBrake);
            SetTractionAuthorization(!TCO && (!DoesBrakeCutPower() || BrakeCutsPowerAtBrakeCylinderPressureBar() > LocomotiveBrakeCylinderPressureBar()));
            SetOverspeedWarningDisplay(SpeedMpS()>LocomotiveOverspeedMpS);

            try
            {
                float atual = SpeedMpS();
                float proxima = NextPostSpeedLimitMpS(0);
                string texto = $"{atual};{proxima}";
                File.WriteAllText(@"C:\\OpenRailsData\\velocidade.txt", texto);
            }
            catch { }
            
            try
            {
                float atual = SpeedMpS();
                float proxima = NextPostSpeedLimitMpS(0);

                // Expor o valor da próxima velocidade como parâmetro para leitura externa (CabControl)
                Parameter nextSpeedParam = new Parameter("ORTS_NEXT_SPEED");
                nextSpeedParam.GetValue = () => (MpS.ToKpH(proxima) / 250f).ToString("0.000").Replace(',', '.');
                parameters.Add(nextSpeedParam);
            }
            catch (Exception ex)
            {
                // Podes logar isto se quiseres: File.AppendAllText("erro.log", ex.ToString());
            }

        }


        Direction direction =Direction.N;
        Direction prevDirection;
        void SetDirection()
        {
            if(direction==prevDirection && CurrentDirection()!=prevDirection)
            {
                direction = CurrentDirection();
            }
            if(direction!=CurrentDirection())
            { 
                //Locomotive().SetDirection(direction);
            }
            prevDirection = CurrentDirection();
        }
        public override void SetEmergency(bool emergency){}
        public override void HandleEvent(TCSEvent evt, string message) 
        {
            foreach(InteractiveTCS e in tcs)
            {
                e.HandleEvent(evt, message);
            }
        }
        bool ATFon = false;
        float cruise_speed=0;
        double LastTime=0;
        double LastError=0;
        double i_error=0;
        float ATF_brake=0;
        double p_coef = 2;
        double i_coef = 0.001;
        double d_coef = 0.4;
        protected void ATF(double limit, ref float value)
        {
            limit = limit - MpS.FromKpH(1);
            double error = limit-SpeedMpS();
            double dt = ClockTime()-LastTime;
            if (dt < 0.0001f) return;
            if(Math.Abs(error)<1)
            {
                i_error += (error+LastError)*dt/2;
            }
            else i_error = 0;
            double d_error = (error-LastError)/dt;
            double p_out = p_coef*error;
            double i_out = i_coef*i_error;
            double d_out = d_coef*d_error;
            double diff = d_out+p_out+i_out;
            value = Math.Max(Math.Min((float)diff,1),-1);
            LastTime = ClockTime();
            LastError = error;
        }
    }
    public abstract class Client
    {
        public virtual void Start()
        {
            WriteLine("connected=true");
        }
        public abstract void WriteLine(string s);
        public abstract string ReadLine();
        public abstract void Stop();
    }
    public class TCPClient : Client
    {
        TcpClient client;
        NetworkStream stream;
        string buff;
        public TCPClient(TcpClient c)
        {
            client = c;
            buff = "";
            stream = client.GetStream();
        }
        public override void Start()
        {
            base.Start();
        }
        public override void Stop()
        {
            client.Close();
        }
        public override void WriteLine(string s)
        {
            byte[] b = System.Text.Encoding.UTF8.GetBytes(s + "\r\n");
            stream.WriteAsync(b, 0, b.Length);
        }
        public override string ReadLine()
        {
            while (stream.DataAvailable)
            {
                buff += (char)stream.ReadByte();
            }
            int ind = buff.IndexOf('\n');
            if (ind >= 0)
            {
                string res = buff.Substring(0, ind);
                buff = buff.Substring(ind + 1);
                if (res.Length>0 && res[res.Length-1] == '\r') return res.Substring(0,res.Length-1);
                return res;
            }
            return null;
        }
    }
    public abstract class Register
    {
        public Func<string, bool> HasToSend;
        public Action<string> Sent;
    }
    public class DiscreteRegister : Register
    {
        string prev = "";
        public DiscreteRegister(bool repeat)
        {
            HasToSend = (string val) => repeat || val != prev;
            Sent = (string val) => prev = val;
        }
    }
    public class NumericRegister : Register
    {
        float prev = 0;
        public NumericRegister(float margin)
        {
            HasToSend = (string val) => {
                float curr = float.Parse(val.Replace('.', ','));
                return Math.Abs(curr - prev) > margin || (prev != 0 && curr == 0);
            };
            Sent = (string val) => prev = float.Parse(val.Replace('.', ','));
        }
    }
    public class Parameter
    {
        public Dictionary<Register, Client> registers;
        public readonly string name;
        public Parameter(string name)
        {
            registers = new Dictionary<Register, Client>();
            this.name = name;
        }
        public Func<string> GetValue;
        public Action<string> SetValue;
        public void Send()
        {
            if(GetValue == null) return;
            string val = GetValue();
            if (val == null) return;
            foreach (Register r in registers.Keys)
            {
                if (r.HasToSend(val))
                {
                    registers[r].WriteLine(name + '=' + val);
                    if(r.Sent!=null) r.Sent(val);
                }
            }
        }
        public bool Matches(string topic)
        {
            string[] t1 = topic.Split(new string[]{"::"}, StringSplitOptions.None);
            string[] t2 = name.Split(new string[]{"::"}, StringSplitOptions.None);
            for (int i=0; i<t1.Length && i<t2.Length; i++)
            {
                if (t1[i] == "*")
                    return true;
                if (t1[i] != "+" && t1[i] != t2[i])
                    return false;
            }
            return t1.Length == t2.Length;
        }
        public void RemoveClient(Client c)
        {
            foreach(var item in registers.Where(kvp => kvp.Value == c).ToList())
            {
                registers.Remove(item.Key);
            }
        }
        public override bool Equals(object obj)
        {
            if (obj is Parameter) return name.Equals((obj as Parameter).name);
            return name.Equals(obj);
        }
        public override int GetHashCode()
        {
            return name.GetHashCode();
        }
    }
    public abstract class InteractiveTCS : TrainControlSystem
    {
        public ServerTCS tcs;
        public bool Emergency = false;
        public bool FullBrake = false;
        public bool TCO = false;
        public abstract List<Parameter> GetParameters();
        public InteractiveTCS(ServerTCS tcs)
        {
            this.tcs = tcs;
        }
    }

    public class HM : InteractiveTCS
    {
        float HMReleasedAlertDelayS;
        float HMReleasedEmergencyDelayS;
        float HMPressedAlertDelayS;
        float HMPressedEmergencyDelayS;

        public bool Pressed = false;
        Timer HMPressedAlertTimer;
        Timer HMPressedEmergencyTimer;
        Timer HMReleasedAlertTimer;
        Timer HMReleasedEmergencyTimer;

        public HM(ServerTCS tcs) : base(tcs)
        {
            SetVigilanceAlarm = (value) => { if (Activated) tcs.SetVigilanceAlarm(value); };
            SetVigilanceAlarmDisplay = (value) => { if (Activated) tcs.SetVigilanceAlarmDisplay(value); };
            SetVigilanceEmergencyDisplay = (value) => { if (Activated) tcs.SetVigilanceAlarm(value); };
        }

        public override void SetEmergency(bool emergency)
        {
            throw new NotImplementedException();
        }

        bool InvertResetButton = false;
        bool ResetAtStandstill = false;
        bool ResetWhenPressed = false;

        public override void HandleEvent(TCSEvent evt, string message)
        {
            switch (evt)
            {
                case TCSEvent.AlerterPressed:
                    Pressed = !InvertResetButton;
                    break;
                case TCSEvent.AlerterReleased:
                    Pressed = InvertResetButton;
                    break;
            }

            
        }

        public override void Initialize()
        {
            InvertResetButton = tcs.GetBoolParameter("HM", "InvertirBoton", true);
            HMReleasedAlertDelayS = tcs.GetFloatParameter("HM", "AvisoLevantado", 2.5f);
            HMReleasedEmergencyDelayS = tcs.GetFloatParameter("HM", "UrgenciaLevantado", 5);
            HMPressedAlertDelayS = tcs.GetFloatParameter("HM", "AvisoPisado", 32.5f);
            HMPressedEmergencyDelayS = tcs.GetFloatParameter("HM", "UrgenciaPisado", 35);
            ResetWhenPressed = tcs.GetBoolParameter("HM", "RearmarAlPulsar", false);
            ResetAtStandstill = tcs.GetBoolParameter("HM", "RearmarEnParado", false);

            HMPressedAlertTimer = new Timer(tcs);
            HMPressedAlertTimer.Setup(HMPressedAlertDelayS);
            HMPressedEmergencyTimer = new Timer(tcs);
            HMPressedEmergencyTimer.Setup(HMPressedEmergencyDelayS);
            HMReleasedAlertTimer = new Timer(tcs);
            HMReleasedAlertTimer.Setup(HMReleasedAlertDelayS);
            HMReleasedEmergencyTimer = new Timer(tcs);
            HMReleasedEmergencyTimer.Setup(HMReleasedEmergencyDelayS);
        }

        public override void Update()
        {

            

            if (!Activated || !tcs.IsAlerterEnabled() || tcs.IsDirectionNeutral())
            {
                HMReleasedAlertTimer.Stop();
                HMReleasedEmergencyTimer.Stop();
                HMPressedAlertTimer.Stop();
                HMPressedEmergencyTimer.Stop();

                if (Emergency)
                {
                    Emergency = false;
                    SetVigilanceEmergencyDisplay(false);
                }

                if (tcs.AlerterSound())
                    SetVigilanceAlarm(false);

                SetVigilanceAlarmDisplay(false);
                tcs.SetCabDisplayControl(31, 0);
                return;
            }

            tcs.SetCabDisplayControl(31, 1);

            if (Pressed && (!HMPressedAlertTimer.Started || !HMPressedEmergencyTimer.Started))
            {
                HMReleasedAlertTimer.Stop();
                HMReleasedEmergencyTimer.Stop();
                HMPressedAlertTimer.Start();
                HMPressedEmergencyTimer.Start();

                if (tcs.AlerterSound())
                    SetVigilanceAlarm(false);

                SetVigilanceAlarmDisplay(false);

                if (Emergency && ResetWhenPressed)
                {
                    Emergency = false;
                    SetVigilanceEmergencyDisplay(false);
                }
            }

            if (Pressed && HMPressedAlertTimer.RemainingValue < 2.5f)
            {
                SetVigilanceAlarmDisplay(true);
            }

            if (!Pressed && (!HMReleasedAlertTimer.Started || !HMReleasedEmergencyTimer.Started))
            {
                HMReleasedAlertTimer.Start();
                HMReleasedEmergencyTimer.Start();
                HMPressedAlertTimer.Stop();
                HMPressedEmergencyTimer.Stop();

                if (tcs.AlerterSound())
                    SetVigilanceAlarm(false);

                SetVigilanceAlarmDisplay(true);

                if (Emergency && ResetWhenPressed)
                {
                    Emergency = false;
                    SetVigilanceEmergencyDisplay(false);
                }
            }

            if (HMReleasedAlertTimer.Triggered || HMPressedAlertTimer.Triggered)
            {
                if (!tcs.AlerterSound())
                    SetVigilanceAlarm(true);

                SetVigilanceAlarmDisplay(true);
            }
            else
            {
                if (tcs.AlerterSound())
                    SetVigilanceAlarm(false);
            }

            if (!Emergency && (HMPressedEmergencyTimer.Triggered || HMReleasedEmergencyTimer.Triggered))
            {
                Emergency = true;

                if (tcs.AlerterSound())
                    SetVigilanceAlarm(false);

                SetVigilanceAlarmDisplay(false);
                SetVigilanceEmergencyDisplay(true);
            }

            if (Emergency && tcs.SpeedMpS() < 1.5f && ResetAtStandstill)
            {
                Emergency = false;
                SetVigilanceEmergencyDisplay(false);
            }
        }

        public override List<Parameter> GetParameters()
        {
            List<Parameter> l = new List<Parameter>();
            Parameter p;

            p = new Parameter("hm::pressed");
            p.SetValue = (string val) => { Pressed = val == "1" || val == "true"; };
            l.Add(p);

            return l;
        }
    }


    public class CONVELDigital : InteractiveTCS
    {
        bool acknowledged = false;
        bool overspeed = false;
        bool interventionActive = false;
        double interventionReleaseTime = 0.0;
        bool brakeReleaseAllowed = false;
        double serviceBrakeStartTime = 0.0;
        float serviceBrakeStartSpeedKmh = 0.0f;
        bool objectiveThreeSecondWarningDone = false;
        bool initialRestrictionReleaseAvailable = false;
        float currentLimitMpS = 0.0f;
        float targetLimitMpS = 0.0f;
        float releaseDistanceM = 100.0f;
        float startDistanceM = 0.0f;
        bool started = false;
        // --- NOVO: estados simples de arranque ---
        bool convelActive = false;
        bool selfTest = false;
        double selfTestEnd = 0.0;
        bool waitingData = false;
        bool ready = false;
        // --- NOVO: fases de arranque e temporizadores ---
        bool phase551 = false;
        double codeChangeTime = 0.0;
        bool firstBeepDone = false;
        bool brakeTestRunning = false;
        int brakeTestStep = 0;
        bool waitingRestartBreaker = false;
        bool phase390 = false;
        bool phase000 = false;
        bool hasSeenFirstTrackInfo = false;
        bool displayUnlocked = false;
        bool waitingPanelTestConfirm = false;
        bool panelLampTestActive = false;
        double panelLampTestEnd = 0.0;
        int panelTestStage = 0;
        string lastDisplayPerm = "";
        string lastDisplayTarget = "";
        double lastDisplayBeepTime = -10.0;
        bool objectiveBlinkActive = false;
        string lastObjectiveBlinkValue = "";

        // Pressões para os ensaios reais do freio CONVEL
        bool waitingForBrakePipeAbove42 = false;
        float brakePipeAtStepStart = 0.0f;
        float brakeCylinderAtStepStart = 0.0f;
        bool brakePipeReadOk = false;
        bool brakeCylinderReadOk = false;

        const float CG_MIN_START_BAR = 3.0f;
        const float CG_MIN_AFTER_551_BAR = 4.2f;
        const float CG_DROP_CONFIRM_BAR = 0.15f;
        const float BC_RISE_CONFIRM_BAR = 0.10f;
        const float TEST_FALLBACK_TIMEOUT_S = 8.0f;

        public CONVELDigital(ServerTCS tcs) : base(tcs)
        {
        }

        public override void Initialize()
        {
            Emergency = false;
            FullBrake = false;
            TCO = false;

            acknowledged = false;
            overspeed = false;
            interventionActive = false;
            brakeReleaseAllowed = false;
            serviceBrakeStartTime = 0.0;
            serviceBrakeStartSpeedKmh = 0.0f;
            objectiveThreeSecondWarningDone = false;
            initialRestrictionReleaseAvailable = false;
            convelActive = false;
            selfTest = false;
            selfTestEnd = 0.0;
            waitingData = false;
            ready = false;
            phase551 = false;
            codeChangeTime = 0.0;
            firstBeepDone = false;
            brakeTestRunning = false;
            brakeTestStep = 0;
            waitingRestartBreaker = false;
            phase390 = false;
            phase000 = false;
            hasSeenFirstTrackInfo = false;
            displayUnlocked = false;
            waitingPanelTestConfirm = false;
            panelLampTestActive = false;
            panelLampTestEnd = 0.0;
            panelTestStage = 0;
            lastDisplayPerm = "";
            lastDisplayTarget = "";
            lastDisplayBeepTime = -10.0;
            objectiveBlinkActive = false;
            lastObjectiveBlinkValue = "";
            objectiveThreeSecondWarningDone = false;
            initialRestrictionReleaseAvailable = false;
            waitingForBrakePipeAbove42 = false;
            brakePipeAtStepStart = 0.0f;
            brakeCylinderAtStepStart = 0.0f;
            brakePipeReadOk = false;
            brakeCylinderReadOk = false;

            currentLimitMpS = MpS.FromKpH(30.0f);
            targetLimitMpS = currentLimitMpS;
            startDistanceM = tcs.DistanceM();
            started = true;

            tcs.SendParameter("convel::status", "Inicializado");
            tcs.SendParameter("convel::mode", "RestricaoInicial30");
            tcs.SendParameter("convel::vperm", "");
            tcs.SendParameter("convel::vtarget", "");
            tcs.SendParameter("convel::overspeed", "0");
            tcs.SendParameter("convel::emergency", "0");
            tcs.SendParameter("convel::fullbrake", "0");
            tcs.SendParameter("convel::tractioncutoff", "0");
            tcs.SendParameter("convel::brakerelease", "0");
            tcs.SendParameter("convel::vpermblinkfast", "0");

            Console.WriteLine("CONVEL activated!");
        }

        public override void Update()
        {
            if (!started)
                return;


            float speedMpS = tcs.SpeedMpS();
            float speedKmh = MpS.ToKpH(speedMpS);
            float distanceFromStart = tcs.DistanceM() - startDistanceM;

            float currentPostMpS = tcs.CurrentPostSpeedLimitMpS();
            float nextPostMpS = tcs.NextPostSpeedLimitMpS(0);
            float nextPostDistanceM = tcs.NextPostDistanceM(0);

            Aspect nextSignalAspect = tcs.NextSignalAspect(0);
            float nextSignalDistanceM = tcs.NextSignalDistanceM(0);

            float brakePipeBar = GetBrakePipePressureBar();
            float brakeCylinderBar = GetBrakeCylinderPressureBar();

            tcs.SendParameter("convel::brakepipe", brakePipeReadOk ? brakePipeBar.ToString("0.00").Replace(',', '.') : "NA");
            tcs.SendParameter("convel::brakecyl", brakeCylinderReadOk ? brakeCylinderBar.ToString("0.00").Replace(',', '.') : "NA");

            // -----------------------------
            // ARRANQUE CONVEL
            // -----------------------------
            if (!convelActive)
            {
                tcs.SendParameter("convel::status", "OFF");
                tcs.SendParameter("convel::vperm", "---");
                tcs.SendParameter("convel::vtarget", "---");
                tcs.SendParameter("convel::vpermblink", "0");
                tcs.SendParameter("convel::vpermblinkfast", "0");
                tcs.SendParameter("convel::brakerelease", "0");
                return;
            }

            if (selfTest)
            {
                double nowTest = tcs.ClockTime();

                // Fase de arranque: 000 + LED vermelho + apito inicial
                if (nowTest < selfTestEnd)
                {
                    // Apito longo inicial do CONVEL ao ligar: inicia uma vez.
                    if (!firstBeepDone)
                    {
                        tcs.TriggerSoundPenalty1();
                        tcs.SendParameter("convel::sound", "signal");
                        firstBeepDone = true;
                    }

                    tcs.SendParameter("convel::mode", "TESTE");
                    tcs.SendParameter("convel::status", "BIP_INICIAL");
                    
                    tcs.SendParameter("convel::vperm", "");
                    tcs.SendParameter("convel::vtarget", "");
                    tcs.SendParameter("convel::systemerror", "1");
                    tcs.SendParameter("convel::emergency", "0");
                    tcs.SendParameter("convel::overspeed", "0");
                    tcs.SendParameter("convel::fullbrake", "0");
                    tcs.SendParameter("convel::tractioncutoff", "0");
                    return;
                }

                // 000 = etapa visual antes da espera de pressão
                if (!phase000)
                {
                    // Termina o apito longo inicial antes de começar a sequência de códigos.
                    if (firstBeepDone)
                    {
                        tcs.TriggerSoundPenalty2();
                        firstBeepDone = false;
                    }

                    tcs.SendParameter("convel::mode", "TESTE");
                    tcs.SendParameter("convel::status", "000");
                    tcs.SendParameter("convel::vperm", "000");
                    tcs.SendParameter("convel::vtarget", "");
                    tcs.SendParameter("convel::systemerror", "0");
                    tcs.SendParameter("convel::emergency", "0");

                    if ((nowTest - selfTestEnd) >= 1.0)
                    {
                        phase000 = true;
                        codeChangeTime = nowTest;
                        Console.WriteLine("CONVEL -> 390");
                    }

                    return;
                }

                // 390 = etapa visual antes da espera de pressão
                if (!phase390)
                {
                                       
                    tcs.SendParameter("convel::mode", "TESTE");
                    tcs.SendParameter("convel::status", "390");
                    tcs.SendParameter("convel::vperm", "390");
                    tcs.SendParameter("convel::vtarget", "");
                    tcs.SendParameter("convel::systemerror", "0");
                    tcs.SendParameter("convel::emergency", "0");

                    if ((nowTest - selfTestEnd) >= 3.0)
                    {
                        phase390 = true;
                        codeChangeTime = nowTest;
                        Console.WriteLine("CONVEL -> 550");
                    }

                    return;
                }

                // 550 = fica ativo enquanto a pressão da conduta geral for inferior a 3 bar
                if (!phase551)
                {
                    tcs.SendParameter("convel::mode", "TESTE_PRESSAO");
                    tcs.SendParameter("convel::status", brakePipeReadOk ? ("550 CG=" + brakePipeBar.ToString("0.00").Replace(',', '.')) : "550 CG=NA");
                    tcs.SendParameter("convel::vperm", "550");
                    tcs.SendParameter("convel::vtarget", "");

                    // Se a API da CG existir, só avança acima de 3 bar.
                    // Se não existir, mantém compatibilidade e não bloqueia o arranque.
                    if ((brakePipeReadOk && brakePipeBar >= CG_MIN_START_BAR) || (!brakePipeReadOk && (nowTest - codeChangeTime) >= 2.0))
                    {
                        phase551 = true;
                        codeChangeTime = nowTest;
                        Console.WriteLine("CONVEL -> 551");
                    }

                    return;
                }

                // 551 = corte do disjuntor e espera da tecla de introdução de dados
                if (brakeTestStep == 0)
                {
                    tcs.SendParameter("convel::mode", "TESTE");
                    tcs.SendParameter("convel::status", "551");
                    tcs.SendParameter("convel::vperm", "551");
                    tcs.SendParameter("convel::vtarget", "");
                    tcs.SendParameter("convel::tractioncutoff", "1");

                    if (!waitingData)
                    {
                        waitingData = true;
                        Console.WriteLine("CONVEL -> WAIT DATA AT 551");
                    }
                    return;
                }

                // 400-402 = aguarda que a conduta geral ultrapasse 4,2 bar
                if (waitingForBrakePipeAbove42)
                {
                    tcs.SendParameter("convel::mode", "TESTE_PRESSAO");
                    tcs.SendParameter("convel::status", brakePipeReadOk ? ("400 CG=" + brakePipeBar.ToString("0.00").Replace(',', '.')) : "400 CG=NA");
                    tcs.SendParameter("convel::vperm", "400");
                    tcs.SendParameter("convel::vtarget", "");
                    TCO = false;

                    if ((brakePipeReadOk && brakePipeBar >= CG_MIN_AFTER_551_BAR) || (!brakePipeReadOk && (tcs.ClockTime() - codeChangeTime) >= 2.0))
                    {
                        waitingForBrakePipeAbove42 = false;
                        BeginBrakeStep(403, brakePipeBar, brakeCylinderBar);
                    }
                    return;
                }

                // -----------------------------
                // FASE 2 - TESTE DOS ORGAOS DE FREIO
                // -----------------------------
                if (brakeTestStep == 403)
                {
                    tcs.SendParameter("convel::mode", "TESTE_FREIO");
                    tcs.SendParameter("convel::status", BrakeStatus("403", brakePipeBar, brakeCylinderBar));
                    tcs.SendParameter("convel::vperm", "403");
                    tcs.SendParameter("convel::vtarget", "");
                    FullBrake = true;

                    if (BrakeActionConfirmed(brakePipeBar, brakeCylinderBar))
                    {
                        brakeTestStep = 404;
                        codeChangeTime = tcs.ClockTime();
                        Console.WriteLine("CONVEL -> 404");
                    }
                    return;
                }

                if (brakeTestStep == 404)
                {
                    tcs.SendParameter("convel::mode", "TESTE_FREIO");
                    tcs.SendParameter("convel::status", "404");
                    tcs.SendParameter("convel::vperm", "404");
                    tcs.SendParameter("convel::vtarget", "");
                    FullBrake = false;

                    if ((brakePipeReadOk && brakePipeBar >= CG_MIN_AFTER_551_BAR) || (tcs.ClockTime() - codeChangeTime) >= 3.0)
                    {
                        BeginBrakeStep(405, brakePipeBar, brakeCylinderBar);
                    }
                    return;
                }

                if (brakeTestStep == 405)
                {
                    tcs.SendParameter("convel::mode", "TESTE_FREIO");
                    tcs.SendParameter("convel::status", BrakeStatus("405", brakePipeBar, brakeCylinderBar));
                    tcs.SendParameter("convel::vperm", "405");
                    tcs.SendParameter("convel::vtarget", "");
                    FullBrake = true;

                    if (BrakeActionConfirmed(brakePipeBar, brakeCylinderBar))
                    {
                        brakeTestStep = 406;
                        codeChangeTime = tcs.ClockTime();
                        Console.WriteLine("CONVEL -> 406");
                    }
                    return;
                }

                if (brakeTestStep == 406)
                {
                    tcs.SendParameter("convel::mode", "TESTE_FREIO");
                    tcs.SendParameter("convel::status", "406");
                    tcs.SendParameter("convel::vperm", "406");
                    tcs.SendParameter("convel::vtarget", "");
                    FullBrake = false;

                    if ((brakePipeReadOk && brakePipeBar >= CG_MIN_AFTER_551_BAR) || (tcs.ClockTime() - codeChangeTime) >= 3.0)
                    {
                        BeginBrakeStep(407, brakePipeBar, brakeCylinderBar);
                    }
                    return;
                }


                if (brakeTestStep == 407)
                {
                    tcs.SendParameter("convel::mode", "TESTE_FREIO");
                    tcs.SendParameter("convel::status", "407");
                    tcs.SendParameter("convel::vperm", "407");
                    tcs.SendParameter("convel::vtarget", "");
                    Emergency = false;
                    FullBrake = false;
                    TCO = false;

                    if ((tcs.ClockTime() - codeChangeTime) >= 0.8)
                    {
                        brakeTestStep = 408;
                        codeChangeTime = tcs.ClockTime();
                        Console.WriteLine("CONVEL -> 408");
                    }
                    return;
                }

                if (brakeTestStep == 408)
                {
                    tcs.SendParameter("convel::mode", "TESTE_FREIO");
                    tcs.SendParameter("convel::status", "408");
                    tcs.SendParameter("convel::vperm", "408");
                    tcs.SendParameter("convel::vtarget", "");
                    Emergency = false;
                    FullBrake = false;
                    TCO = false;

                    if ((tcs.ClockTime() - codeChangeTime) >= 0.8)
                    {
                        BeginBrakeStep(409, brakePipeBar, brakeCylinderBar);
                    }
                    return;
                }

                if (brakeTestStep == 409)
                {
                    tcs.SendParameter("convel::mode", "TESTE_FREIO");
                    tcs.SendParameter("convel::status", BrakeStatus("409", brakePipeBar, brakeCylinderBar));
                    tcs.SendParameter("convel::vperm", "409");
                    tcs.SendParameter("convel::vtarget", "");
                    Emergency = true;
                    FullBrake = true;
                    TCO = true;

                    if (BrakeActionConfirmed(brakePipeBar, brakeCylinderBar))
                    {
                        brakeTestStep = 410;
                        codeChangeTime = tcs.ClockTime();
                        Console.WriteLine("CONVEL -> 410");
                    }
                    return;
                }

                if (brakeTestStep == 410)
                {
                    tcs.SendParameter("convel::mode", "TESTE_FREIO");
                    tcs.SendParameter("convel::status", BrakeStatus("410", brakePipeBar, brakeCylinderBar));
                    tcs.SendParameter("convel::vperm", "410");
                    tcs.SendParameter("convel::vtarget", "");

                    // No vídeo, nesta fase o sistema liberta a frenagem total.
                    Emergency = false;
                    FullBrake = false;
                    TCO = true;

                    if ((tcs.ClockTime() - codeChangeTime) >= 1.0)
                    {
                        brakeTestStep = 411;
                        codeChangeTime = tcs.ClockTime();
                        Console.WriteLine("CONVEL -> 411");
                    }
                    return;
                }

                if (brakeTestStep == 411)
                {
                    tcs.SendParameter("convel::mode", "TESTE_FREIO");
                    tcs.SendParameter("convel::status", BrakeStatus("411", brakePipeBar, brakeCylinderBar));
                    tcs.SendParameter("convel::vperm", "411");
                    tcs.SendParameter("convel::vtarget", "");

                    // Aguarda a conduta geral encher novamente antes do 552.
                    Emergency = false;
                    FullBrake = false;
                    TCO = true;

                    if ((brakePipeReadOk && brakePipeBar >= CG_MIN_AFTER_551_BAR) ||
                        (!brakePipeReadOk && (tcs.ClockTime() - codeChangeTime) >= 4.0))
                    {
                        brakeTestStep = 552;
                        codeChangeTime = tcs.ClockTime();
                        waitingRestartBreaker = true;
                        Console.WriteLine("CONVEL -> 552");
                    }
                    return;
                }

                if (brakeTestStep == 552)
                {
                    tcs.SendParameter("convel::mode", "TESTE_FREIO");
                    tcs.SendParameter("convel::status", "552");
                    tcs.SendParameter("convel::vperm", "552");
                    tcs.SendParameter("convel::vtarget", "");
                    Emergency = false;
                    FullBrake = false;
                    TCO = true;

                    if (!waitingData)
                    {
                        waitingData = true;
                        Console.WriteLine("CONVEL -> WAIT DATA AT 552");
                    }
                    return;
                }

                if (brakeTestStep == 600)
                {
                    tcs.SendParameter("convel::mode", "TESTE_INTERNO");
                    tcs.SendParameter("convel::status", "600");
                    tcs.SendParameter("convel::vperm", "600");
                    tcs.SendParameter("convel::vtarget", "");
                    Emergency = false;
                    FullBrake = false;
                    TCO = false;

                    if ((tcs.ClockTime() - codeChangeTime) >= 1.5)
                    {
                        brakeTestStep = 700;
                        codeChangeTime = tcs.ClockTime();
                        Console.WriteLine("CONVEL -> 700");
                    }
                    return;
                }

                if (brakeTestStep == 700 && panelTestStage == 0 && !panelLampTestActive && !waitingPanelTestConfirm)
                {
                    tcs.SendParameter("convel::mode", "TESTE_PAINEL");
                    tcs.SendParameter("convel::status", "700");
                    tcs.SendParameter("convel::vperm", "700");
                    tcs.SendParameter("convel::vtarget", "");
                    tcs.SendParameter("convel::systemerror", "0");
                    tcs.SendParameter("convel::emergency", "0");
                    tcs.SendParameter("convel::fullbrake", "0");
                    tcs.SendParameter("convel::tractioncutoff", "0");
                    tcs.SendParameter("convel::overspeed", "0");
                    tcs.SendParameter("convel::intdadosled", "0");
                    tcs.SendParameter("convel::balizaerror", "0");
                    tcs.SendParameter("convel::restricaoled", "0");
                    tcs.SendParameter("convel::manobrasled", "0");

                    // Mostra 700 durante 1,5 s. Depois apaga o painel e fica só
                    // o LED de Erro de Sistema a piscar até à Introdução de Dados.
                    if ((tcs.ClockTime() - codeChangeTime) >= 1.5)
                    {
                        panelTestStage = 1;
                        waitingPanelTestConfirm = true;
                        waitingData = true;

                        tcs.SendParameter("convel::status", "ERRO_SISTEMA");
                        tcs.SendParameter("convel::vperm", "");
                        tcs.SendParameter("convel::vtarget", "");
                        tcs.SendParameter("convel::systemerror", "1");
                        tcs.SendParameter("convel::emergency", "0");
                        tcs.SendParameter("convel::intdadosled", "0");
                        tcs.SendParameter("convel::balizaerror", "0");
                        tcs.SendParameter("convel::restricaoled", "0");
                    tcs.SendParameter("convel::manobrasled", "0");
                        tcs.SendParameter("convel::sound", "warning_on");
                        Console.WriteLine("CONVEL -> 700 SYSTEM ERROR BLINK");
                    }
                    return;
                }

                if (brakeTestStep == 700 && panelLampTestActive)
                {
                    if (tcs.ClockTime() < panelLampTestEnd)
                    {
                        tcs.SendParameter("convel::mode", "TESTE_PAINEL");
                        tcs.SendParameter("convel::status", "TESTE_LAMPADAS");
                        tcs.SendParameter("convel::vperm", "888");
                        tcs.SendParameter("convel::vtarget", "888");
                        // Teste geral: acendem todos os indicadores e mostradores,
                        // exceto o Erro de Sistema, que já piscou antes do teste.
                        tcs.SendParameter("convel::systemerror", "0");
                        tcs.SendParameter("convel::emergency", "1");
                        tcs.SendParameter("convel::fullbrake", "1");
                        tcs.SendParameter("convel::tractioncutoff", "1");
                        tcs.SendParameter("convel::overspeed", "1");
                        tcs.SendParameter("convel::intdadosled", "1");
                        tcs.SendParameter("convel::balizaerror", "1");
                        tcs.SendParameter("convel::restricaoled", "1");
                        tcs.SendParameter("convel::manobrasled", "1");
                        return;
                    }

                    panelLampTestActive = false;

                    // Depois do primeiro teste geral, fica só a tecla de Introdução
                    // de Dados a piscar à espera da segunda confirmação.
                    if (panelTestStage == 2)
                    {
                        waitingPanelTestConfirm = true;
                        waitingData = true;

                        tcs.SendParameter("convel::mode", "TESTE_PAINEL");
                        tcs.SendParameter("convel::status", "AGUARDA_CONFIRMACAO");
                        tcs.SendParameter("convel::vperm", "");
                        tcs.SendParameter("convel::vtarget", "");
                        tcs.SendParameter("convel::systemerror", "0");
                        tcs.SendParameter("convel::emergency", "0");
                        tcs.SendParameter("convel::fullbrake", "0");
                        tcs.SendParameter("convel::tractioncutoff", "0");
                        tcs.SendParameter("convel::overspeed", "0");
                        tcs.SendParameter("convel::intdadosled", "1");
                        tcs.SendParameter("convel::balizaerror", "0");
                        tcs.SendParameter("convel::restricaoled", "0");
                        tcs.SendParameter("convel::manobrasled", "0");

                        Console.WriteLine("CONVEL -> WAIT SECOND PANEL CONFIRMATION");
                        return;
                    }

                    // Depois do segundo teste geral, entra em serviço sem pedir
                    // mais uma pressão da tecla de Introdução de Dados.
                    if (panelTestStage == 3)
                    {
                        FinishPanelTestAndReady();
                        return;
                    }
                }
            }
            if (waitingData && !ready)
            {
                tcs.SendParameter("convel::status", "DADOS");
                tcs.SendParameter("convel::vperm", "---");
                tcs.SendParameter("convel::vtarget", "---");
                tcs.SendParameter("convel::vpermblink", "0");
                tcs.SendParameter("convel::vpermblinkfast", "0");
                return;
            }

            if (!acknowledged)
            {
                // ICS 104/06, ponto 4.1.2: depois da inicialização a velocidade
                // permitida inicial é 30 km/h. Essa restrição mantém-se até passar
                // por balizas/sinal equipado ou até serem percorridos cerca de 100 m.
                // Como no Open Rails ainda não temos balizas CONVEL reais, NÃO devemos
                // aceitar automaticamente o CurrentPostSpeedLimitMpS() logo ao arrancar,
                // senão o display verde mostra imediatamente a velocidade da via.
                currentLimitMpS = MpS.FromKpH(30.0f);
                targetLimitMpS = currentLimitMpS;

                if (distanceFromStart >= releaseDistanceM)
                {
                    initialRestrictionReleaseAvailable = true;
                    tcs.SendParameter("convel::restricaoled", "1");
                    tcs.SendParameter("convel::status", "Anular restricao inicial");
                    tcs.SendParameter("convel::mode", "RestricaoInicial30");
                }
                else
                {
                    initialRestrictionReleaseAvailable = false;
                    tcs.SendParameter("convel::restricaoled", "0");
                    tcs.SendParameter("convel::status", "Restricao inicial 30");
                    tcs.SendParameter("convel::mode", "RestricaoInicial30");
                }
            }
            else
            {
                if (currentPostMpS > 0.1f)
                    currentLimitMpS = currentPostMpS;
                else
                    currentLimitMpS = MpS.FromKpH(120.0f);

                if (nextPostMpS > 0.1f)
                    targetLimitMpS = nextPostMpS;
                else
                    targetLimitMpS = currentLimitMpS;

                if (nextSignalAspect == Aspect.Stop ||
                    nextSignalAspect == Aspect.StopAndProceed ||
                    nextSignalAspect == Aspect.Restricted)
                {
                    if (nextSignalDistanceM > 0 && nextSignalDistanceM < 1500)
                        targetLimitMpS = MpS.FromKpH(30.0f);
                }

                // Não assumir a nova velocidade antes do ponto real.
                // O display amarelo trata apenas da pré-anunciação a 800 m.
            }

            float limitKmh = MpS.ToKpH(currentLimitMpS);
            float targetKmh = MpS.ToKpH(targetLimitMpS);

            tcs.SendParameter("convel::speed", speedKmh.ToString("0.0").Replace(',', '.'));
            tcs.SendParameter("convel::nextdist", nextPostDistanceM.ToString("0.0").Replace(',', '.'));
            tcs.SendParameter("convel::sigdist", nextSignalDistanceM.ToString("0.0").Replace(',', '.'));
            tcs.SendParameter("convel::ack", acknowledged ? "1" : "0");

            // Só desbloquear os displays quando surgir informação de via
            // diferente da restrição inicial interna de 30 km/h.
            if (!displayUnlocked && acknowledged && currentPostMpS > MpS.FromKpH(30.5f))
            {
                hasSeenFirstTrackInfo = true;
                displayUnlocked = true;
            }

            string displayPerm = "";
            string displayTarget = "";
            bool displayPermBlink = false;

            if (displayUnlocked)
            {
                // Display verde fixo = velocidade permitida atual.
                // Display verde intermitente = velocidade objetivo quando já estamos
                // perto da curva de travagem para uma restrição mais baixa.
                displayPerm = limitKmh.ToString("0.0").Replace(',', '.');

                bool hasLowerTarget =
                    nextPostMpS > 0.1f &&
                    nextPostMpS < currentLimitMpS &&
                    nextPostDistanceM > 0;

                // Display amarelo = pré-indicação fixa da próxima restrição.
                // Na via real isto vem da informação das balizas; aqui usamos o
                // próximo speedpost a 800 m como aproximação prática.
                bool showNext = hasLowerTarget && nextPostDistanceM <= 800.0f;

                if (showNext)
                    displayTarget = MpS.ToKpH(nextPostMpS).ToString("0.0").Replace(',', '.');

                // Aproximação simples da curva de travagem CONVEL.
                // O manual diz que a transição do display principal para velocidade
                // objetivo intermitente ocorre cerca de 6 s antes de uma possível
                // aplicação de freio de serviço. Usamos 0,60 m/s² como desaceleração
                // base enquanto não tivermos os dados reais do comboio introduzidos.
                if (hasLowerTarget)
                {
                    const float BRAKE_DECEL_MPS2 = 0.60f;
                    float brakingDistanceM = 0.0f;
                    if (speedMpS > nextPostMpS)
                        brakingDistanceM = ((speedMpS * speedMpS) - (nextPostMpS * nextPostMpS)) / (2.0f * BRAKE_DECEL_MPS2);

                    float sixSecondMarginM = Math.Max(50.0f, speedMpS * 6.0f);
                    bool nearObjectiveCurve = nextPostDistanceM <= (brakingDistanceM + sixSecondMarginM);

                    if (nearObjectiveCurve)
                    {
                        displayPerm = MpS.ToKpH(nextPostMpS).ToString("0.0").Replace(',', '.');
                        displayPermBlink = true;
                    }
                }
            }

            // Envia displays só quando mudam. Isto evita refrescamentos contínuos
            // no monitor e evita bips falsos por simples atualização de valores.
            bool permChanged = displayPerm != lastDisplayPerm;
            bool targetChanged = displayTarget != lastDisplayTarget;
            bool blinkChanged = displayPermBlink != objectiveBlinkActive;

            if (permChanged)
                tcs.SendParameter("convel::vperm", displayPerm);

            if (targetChanged)
                tcs.SendParameter("convel::vtarget", displayTarget);

            if (blinkChanged)
                tcs.SendParameter("convel::vpermblink", displayPermBlink ? "1" : "0");

            bool displayPermBlinkFast = displayPermBlink && speedMpS >= targetLimitMpS;
            tcs.SendParameter("convel::vpermblinkfast", displayPermBlinkFast ? "1" : "0");

            // Comportamento realista: NÃO apitar só por aparecer velocidade no
            // verde ou no amarelo. O bip é dado quando o display principal passa
            // de velocidade permitida fixa para velocidade objetivo intermitente.
            if (ready && displayUnlocked && displayPermBlink)
            {
                bool newObjectiveWarning = !objectiveBlinkActive || displayPerm != lastObjectiveBlinkValue;
                if (newObjectiveWarning && (tcs.ClockTime() - lastDisplayBeepTime) > 1.0)
                {
                    tcs.SendParameter("convel::sound", "signal");
                    lastDisplayBeepTime = tcs.ClockTime();
                    lastObjectiveBlinkValue = displayPerm;
                    objectiveThreeSecondWarningDone = false;
                }

                const float BRAKE_DECEL_FOR_WARNING_MPS2 = 0.60f;
                float brakingDistanceForWarningM = 0.0f;
                if (speedMpS > targetLimitMpS)
                    brakingDistanceForWarningM = ((speedMpS * speedMpS) - (targetLimitMpS * targetLimitMpS)) / (2.0f * BRAKE_DECEL_FOR_WARNING_MPS2);

                float threeSecondMarginM = Math.Max(25.0f, speedMpS * 3.0f);
                if (!objectiveThreeSecondWarningDone && nextPostDistanceM > 0 && nextPostDistanceM <= brakingDistanceForWarningM + threeSecondMarginM)
                {
                    tcs.SendParameter("convel::sound", "signal");
                    objectiveThreeSecondWarningDone = true;
                }
            }

            objectiveBlinkActive = displayPermBlink;
            if (!displayPermBlink)
            {
                lastObjectiveBlinkValue = "";
                objectiveThreeSecondWarningDone = false;
            }

            lastDisplayPerm = displayPerm;
            lastDisplayTarget = displayTarget;

            // Supervisao de velocidade conforme ICS:
            // +5 km/h  -> LED velocidade excessiva + alarme acustico intermitente.
            // +10 km/h -> frenagem maxima de servico.
            // Emergencia apenas se a frenagem de servico nao for suficiente.
            const float OVERSPEED_WARNING_MARGIN_KMH = 5.0f;
            const float SERVICE_BRAKE_MARGIN_KMH = 10.0f;
            const float OVERSPEED_RELEASE_HYST_KMH = 1.0f;
            const double SERVICE_TO_EMERGENCY_DELAY_S = 5.0;
            double now = tcs.ClockTime();

            bool shouldWarnOverspeed = speedKmh > (limitKmh + OVERSPEED_WARNING_MARGIN_KMH);
            bool shouldStartServiceBrake = speedKmh > (limitKmh + SERVICE_BRAKE_MARGIN_KMH);
            bool shouldClearOverspeed = speedKmh <= (limitKmh + OVERSPEED_WARNING_MARGIN_KMH - OVERSPEED_RELEASE_HYST_KMH);
            bool shouldAllowBrakeRelease = speedKmh <= limitKmh;

            if (!ready)
                return;

            if (shouldWarnOverspeed && !overspeed)
            {
                overspeed = true;
                tcs.SendParameter("convel::overspeed", "1");
                tcs.SendParameter("convel::sound", "warning_on");
                tcs.SendParameter("convel::status", "Velocidade excessiva");

                Console.WriteLine(
                    "CONVEL overspeed warning | speed=" + speedKmh.ToString("0.0") +
                    " | limit=" + limitKmh.ToString("0.0") +
                    " | target=" + targetKmh.ToString("0.0"));
            }

            if (overspeed && shouldClearOverspeed && !interventionActive)
            {
                overspeed = false;
                tcs.SendParameter("convel::overspeed", "0");
                tcs.SendParameter("convel::sound", "warning_off");
                tcs.SendParameter("convel::status", "Velocidade normal");
            }

            if (shouldStartServiceBrake && !interventionActive)
            {
                interventionActive = true;
                brakeReleaseAllowed = false;
                interventionReleaseTime = now + SERVICE_TO_EMERGENCY_DELAY_S;
                serviceBrakeStartTime = now;
                serviceBrakeStartSpeedKmh = speedKmh;

                tcs.SendParameter("convel::overspeed", "1");
                tcs.SendParameter("convel::brakerelease", "0");
                tcs.SendParameter("convel::sound", "warning_on");
                tcs.SendParameter("convel::status", "Frenagem max servico");

                Console.WriteLine(
                    "CONVEL service brake | speed=" + speedKmh.ToString("0.0") +
                    " | limit=" + limitKmh.ToString("0.0") +
                    " | target=" + targetKmh.ToString("0.0"));
            }

            if (interventionActive && shouldAllowBrakeRelease && !brakeReleaseAllowed)
            {
                brakeReleaseAllowed = true;
                tcs.SendParameter("convel::brakerelease", "1");
                tcs.SendParameter("convel::sound", "warning_off");
                tcs.SendParameter("convel::status", "Libertar freio");
            }

            if (interventionActive)
            {
                FullBrake = true;
                TCO = true;

                // Emergência só se o freio de serviço não estiver a reduzir a velocidade
                // de forma minimamente eficaz depois de alguns segundos.
                bool insufficientServiceBrake =
                    now >= interventionReleaseTime &&
                    shouldStartServiceBrake &&
                    speedKmh > serviceBrakeStartSpeedKmh - 2.0f;

                Emergency = insufficientServiceBrake;
            }
            else
            {
                Emergency = false;
                FullBrake = false;
                TCO = false;
                brakeReleaseAllowed = false;
            }

            tcs.SendParameter("convel::emergency", (Emergency || FullBrake) ? "1" : "0");
            tcs.SendParameter("convel::fullbrake", FullBrake ? "1" : "0");
            tcs.SendParameter("convel::tractioncutoff", TCO ? "1" : "0");

            if (acknowledged && distanceFromStart >= releaseDistanceM && ((int)tcs.ClockTime()) % 5 == 0)
            {
                Console.WriteLine(
                    "CONVEL monitor | speed=" + speedKmh.ToString("0.0") +
                    " | current=" + limitKmh.ToString("0.0") +
                    " | target=" + targetKmh.ToString("0.0"));
            }
        }

        bool TryReadTcsFloatMethod(string methodName, out float value)
        {
            value = 0.0f;
            try
            {
                Type type = tcs.GetType();
                while (type != null)
                {
                    var method = type.GetMethod(methodName,
                        System.Reflection.BindingFlags.Instance |
                        System.Reflection.BindingFlags.Public |
                        System.Reflection.BindingFlags.NonPublic);

                    if (method != null)
                    {
                        object result = method.Invoke(tcs, null);
                        if (result != null)
                        {
                            value = Convert.ToSingle(result);
                            return true;
                        }
                    }
                    type = type.BaseType;
                }
            }
            catch
            {
            }
            return false;
        }

        float GetBrakePipePressureBar()
        {
            float value;
            brakePipeReadOk = TryReadTcsFloatMethod("BrakePipePressureBar", out value);
            if (brakePipeReadOk)
                return value;

            // Compatibilidade: se esta build do OR não expuser BrakePipePressureBar(),
            // não bloqueia o arranque. O monitor recebe convel::brakepipe=NA.
            return 5.0f;
        }

        float GetBrakeCylinderPressureBar()
        {
            float value;
            brakeCylinderReadOk = TryReadTcsFloatMethod("LocomotiveBrakeCylinderPressureBar", out value);
            if (brakeCylinderReadOk)
                return value;

            return 0.0f;
        }

        string BrakeStatus(string code, float brakePipeBar, float brakeCylinderBar)
        {
            string cg = brakePipeReadOk ? brakePipeBar.ToString("0.00").Replace(',', '.') : "NA";
            string bc = brakeCylinderReadOk ? brakeCylinderBar.ToString("0.00").Replace(',', '.') : "NA";
            return code + " CG=" + cg + " BC=" + bc;
        }

        void BeginBrakeStep(int step, float brakePipeBar, float brakeCylinderBar)
        {
            brakeTestStep = step;
            codeChangeTime = tcs.ClockTime();
            brakePipeAtStepStart = brakePipeBar;
            brakeCylinderAtStepStart = brakeCylinderBar;
            Console.WriteLine("CONVEL -> " + step.ToString());
        }

        bool BrakeActionConfirmed(float brakePipeBar, float brakeCylinderBar)
        {
            double elapsed = tcs.ClockTime() - codeChangeTime;

            bool pipeDropConfirmed = brakePipeReadOk && (brakePipeAtStepStart - brakePipeBar) >= CG_DROP_CONFIRM_BAR;
            bool cylinderRiseConfirmed = brakeCylinderReadOk && (brakeCylinderBar - brakeCylinderAtStepStart) >= BC_RISE_CONFIRM_BAR;

            if (pipeDropConfirmed || cylinderRiseConfirmed)
                return true;

            // Evita ficar preso se a API de pressão não existir ou se o modelo não responder ao comando.
            return elapsed >= TEST_FALLBACK_TIMEOUT_S;
        }

        void FinishPanelTestAndReady()
        {
            selfTest = false;
            phase551 = false;
            brakeTestStep = 0;
            waitingRestartBreaker = false;
            waitingPanelTestConfirm = false;
            panelLampTestActive = false;
            panelLampTestEnd = 0.0;
            panelTestStage = 0;
            lastDisplayPerm = "";
            lastDisplayTarget = "";
            lastDisplayBeepTime = -10.0;
            objectiveBlinkActive = false;
            lastObjectiveBlinkValue = "";
            objectiveThreeSecondWarningDone = false;
            initialRestrictionReleaseAvailable = false;
            waitingForBrakePipeAbove42 = false;
            ready = true;

            acknowledged = false;
            startDistanceM = tcs.DistanceM();
            currentLimitMpS = MpS.FromKpH(30.0f);
            targetLimitMpS = currentLimitMpS;
            hasSeenFirstTrackInfo = false;
            displayUnlocked = false;
            overspeed = false;
            interventionActive = false;
            interventionReleaseTime = 0.0;

            Emergency = false;
            FullBrake = false;
            TCO = false;

            tcs.SendParameter("convel::status", "Inicializado");
            tcs.SendParameter("convel::mode", "READY");
            tcs.SendParameter("convel::vperm", "");
            tcs.SendParameter("convel::vtarget", "");
            tcs.SendParameter("convel::vpermblink", "0");
            tcs.SendParameter("convel::vpermblinkfast", "0");
            tcs.SendParameter("convel::systemerror", "0");
            tcs.SendParameter("convel::emergency", "0");
            tcs.SendParameter("convel::fullbrake", "0");
            tcs.SendParameter("convel::tractioncutoff", "0");
            tcs.SendParameter("convel::brakerelease", "0");
            tcs.SendParameter("convel::overspeed", "0");
            tcs.SendParameter("convel::intdadosled", "0");
            tcs.SendParameter("convel::balizaerror", "0");
            tcs.SendParameter("convel::restricaoled", "0");
            tcs.SendParameter("convel::manobrasled", "0");
            tcs.SendParameter("convel::ack", "0");
            tcs.SendParameter("convel::sound", "warning_off");

            Console.WriteLine("CONVEL -> READY AFTER PANEL TESTS");
        }

        void ConfirmDataButton()
        {
            // No 700 o botão de Introdução de Dados tem de funcionar mesmo durante
            // as confirmações do teste de painel.
            if (!waitingData && !(brakeTestStep == 700 && (panelTestStage == 0 || waitingPanelTestConfirm)))
                return;

            waitingData = false;

            // Saída do 551 -> espera a CG subir acima de 4,2 bar antes do teste de freios
            if (phase551 && brakeTestStep == 0)
            {
                brakeTestStep = 400;
                waitingForBrakePipeAbove42 = true;
                codeChangeTime = tcs.ClockTime();
                TCO = false;
                tcs.SendParameter("convel::status", "400");
                tcs.SendParameter("convel::mode", "TESTE_PRESSAO");
                Console.WriteLine("CONVEL -> 400");
                return;
            }

            // Saída do 552 -> entra no 600
            if (brakeTestStep == 552)
            {
                brakeTestStep = 600;
                codeChangeTime = tcs.ClockTime();
                waitingRestartBreaker = false;

                tcs.SendParameter("convel::status", "600");
                tcs.SendParameter("convel::mode", "TESTE_INTERNO");
                Console.WriteLine("CONVEL -> 600");
                return;
            }

            // 700: primeira pressão cala o erro/alarme, apaga o painel e deixa a tecla a piscar.
            if (brakeTestStep == 700 && panelTestStage == 0)
            {
                panelTestStage = 1;
                waitingPanelTestConfirm = true;
                waitingData = true;

                tcs.SendParameter("convel::status", "AGUARDA_CONFIRMACAO");
                tcs.SendParameter("convel::mode", "TESTE_PAINEL");
                tcs.SendParameter("convel::vperm", "");
                tcs.SendParameter("convel::vtarget", "");
                tcs.SendParameter("convel::emergency", "0");
                tcs.SendParameter("convel::fullbrake", "0");
                tcs.SendParameter("convel::tractioncutoff", "0");
                tcs.SendParameter("convel::overspeed", "0");
                tcs.SendParameter("convel::intdadosled", "1");
                tcs.SendParameter("convel::balizaerror", "0");
                tcs.SendParameter("convel::restricaoled", "0");
                    tcs.SendParameter("convel::manobrasled", "0");

                Console.WriteLine("CONVEL -> 700 OFF / INTDADOS BLINK");
                return;
            }

            // Segunda pressão: primeiro teste de todos os LEDs/displays.
            if (brakeTestStep == 700 && waitingPanelTestConfirm && panelTestStage == 1)
            {
                panelTestStage = 2;
                panelLampTestActive = true;
                panelLampTestEnd = tcs.ClockTime() + 1.5;
                waitingPanelTestConfirm = false;
                waitingData = false;

                // Primeiro teste de LEDs: cala apenas o aviso repetido (tu-tu-tu).
                // O bip longo fica só para o último teste/ativação final do CONVEL.
                tcs.SendParameter("convel::sound", "warning_off");

                Console.WriteLine("CONVEL -> LAMP TEST 1");
                return;
            }

            // Terceira pressão: segundo teste de todos os LEDs/displays.
            if (brakeTestStep == 700 && waitingPanelTestConfirm && panelTestStage == 2)
            {
                panelTestStage = 3;
                panelLampTestActive = true;
                panelLampTestEnd = tcs.ClockTime() + 1.5;
                waitingPanelTestConfirm = false;
                waitingData = false;

                tcs.SendParameter("convel::sound", "signal");

                Console.WriteLine("CONVEL -> LAMP TEST 2");
                return;
            }

            // Compatibilidade: se ainda chegar uma pressão extra depois do
            // segundo teste, também fecha a inicialização.
            if (brakeTestStep == 700 && waitingPanelTestConfirm && panelTestStage == 3)
            {
                FinishPanelTestAndReady();
                return;
            }
        }

        public override List<Parameter> GetParameters()
        {
            List<Parameter> l = new List<Parameter>();
            Parameter p;

            p = new Parameter("convel::ack");
            p.SetValue = (string val) =>
            {
                if (val == "1")
                {
                    // Esta tecla é a Anulação de Restrição de Velocidade.
                    // Só deve libertar a restrição inicial depois de o LED próprio
                    // acender, ou seja, após cerca de 100 m sem informação de baliza.
                    if (initialRestrictionReleaseAvailable)
                    {
                        acknowledged = true;
                        initialRestrictionReleaseAvailable = false;
                        displayUnlocked = false; // será desbloqueado no Update com a velocidade real da via
                        lastDisplayPerm = "";
                        lastDisplayTarget = "";
                        tcs.SendParameter("convel::restricaoled", "0");
                        tcs.SendParameter("convel::status", "Restricao inicial anulada");
                        tcs.SendParameter("convel::mode", "Supervisao");
                    }
                    else
                    {
                        tcs.SendParameter("convel::status", "Restricao inicial ativa");
                    }
                }
            };
            l.Add(p);

            p = new Parameter("convel::reset");
            p.SetValue = (string val) =>
            {
                if (val == "1")
                {
                    if (!brakeReleaseAllowed && interventionActive)
                    {
                        tcs.SendParameter("convel::status", "Freio ainda nao libertavel");
                        return;
                    }

                    Emergency = false;
                    FullBrake = false;
                    TCO = false;
                    overspeed = false;
                    interventionActive = false;
                    interventionReleaseTime = 0.0;
                    brakeReleaseAllowed = false;

                    tcs.SendParameter("convel::overspeed", "0");
                    tcs.SendParameter("convel::emergency", "0");
                    tcs.SendParameter("convel::fullbrake", "0");
                    tcs.SendParameter("convel::tractioncutoff", "0");
                    tcs.SendParameter("convel::brakerelease", "0");
                    tcs.SendParameter("convel::sound", "warning_off");
                    tcs.SendParameter("convel::status", "Freio libertado");
                }
            };
            l.Add(p);

            p = new Parameter("convel::intdados");
            p.SetValue = (string val) =>
            {
                if (val == "1")
                    ConfirmDataButton();
            };
            l.Add(p);

            p = new Parameter("convel::brakepipe");
            p.GetValue = () => brakePipeReadOk ? GetBrakePipePressureBar().ToString("0.00").Replace(',', '.') : "NA";
            l.Add(p);

            p = new Parameter("convel::brakecyl");
            p.GetValue = () => brakeCylinderReadOk ? GetBrakeCylinderPressureBar().ToString("0.00").Replace(',', '.') : "NA";
            l.Add(p);

            return l;
        }

        public override void SetEmergency(bool emergency)
        {
            Emergency = emergency;
            FullBrake = emergency;
            if (!emergency)
                TCO = false;
        }

        public override void HandleEvent(TCSEvent evt, string message)
        {
            Console.WriteLine("CONVEL event=" + evt + " | message=" + (message ?? ""));

            if (evt == TCSEvent.CircuitBreakerClosed)
            {
                if (!convelActive)
                {
                    convelActive = true;
                    selfTest = true;
                    selfTestEnd = tcs.ClockTime() + 1.5;
                    waitingData = false;
                    ready = false;
                    phase551 = false;
                    firstBeepDone = false;
                    brakeTestRunning = false;
                    codeChangeTime = tcs.ClockTime();
                    brakeTestStep = 0;
                    waitingRestartBreaker = false;
                    phase390 = false;
                    phase000 = false;
                    hasSeenFirstTrackInfo = false;
                    displayUnlocked = false;
                    waitingPanelTestConfirm = false;
                    panelLampTestActive = false;
                    panelLampTestEnd = 0.0;
                    panelTestStage = 0;
                    lastDisplayPerm = "";
                    lastDisplayTarget = "";
                    lastDisplayBeepTime = -10.0;
                    objectiveBlinkActive = false;
                    lastObjectiveBlinkValue = "";
                    waitingForBrakePipeAbove42 = false;
                    brakePipeAtStepStart = 0.0f;
                    brakeCylinderAtStepStart = 0.0f;

                    tcs.SendParameter("convel::mode", "TESTE");
                    tcs.SendParameter("convel::status", "Arranque");
                    tcs.SendParameter("convel::vperm", "000");
                    tcs.SendParameter("convel::vtarget", "");
                    tcs.SendParameter("convel::systemerror", "1");
                    tcs.SendParameter("convel::emergency", "0");
                    tcs.SendParameter("convel::intdadosled", "0");
                    tcs.SendParameter("convel::balizaerror", "0");
                    tcs.SendParameter("convel::restricaoled", "0");
                    tcs.SendParameter("convel::manobrasled", "0");

                    Console.WriteLine("CONVEL -> START / 000");
                }
            }
            else if (evt == TCSEvent.CircuitBreakerOpen)
            {
                convelActive = false;
                selfTest = false;
                waitingData = false;
                ready = false;

                Emergency = false;
                FullBrake = false;
                TCO = false;
                overspeed = false;
                interventionActive = false;

                tcs.SendParameter("convel::status", "OFF");
                tcs.SendParameter("convel::mode", "OFF");
                tcs.SendParameter("convel::vperm", "---");
                tcs.SendParameter("convel::vtarget", "---");
                tcs.SendParameter("convel::vpermblink", "0");
                tcs.SendParameter("convel::vpermblinkfast", "0");
                tcs.SendParameter("convel::overspeed", "0");
                tcs.SendParameter("convel::systemerror", "0");
                tcs.SendParameter("convel::intdadosled", "0");
                tcs.SendParameter("convel::balizaerror", "0");
                tcs.SendParameter("convel::restricaoled", "0");
                    tcs.SendParameter("convel::manobrasled", "0");
                tcs.SendParameter("convel::emergency", "0");
                tcs.SendParameter("convel::fullbrake", "0");
                tcs.SendParameter("convel::tractioncutoff", "0");
                tcs.SendParameter("convel::brakerelease", "0");

                tcs.SendParameter("convel::sound", "warning_off");

                Console.WriteLine("CONVEL -> OFF");
            }
            else if (evt == TCSEvent.AlerterReset)
            {
                ConfirmDataButton();
            }
        }
    }

    public abstract class ASFA : InteractiveTCS
    {
        public enum Freq
        {
            FP,
            L1,
            L2,
            L3,
            L4,
            L5,
            L6,
            L7,
            L8,
            L9,
            L10,
            L11,
            AL
        }
        float LVIstart = 0;
        Freq lvi1 = Freq.L11;
        Freq lvi2 = Freq.L11;
        bool LineaEquipadaComprobado = false;
        bool LineaEquipada = false;
        public ASFA(ServerTCS tcs) : base(tcs)
        {
        }
        public override void Update()
        {
            if(!LineaEquipadaComprobado)
            {
                
                LineaEquipadaComprobado = true;
            }
            UpdateSignalPassed();
            UpdateDistanciaPrevia();
        }
        Random rnd = new Random();
        
        Freq GetBalizaAspect()
        {
            if (!LineaEquipada)
            {
                for(int i=0; i<4; i++)
                {
                    if(tcs.NextPostDistanceM(i)<=1500 && tcs.NextPostDistanceM(i)>=1495 && tcs.CurrentPostSpeedLimitMpS() - tcs.NextPostSpeedLimitMpS(i)>=MpS.FromKpH(40))
                    {
                        return Freq.L1;
                    }
                }
                float dprevia = tcs.NextSignalDistanceM(0)-PreviaDistance+10;
                switch (tcs.NextSignalAspect(0))
                {
                    case Aspect.Stop:
                    case Aspect.StopAndProceed:
                    case Aspect.Restricted:
                    case Aspect.Permission:
                        return dprevia>0 ? Freq.L7 : Freq.L8;
                    case Aspect.Approach_1:
                    case Aspect.Approach_2:
                    case Aspect.Approach_3:
                        return Freq.L1;
                    case Aspect.Clear_1:
                        return Freq.L2;
                    case Aspect.Clear_2:
                        return Freq.L3;
                    default:
                        return Freq.FP;
                }
            }
            else
            {
                string name = tcs.NextGenericSignalMainHeadSignalType("ASFA");
                if (name == "asfa_baliza_l10")
                    return Freq.L10;
                if (name == "asfa_baliza_l11")
                    return Freq.L11;
                switch(tcs.NextGenericSignalAspect("ASFA"))
                {
                    case Aspect.Permission:
                    case Aspect.Stop:
                        return Freq.L8;
                    case Aspect.StopAndProceed:
                        return Freq.L7;
                    case Aspect.Restricted:
                        return Freq.L4;
                    case Aspect.Approach_1:
                        return Freq.L1;
                    case Aspect.Approach_2:
                        return Freq.L5;
                    case Aspect.Approach_3:
                        return Freq.L6;
                    case Aspect.Clear_1:
                        return Freq.L2;
                    case Aspect.Clear_2:
                        return Freq.L3;
                    default:
                        return Freq.FP;
                }
            }
        }
        float GetBalizaDistance()
        {
            if (!LineaEquipada)
            {
                for(int i=0; i<4; i++)
                {
                    if(tcs.NextPostDistanceM(i)<=1500 && tcs.NextPostDistanceM(i)>=1495 && tcs.CurrentPostSpeedLimitMpS() - tcs.NextPostSpeedLimitMpS(i)>=MpS.FromKpH(40))
                    {
                        return tcs.NextPostDistanceM(i)-1495;
                    }
                }
                float dprevia = tcs.NextSignalDistanceM(0)-PreviaDistance+10;
                if (dprevia>0)
                    return dprevia;
                
                return tcs.NextSignalDistanceM(0);
                /*if(LVIstart==0)
                {
                    for(int i=0; i<4; i++)
                    {
                        if(tcs.NextPostDistanceM(i)>1500 || tcs.NextPostDistanceM(i)<1495) continue;
                        if(tcs.CurrentPostSpeedLimitMpS()-tcs.NextPostSpeedLimitMpS(i)>=MpS.FromKpH(40))
                        {
                            LVIstart = tcs.DistanceM();
                            float speed = MpS.ToKpH(tcs.NextPostSpeedLimitMpS(i));
                            if (speed < 50) lvi1 = lvi2 = Freq.L11;
                            else if (speed < 80)
                            {
                                lvi1 = Freq.L11;
                                lvi2 = Freq.L10;
                            }
                            else if (speed < 120)
                            {
                                lvi1 = Freq.L10;
                                lvi2 = Freq.L11;
                            }
                            else lvi1 = lvi2 = Freq.L10;
                        }
                    }
                }*/
            }
            else
            {
                return tcs.NextGenericSignalDistanceM("ASFA");
            }
        }
        
        float fail;
        float fail_odometer;
        
        Freq prevBalizaAspect = Freq.FP;
        float prevBalizaDistance;
        public Freq Baliza()
        {
            int random = 1;
            int random_max = 1000;
            if (random == 2) random_max = 500;
            else if (random == 3) random_max = 100;
                
            if (random > 0 && tcs.DistanceM()-fail_odometer > 1000) {
                if (rnd.Next(1,random_max) == 5)
                    fail = tcs.ClockTime();
                fail_odometer = tcs.DistanceM();
            }
            if (tcs.ClockTime()-fail<0.5f)
                return Freq.AL;
            
            float dist = GetBalizaDistance();
            if (prevBalizaAspect != Freq.FP && prevBalizaDistance + 3 < dist)
            {
                Freq f = prevBalizaAspect;
                prevBalizaAspect = Freq.FP;
                return f;
            }
            if (dist<5)
            {
                prevBalizaDistance = dist;
                prevBalizaAspect = GetBalizaAspect();
            }
            else
            {
                prevBalizaAspect = Freq.FP;
            }
            if (dist<0.3)
            {
                return prevBalizaAspect;
            }
            return Freq.FP;
        }
        public override List<Parameter> GetParameters()
        {
            List<Parameter> l = new List<Parameter>();
            
            Parameter p;
            
            p = new Parameter("asfa::emergency");
            p.SetValue = (string val) => {Emergency = val!="0" && val!="false";};
            l.Add(p);
            
            p = new Parameter("asfa::frecuencia");
            p.GetValue = () => Baliza().ToString();
            l.Add(p);
            
            return l;
        }
        bool SignalPassed = false;
        float PreviousSignalDistanceM = 0;
        bool PreviaPassed = false;
        bool LineaConvencional = true;
        float PreviaDistance = 300;
        float AnuncioDistance = 1500f;
        protected void UpdateSignalPassed()
        {
            SignalPassed = (tcs.NextSignalDistanceM(0) > PreviousSignalDistanceM+20)&&(tcs.SpeedMpS()>0.1f);
            PreviousSignalDistanceM = tcs.NextSignalDistanceM(0);
            if (SignalPassed && tcs.NextSignalAspect(0) == Aspect.None) SignalPassed = false;
        }
        protected void UpdateDistanciaPrevia()
        {
            if (SignalPassed)
            {
                if ((tcs.NextSignalAspect(0) == Aspect.Clear_2 && tcs.NextSignalSpeedLimitMpS(0) < MpS.FromKpH(165f) && tcs.NextSignalSpeedLimitMpS(0) > MpS.FromKpH(155f)) || (tcs.NextSignalAspect(0) == Aspect.Approach_1 && tcs.NextSignalSpeedLimitMpS(0) < MpS.FromKpH(35f) && tcs.NextSignalSpeedLimitMpS(0) > MpS.FromKpH(25f)))
                {
                    PreviaDistance = 0;
                }
                else
                {
                    if (LineaConvencional)
                    {
                        if (tcs.NextSignalDistanceM(0) < 100f)
                        {
                            PreviaDistance = 0f;
                        }
                        else if (tcs.NextSignalDistanceM(0) < 400f)
                        {
                            PreviaDistance = 50f;
                        }
                        else if (tcs.NextSignalDistanceM(0) < 700f)
                        {
                            PreviaDistance = 100f;
                        }
                        else
                        {
                            PreviaDistance = 300f;
                        }
                    }
                    else
                    {
                        if (tcs.NextSignalDistanceM(0) < 100f)
                        {
                            PreviaDistance = 0f;
                        }
                        else if (tcs.NextSignalDistanceM(0) < 700f)
                        {
                            PreviaDistance = 100f;
                        }
                        else if (tcs.NextSignalDistanceM(0) < 1000f)
                        {
                            PreviaDistance = 300f;
                        }
                        else
                        {
                            PreviaDistance = 500f;
                        }
                    }
                }
            }
        }
    }
    class ASFAclasico : ASFA
    {
        bool Encendido = false;
        bool Urgencia = false;
        bool RebaseAuto = false;
        bool Eficacia = false;
        bool ASFA200 = true;
        bool RecL2;
        bool Connected = false;
        int TipoTren;
        ulong RECStarted = 0;
        ulong RojoStarted = 0;
        ulong AlarmaStarted = 0;
        ulong RebaseStarted = 0;
        ulong CondStarted = 0;
        int Velocidad = 0;
        ulong Previous;
        ulong LastPConex;
        ulong BuzzEnd = 0;
        ulong poweroff = 0;
        
        const int PConex = 2;
        const int PREC = 3;
        const int PAlarma = 4;
        const int PRearme = 5;
        const int PRebase = 6;
        const int LuzFrenar = 12;
        const int LuzL2 = 13;
        const int LuzRojo = 14;
        const int LuzVL = 15;
        const int LuzCV = 16;
        const int LuzEficacia = 17;
        const int LuzREC = 18;
        const int LuzAlarma = 19;
        const int LuzRearme = 20;
        const int LuzRebase = 21;
        
        Freq prev_freq;
        Freq freq;
        
        void buzz(ulong time)
        {
            if (time == 500) tcs.TriggerSoundInfo1();
            else tcs.TriggerSoundPenalty1();
            BuzzEnd = millis() + time;
        }
        void nobuzz()
        {
            tcs.TriggerSoundPenalty2();
        }
        ulong millis()
        {
            return (ulong)(tcs.ClockTime()*1000);
        }
        int HIGH = 1;
        int LOW = 0;
        int[] estados_luces = new int[12];
        int[] estados_botones = new int[12];
        void digitalWrite(int pin, int value)
        {
            estados_luces[pin-12] = value;
            tcs.SetCabDisplayControl(pin, value);
            if(estados_luces[LuzRojo-12]==1) tcs.SetNextSignalAspect(Aspect.Stop);
            else if(estados_luces[LuzFrenar-12]==1) tcs.SetNextSignalAspect(Aspect.Approach_1);
            else if(estados_luces[LuzVL-12]==1) tcs.SetNextSignalAspect(Aspect.Clear_1);
            else tcs.SetNextSignalAspect(Aspect.Clear_2);
            tcs.SetCabDisplayControl(PREC, estados_luces[LuzREC-12]);
            tcs.SetCabDisplayControl(PAlarma, estados_luces[LuzAlarma-12]);
            tcs.SetCabDisplayControl(PRearme, estados_luces[LuzRearme-12]);
            tcs.SetCabDisplayControl(PRebase, estados_luces[LuzRebase-12]);
        }
        int digitalRead(int pin)
        {
            return 1-estados_botones[pin];
        }
        public ASFAclasico(ServerTCS tcs) : base(tcs)
        {
        }
        public override void Initialize()
        {
            estados_botones[PConex] = 1;
            tcs.SetCustomizedTCSControlString("Genérico ASFA 1");
            tcs.SetCustomizedTCSControlString("Genérico ASFA 2");
            tcs.SetCustomizedTCSControlString("Conexión ASFA");
            tcs.SetCustomizedTCSControlString("REC ASFA");
            tcs.SetCustomizedTCSControlString("Alarma ASFA");
            tcs.SetCustomizedTCSControlString("Rearme ASFA");
            tcs.SetCustomizedTCSControlString("Rebase ASFA");
            ASFA200 = tcs.GetIntParameter("ASFA", "TipoTren", 200) > 160;
        }
        public override void Update()
        {
            base.Update();
            tcs.SetCabDisplayControl(PConex, Encendido ? 1 : 0);
            Velocidad = (int)MpS.ToKpH(tcs.SpeedMpS());
            freq = Baliza();
            if(digitalRead(PConex)==LOW && !Encendido) start();
            if(digitalRead(PConex)==HIGH&&digitalRead(PRebase)==HIGH)
            {
                if(Encendido && poweroff == 0) poweroff = millis();
            }
            else poweroff = 0;
            if(poweroff != 0 && poweroff<millis()) shutdown();
            if(Encendido)
            {
                if(RebaseStarted==0&&digitalRead(PRebase)==LOW)
                {
                    RebaseStarted = millis();
                    RebaseAuto = true;
                    digitalWrite(LuzRebase, HIGH);
                }
                if(digitalRead(PRebase)==HIGH)
                {
                    RebaseStarted = 0;
                    digitalWrite(LuzRebase, LOW);
                }
                if(RebaseStarted+10000<millis())
                {
                    RebaseAuto = false;
                    digitalWrite(LuzRebase, LOW);
                }
                if(BuzzEnd!=0 && BuzzEnd<millis())
                {
                    BuzzEnd = 0;
                    nobuzz();
                }
                if(prev_freq!=freq)
                {
                    if(ASFA200 && freq != Freq.FP)
                    {
                        CondStarted = 0;
                        RecL2 = false;
                    }
                    switch(freq)
                    {
                        case Freq.L1:
                            buzz(3000);
                            RECStarted = millis();
                            break;
                        case Freq.L2:
                            if(ASFA200)
                            {
                                buzz(3000);
                                CondStarted = millis();
                                digitalWrite(LuzREC, HIGH);
                            }
                            else buzz(500);
                            break;
                        case Freq.L3:
                            buzz(500);
                            break;
                        case Freq.L7:
                        {
                            int Vmax = 60;
                            if(TipoTren == 110) Vmax = 60;
                            if(TipoTren == 90) Vmax = 50;
                            if(TipoTren == 70) Vmax = 35;
                            if(Velocidad>Vmax)
                            {
                            Urgencia = true;
                            buzz(5000);
                            digitalWrite(LuzRojo, HIGH);
                            }
                            else
                            {
                            buzz(3000);
                            RojoStarted = millis();
                            }
                        }
                        break;
                        case Freq.L8:
                            if(!RebaseAuto)
                            {
                                Urgencia = true;
                                buzz(5000);
                                digitalWrite(LuzRojo, HIGH);
                            }
                            else
                            {
                                buzz(3000);
                                RojoStarted = millis();
                            }
                            break;
                        case Freq.FP:
                            break;
                        default:
                            Eficacia = false;
                            if(AlarmaStarted==0)
                            {
                                buzz(3000);
                                AlarmaStarted = millis();
                                digitalWrite(LuzAlarma, HIGH);
                            }
                            break;
                    }
                    prev_freq = freq;
                }
                Eficacia = freq==Freq.FP;  
                digitalWrite(LuzEficacia, Eficacia ? 1 : 0);
                if(AlarmaStarted!=0)
                {
                    if(digitalRead(PAlarma)==LOW&&Eficacia)
                    {
                        nobuzz();
                        AlarmaStarted = 0;
                        digitalWrite(LuzAlarma, LOW);
                    }
                    else if(AlarmaStarted+3000<millis()) Urgencia = true;
                }
                if(RECStarted != 0)
                {
                    digitalWrite(LuzREC, HIGH);
                    digitalWrite(LuzFrenar, HIGH);
                    if(Velocidad>160 && ASFA200) Urgencia = true;
                    if(digitalRead(PREC)==LOW)
                    {
                        nobuzz();
                        digitalWrite(LuzREC, LOW);
                        digitalWrite(LuzFrenar, LOW);
                        RECStarted = 0;
                    }
                    else if(RECStarted+3000<millis())
                    {
                        Urgencia = true;
                        digitalWrite(LuzREC, LOW);
                        digitalWrite(LuzFrenar, LOW);
                        RECStarted = 0;
                    }
                }
                if(RojoStarted!=0)
                {
                    digitalWrite(LuzRojo, HIGH);
                    if(RojoStarted+10000<millis())
                    {
                        digitalWrite(LuzRojo, LOW);
                        RojoStarted = 0;
                    }
                }
                if(CondStarted!=0)
                {
                    if(digitalRead(PREC)==LOW && !RecL2)
                    {
                        nobuzz();
                        RecL2 = true;
                        digitalWrite(LuzREC, LOW);
                    }
                    if(!RecL2 && CondStarted + 3000 < millis())
                    {
                        Urgencia = true;
                        digitalWrite(LuzREC, LOW);
                    }
                    if(Velocidad>180 && CondStarted + 18000 < millis()) Urgencia = true;
                    if(Velocidad>160 && CondStarted + 30000 < millis()) Urgencia = true;
                    digitalWrite(LuzL2, (int)((millis() - CondStarted) / 500 % 2));
                }
                else digitalWrite(LuzL2, LOW);
                if(Urgencia&&Velocidad<5)
                { 
                    digitalWrite(LuzRojo, LOW);
                    if(AlarmaStarted==0)
                    {
                        digitalWrite(LuzRearme, HIGH);
                        if(digitalRead(PRearme)==LOW) Urgencia = false;
                    }
                }
                else digitalWrite(LuzRearme, LOW);
            }
            Emergency = Urgencia;
            Previous = millis();
        }
        void start()
        {   
            //Urgencia = false;
            Encendido = true;
            buzz(500);
            LastPConex = millis();
        }
        void shutdown()
        {
            freq = Freq.FP;
            RECStarted = RojoStarted = AlarmaStarted = RebaseStarted = CondStarted = 0;
            //Urgencia = false;
            Eficacia = false;
            nobuzz();
            digitalWrite(LuzREC, LOW);
            digitalWrite(LuzFrenar, LOW);
            digitalWrite(LuzRojo, LOW);
            digitalWrite(LuzAlarma, LOW);
            digitalWrite(LuzEficacia, LOW);
            digitalWrite(LuzL2, LOW);
            digitalWrite(LuzRebase, LOW);
            digitalWrite(LuzRearme, LOW);
            digitalWrite(LuzVL, LOW);
            digitalWrite(LuzCV, LOW);
            Encendido = false;
            poweroff = 0;
        }
        double LastPressed;
        int count=0;
        public override void HandleEvent(TCSEvent ev, string message)
        {
            if(ev == TCSEvent.GenericTCSButtonPressed || ev == TCSEvent.GenericTCSButtonReleased)
            {
                int num = int.Parse(message);
                bool pressed = ev == TCSEvent.GenericTCSButtonPressed;
                if (num == 0)
                {
                    estados_botones[PREC] = pressed ? 1 : 0;
                    estados_botones[PRearme] = pressed ? 1 : 0;
                    if (pressed)
                    {
                        if(LastPressed + 1 > tcs.ClockTime()) count++;
                        else count = 1;
                        if (count == 4) estados_botones[PConex] = 1-estados_botones[PConex];
                        LastPressed = tcs.ClockTime();
                    }
                }
                else if (num == 1)
                {
                    estados_botones[PAlarma] = pressed ? 1 : 0;
                    estados_botones[PRebase] = pressed ? 1 : 0;
                }
                else if ((num == PConex || num == PRebase))
                {
                    if (pressed) estados_botones[num] = 1-estados_botones[num];
                }
                else
                {
                    estados_botones[num] = pressed ? 1 : 0;
                }
            }
        }
        public override void SetEmergency(bool emergency) {}
        public override List<Parameter> GetParameters()
        {
            return new List<Parameter>();
        }
    }
    class ASFAclasicoExterno : ASFA
    {
        public ASFAclasicoExterno(ServerTCS tcs) : base(tcs)
        {
        }
        public override void Initialize()
        {
        }
        public override void Update()
        {
            base.Update();
        }
        public override void HandleEvent(TCSEvent ev, string message)
        {

        }
        public override void SetEmergency(bool emergency) {}
        public override List<Parameter> GetParameters()
        {
            return base.GetParameters();
        }
    }
    class ASFADigital : ASFA
    {
        //Combinador general
        public bool Connected;
        public bool FE;
        //Transición a LZB/ERTMS
        public bool AKT = false; //Inhibir freno de urgencia
        public bool CON = true; //Conexión de ASFA
        int UltimaInfo=1;
        Aspect FallbackAspect;
        bool controldesv=false;
        bool secAA=false;
        int TargetState=0;
        int IndicadorLVI=0;
        int IndicadorPNdesp=0;
        int IndicadorPNprot=0;
        int IndicadorFrenado=0;
        bool Anun = false;
        bool Prec = false;
        bool Prean = false;
        bool Modo = false;
        bool Rearme = false;
        bool Rebase = false;
        bool Aumento = false;
        bool Alarma = false;
        bool Ocultacion = false;
        bool LTV = false;
        bool PN = false;
        bool Basico = false;
        bool IlumAnpar=false;
        bool IlumAnpre=false;
        bool IlumPrepar=false;
        bool IlumVLcond=false;
        bool IlumModo=false;
        bool IlumRearme=false;
        bool IlumRebase=false;
        bool IlumAumento=false;
        bool IlumAlarma=false;
        bool IlumOcult=false;
        bool IlumLVI=false;
        bool IlumPN=false;
        bool Velo=false;
        bool Eficacia=false;
        int EficaciaB=0;
        int FrenarB=0;
        int Led3B=0;
        bool PantallaActiva = false;
        public ASFADigital(ServerTCS tcs) : base(tcs)
        {
        }
        public void Conex()
        {
            UltimaInfo=1;
            FallbackAspect = Aspect.Clear_2;
            controldesv=false;
            secAA=false;
            TargetState=0;
            IndicadorLVI=0;
            IndicadorPNdesp=0;
            IndicadorPNprot=0;
            IndicadorFrenado=0;
            Anun = false;
            Prec = false;
            Prean = false;
            Modo = false;
            Rearme = false;
            Rebase = false;
            Aumento = false;
            Alarma = false;
            Ocultacion = false;
            LTV = false;
            PN = false;
            Basico = false;
            Velo = false;
            IlumAnpar=false;
            IlumAnpre=false;
            IlumPrepar=false;
            IlumVLcond=false;
            IlumModo=false;
            IlumRearme=false;
            IlumRebase=false;
            IlumAumento=false;
            IlumAlarma=false;
            IlumOcult=false;
            IlumLVI=false;
            IlumPN=false;
            Eficacia=false;
            EficaciaB=0;
            FrenarB=0;
            Led3B=0;
            Connected = true;
            PantallaActiva = false;
            tcs.SetCabDisplayControl(11, 1);
            
            tcs.RequestModule("asfa::digital");
            tcs.Register("asfa::indicador::*");
            tcs.Register("asfa::pulsador::ilum::*");
            tcs.Register("asfa::pulsador::basico");
            tcs.Register("asfa::pulsador::conex");
            tcs.Register("asfa::leds::*");
            tcs.Register("asfa::pantalla::iniciar");
            
            tcs.SendParameter("asfa::pulsador::conex", "1");
            
            tcs.SendParameter("asfa::selector_tipo",tcs.GetIntParameter("ASFA", "TipoTren", -1).ToString());
            
            string DIV = tcs.GetStringParameter("ASFA", "DIV", "020001162E47558A26023132333402300000C8780000957102690295000288039803E8643C328C00000000000000000000000000000000000000000000000000");
            string hex = "0123456789ABCDEF";
            System.Text.StringBuilder b = new System.Text.StringBuilder(DIV);
            int Vmax = Math.Min(tcs.GetIntParameter("ASFA","VmaxVehiculo",0),200);
            if (Vmax == 0) Vmax = Math.Min(tcs.GetIntParameter("General","TrainMaxSpeed",0),200);
            if (Vmax > 0)
            {
                b[36] = hex[Vmax/16];
                b[37] = hex[Vmax%16];
            }
            int div15 = Convert.ToInt32(DIV.Substring(30,2),16);
            int div17 = Convert.ToInt32(DIV.Substring(34,2),16);
            int modoCONV = tcs.GetIntParameter("ASFA","ModoCONV",-1);
            int modoAV = tcs.GetIntParameter("ASFA","ModoAV",-1);
            int modoRAM = tcs.GetIntParameter("ASFA","ModoRAM",-1);
            int modoBTS = tcs.GetIntParameter("ASFA","ModoBTS",-1);
            if (modoCONV != -1) div15 = (div15&(255-16))|(modoCONV*16);
            if (modoAV != -1) div15 = (div15&(255-32))|(modoAV*32);
            if (modoRAM != -1) div17 = (div17&(255-4))|(modoRAM*4);
            if (modoBTS != -1) div17 = (div17&(255-8))|(modoBTS*8);
            b[30] = hex[div15/16];
            b[31] = hex[div15%16];
            b[34] = hex[div17/16];
            b[35] = hex[div17%16];
            DIV = b.ToString();
            
            tcs.SendParameter("asfa::div",DIV);
        }
        void Desconex()
        {
            Connected = false;
            Emergency = false;
            tcs.SetCabDisplayControl(11, 0);
            
            tcs.RemoveParameter("asfa::indicador::*");
            tcs.RemoveParameter("asfa::pulsador::ilum::*");
            tcs.RemoveParameter("asfa::leds::*");
            tcs.RemoveParameter("asfa::pulsador::basico");
            
            tcs.SendParameter("asfa::pulsador::conex", "0");
        }
        public override void Initialize()
        {
            tcs.SetCustomizedTCSControlString("Rec. anuncio parada");
            tcs.SetCustomizedTCSControlString("Rec. anuncio precaucion");
            tcs.SetCustomizedTCSControlString("Rec. preanuncio o condicional");
            tcs.SetCustomizedTCSControlString("Modo ASFA");
            tcs.SetCustomizedTCSControlString("Rearme freno");
            tcs.SetCustomizedTCSControlString("Rebase autorizado");
            tcs.SetCustomizedTCSControlString("Aumento vel. ASFA");
            tcs.SetCustomizedTCSControlString("Rec. alarma ASFA");
            tcs.SetCustomizedTCSControlString("Ocultacion info ASFA");
            tcs.SetCustomizedTCSControlString("Rec. limitacion velocidad");
            tcs.SetCustomizedTCSControlString("Rec. paso a nivel");
            tcs.SetCustomizedTCSControlString("Conexión ASFA");
            tcs.SetCustomizedTCSControlString("Conmutador ASFA básico");
        }
        public override void Update()
        {
            base.Update();
            tcs.SetCabDisplayControl(0, IlumAnpar ? 1 : 0);
            tcs.SetCabDisplayControl(1, IlumAnpre ? 1 : 0);
            tcs.SetCabDisplayControl(2, IlumVLcond ? (IlumPrepar ? 3 : 2) : (IlumPrepar ? 1 : 0));
            tcs.SetCabDisplayControl(3, IlumModo ? 1 : 0);
            tcs.SetCabDisplayControl(4, IlumRearme ? 1 : 0);
            tcs.SetCabDisplayControl(5, IlumRebase ? 1 : 0);
            tcs.SetCabDisplayControl(6, IlumAumento ? 1 : 0);
            tcs.SetCabDisplayControl(7, IlumAlarma ? 1 : 0);
            tcs.SetCabDisplayControl(8, IlumOcult ? 1 : 0);
            tcs.SetCabDisplayControl(9, IlumLVI ? 1 : 0);
            tcs.SetCabDisplayControl(10, IlumPN ? 1 : 0);
            tcs.SetCabDisplayControl(12, Basico ? 1 : 0);
            if (UltimaInfo == 8 && ((int)(tcs.ClockTime()*2))%2 == 1) tcs.SetCabDisplayControl(15, 0);
            else tcs.SetCabDisplayControl(15, UltimaInfo);
            tcs.SetCabDisplayControl(16, IndicadorPNdesp != 0 ? 2 : (IndicadorPNprot != 0 ? 1 : 0));
            tcs.SetCabDisplayControl(17, controldesv ? 2 : (secAA ? 5 : 0));
            tcs.SetCabDisplayControl(18, IndicadorLVI);
            tcs.SetCabDisplayControl(20, TargetState == 0 ? 2 : (TargetState == 1 ? 0 : 1));
            tcs.SetCabDisplayControl(21, Emergency ? 3 : IndicadorFrenado);
            tcs.SetCabDisplayControl(22, EficaciaB);
            tcs.SetCabDisplayControl(23, FrenarB);
            tcs.SetCabDisplayControl(24, Led3B);
            tcs.SetCabDisplayControl(25, PantallaActiva ? (Velo ? 2 : 1) : 0);
            tcs.SetCabDisplayControl(26, Eficacia ? (((int)(tcs.ClockTime()*2))%8 + 1) : 0);
            tcs.SetNextSignalAspect(FallbackAspect);
            //tcs.SetOverspeedWarningDisplay(IndicadorFrenado != 0 ? true : false);
            //tcs.SetPenaltyApplicationDisplay(Emergency);
        }
        public override void HandleEvent(TCSEvent ev, string message)
        {
            if(ev == TCSEvent.GenericTCSButtonPressed || ev == TCSEvent.GenericTCSButtonReleased)
            {
                int num = int.Parse(message);
                bool pressed = ev == TCSEvent.GenericTCSButtonPressed;
                if (num == 11 && pressed)
                {
                    if (Connected) Desconex();
                    else Conex();
                }
                else if (num == 12 && pressed)
                {
                    Basico = !Basico;
                }
                else if(num==0) Anun = pressed;
                else if(num==1) Prec = pressed;
                else if(num==2) Prean = pressed;
                else if(num==3) Modo = pressed;
                else if(num==4) Rearme = pressed;
                else if(num==5) Rebase = pressed;
                else if(num==6) Aumento = pressed;
                else if(num==7) Alarma = pressed;
                else if(num==8) Ocultacion = pressed;
                else if(num==9) LTV = pressed;
                else if(num==10) PN = pressed;
            }
        }
        public override void SetEmergency(bool emergency) {}
        public override List<Parameter> GetParameters()
        {
            List<Parameter> l = base.GetParameters();
            /*if(p.name=="asfa_sound_trigger")
            {
                p.SetValue = (string val) => 
                {
                    int num = int.Parse(val);
                    if(num == 0) tcs.TriggerSoundInfo1();
                    if(num == 1) tcs.TriggerSoundPenalty1();
                    if(num == 2) tcs.TriggerSoundAlert1();
                    if(num == 3) tcs.TriggerSoundAlert2();
                    if(num == 9) tcs.TriggerSoundSystemDeactivate();
                };
                return true;
            }
            else */
            Parameter p = null;
            
            p = new Parameter("asfa::indicador::v_control");
            p.SetValue = (string val) => tcs.SetNextSpeedLimitMpS(MpS.FromKpH(float.Parse(val)));
            l.Add(p);
            
            p = new Parameter("asfa::indicador::estado_vcontrol");
            p.SetValue = (string val) => TargetState = int.Parse(val);
            l.Add(p);
            
            
            p = new Parameter("asfa::indicador::ultima_info");
            p.SetValue = (string val) => {
                int num = int.Parse(val)/2;
                UltimaInfo = num;
                switch(num)
                {
                    case 2:
                        FallbackAspect = Aspect.Stop;
                        break;
                    case 3:
                        FallbackAspect = Aspect.StopAndProceed;
                        break;
                    case 4:
                        FallbackAspect = Aspect.Approach_1;
                        break;
                    case 5:
                        FallbackAspect = Aspect.Approach_2;
                        break;
                    case 6:
                        FallbackAspect = Aspect.Approach_3;
                        break;
                    case 7:
                        FallbackAspect = Aspect.Approach_3;
                        break;
                    case 8:
                        FallbackAspect = Aspect.Clear_1;
                        break;
                    default:
                        FallbackAspect = Aspect.Clear_2;
                        break;
                }
            };
            l.Add(p);
            
            p = new Parameter("asfa::indicador::control_desvio");
            p.SetValue = (string val) => controldesv = val=="1";
            l.Add(p);
            
            p = new Parameter("asfa::indicador::secuencia_aa");
            p.SetValue = (string val) => secAA = val=="1";
            l.Add(p);
            
            p = new Parameter("asfa::indicador::lvi");
            p.SetValue = (string val) => IndicadorLVI = int.Parse(val);
            l.Add(p);
            
            p = new Parameter("asfa::indicador::pndesp");
            p.SetValue = (string val) => IndicadorPNdesp = int.Parse(val);
            l.Add(p);
            
            p = new Parameter("asfa::indicador::pnprot");
            p.SetValue = (string val) => IndicadorPNprot = int.Parse(val);
            l.Add(p);
            
            p = new Parameter("asfa::indicador::frenado");
            p.SetValue = (string val) => IndicadorFrenado = int.Parse(val);
            l.Add(p);
            
            p = new Parameter("asfa::indicador::eficacia");
            p.SetValue = (string val) => Eficacia = val=="1";
            l.Add(p);
            
            p = new Parameter("asfa::indicador::velo");
            p.SetValue = (string val) => Velo = val=="1";
            l.Add(p);
            
            p = new Parameter("asfa::pulsador::anpar");
            p.GetValue = () => Anun ? "1" : "0";
            l.Add(p);
            
            p = new Parameter("asfa::pulsador::anpre");
            p.GetValue = () => Prec ? "1" : "0";
            l.Add(p);
            
            p = new Parameter("asfa::pulsador::prepar");
            p.GetValue = () => Prean ? "1" : "0";
            l.Add(p);
            
            p = new Parameter("asfa::pulsador::modo");
            p.GetValue = () => Modo ? "1" : "0";
            l.Add(p);
            
            p = new Parameter("asfa::pulsador::rearme");
            p.GetValue = () => Rearme ? "1" : "0";
            l.Add(p);
            
            p = new Parameter("asfa::pulsador::rebase");
            p.GetValue = () => Rebase ? "1" : "0";
            l.Add(p);
            
            p = new Parameter("asfa::pulsador::aumento");
            p.GetValue = () => Aumento ? "1" : "0";
            l.Add(p);
            
            p = new Parameter("asfa::pulsador::alarma");
            p.GetValue = () => Alarma ? "1" : "0";
            l.Add(p);
            
            p = new Parameter("asfa::pulsador::ocultacion");
            p.GetValue = () => Ocultacion ? "1" : "0";
            l.Add(p);
            
            p = new Parameter("asfa::pulsador::lvi");
            p.GetValue = () => LTV ? "1" : "0";
            l.Add(p);
            
            p = new Parameter("asfa::pulsador::pn");
            p.GetValue = () => PN ? "1" : "0";
            l.Add(p);
            
            p = new Parameter("asfa::pulsador::basico");
            p.GetValue = () => Basico ? "1" : "0";
            p.SetValue = (string val) => 
            {
                Basico = val=="1";
                if (Basico)
                    PantallaActiva = false;
            };
            l.Add(p);
            
            p = new Parameter("asfa::pulsador::conex");
            p.SetValue = (string val) => 
            {
                if (val=="0")
                    PantallaActiva = false;
            };
            l.Add(p);
            
            p = new Parameter("asfa::pulsador::ilum::anpar");
            p.SetValue = (string val) => IlumAnpar = val== "1";
            l.Add(p);
            
            p = new Parameter("asfa::pulsador::ilum::anpre");
            p.SetValue = (string val) => IlumAnpre = val== "1";
            l.Add(p);
            
            p = new Parameter("asfa::pulsador::ilum::prepar");
            p.SetValue = (string val) => IlumPrepar = val== "1";
            l.Add(p);
            
            p = new Parameter("asfa::pulsador::ilum::vlcond");
            p.SetValue = (string val) => IlumVLcond = val== "1";
            l.Add(p);
            
            p = new Parameter("asfa::pulsador::ilum::modo");
            p.SetValue = (string val) => IlumModo = val== "1";
            l.Add(p);
            
            p = new Parameter("asfa::pulsador::ilum::rearme");
            p.SetValue = (string val) => IlumRearme = val== "1";
            l.Add(p);
            
            p = new Parameter("asfa::pulsador::ilum::rebase");
            p.SetValue = (string val) => IlumRebase = val== "1";
            l.Add(p);
            
            p = new Parameter("asfa::pulsador::ilum::aumento");
            p.SetValue = (string val) => IlumAumento = val== "1";
            l.Add(p);
            
            p = new Parameter("asfa::pulsador::ilum::alarma");
            p.SetValue = (string val) => IlumAlarma = val== "1";
            l.Add(p);
            
            p = new Parameter("asfa::pulsador::ilum::ocultacion");
            p.SetValue = (string val) => IlumOcult = val== "1";
            l.Add(p);
            
            p = new Parameter("asfa::pulsador::ilum::lvi");
            p.SetValue = (string val) => IlumLVI = val== "1";
            l.Add(p);
            
            p = new Parameter("asfa::pulsador::ilum::pn");
            p.SetValue = (string val) => IlumPN = val== "1";
            l.Add(p);
            
            p = new Parameter("asfa::leds::0");
            p.SetValue = (string val) => EficaciaB = int.Parse(val);
            l.Add(p);
            
            p = new Parameter("asfa::leds::1");
            p.SetValue = (string val) => FrenarB = int.Parse(val);
            l.Add(p);
            
            p = new Parameter("asfa::leds::2");
            p.SetValue = (string val) => Led3B = int.Parse(val);
            l.Add(p);
            
            p = new Parameter("asfa::pantalla::iniciar");
            p.SetValue = (string val) => PantallaActiva = true;
            l.Add(p);
            
            return l;

            // Verificar objetos no mundo à frente da locomotiva
            
        }
    }
}
