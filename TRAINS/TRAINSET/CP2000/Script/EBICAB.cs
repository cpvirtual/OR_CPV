// COPYRIGHT 2014 by the Open Rails project.
// 
// This file is part of Open Rails.
// 
// Open Rails is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// Open Rails is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with Open Rails.  If not, see <http://www.gnu.org/licenses/>.

using System;
using ORTS.Scripting.Api;

namespace ORTS.Scripting.Script
{
    public class EBICAB : TrainControlSystem
    {
        Timer VigilanceAlarmTimer;
        Timer VigilanceEmergencyTimer;
        Timer VigilancePenaltyTimer;
        Timer OverspeedAlarmTimer;
        Timer OverspeedPenaltyTimer;

        bool OverspeedAlarm;
        bool VigilanceAlarm;
        bool VigilanceEmergency;
        bool OverspeedWarning;

        float VigilanceAlarmTimeoutS;
        float CurrentSpeedLimitMpS;

        float VigilanceAlarmTimeS = 60f;
        float VigilanceMonitorTimeS = 66f;
        float VigilancePenaltyTimeS = 10f;
        float OverspeedPenaltyTimeS = 10f;
        float AlarmTimeBeforeOverspeedS = 5f;

        public EBICAB() { }

        public override void Initialize()
        {
            VigilanceAlarmTimer = new Timer(this);
            VigilanceEmergencyTimer = new Timer(this);
            VigilancePenaltyTimer = new Timer(this);
            OverspeedAlarmTimer = new Timer(this);
            OverspeedPenaltyTimer = new Timer(this);

            VigilanceAlarmTimeoutS = VigilanceMonitorTimeS - VigilanceAlarmTimeS;
            VigilanceAlarmTimer.Setup(VigilanceAlarmTimeS);
            VigilanceEmergencyTimer.Setup(VigilanceAlarmTimeoutS);
            VigilancePenaltyTimer.Setup(VigilancePenaltyTimeS);
            VigilanceAlarmTimer.Start();

            OverspeedAlarmTimer.Setup(AlarmTimeBeforeOverspeedS);
            OverspeedPenaltyTimer.Setup(OverspeedPenaltyTimeS);

            Activated = true;
        }

        public override void Update()
        {
            SetNextSignalAspect(NextSignalAspect());

            CurrentSpeedLimitMpS = CurrentSignalSpeedLimitMpS() >= 0 ? CurrentSignalSpeedLimitMpS() : TrainSpeedLimitMpS();
            if (CurrentSpeedLimitMpS > TrainSpeedLimitMpS())
                CurrentSpeedLimitMpS = TrainSpeedLimitMpS();
            SetCurrentSpeedLimitMpS(CurrentSpeedLimitMpS);

            var nextSpeedLimitMpS = NextSignalSpeedLimitMpS() < TrainSpeedLimitMpS() ? NextSignalSpeedLimitMpS() : TrainSpeedLimitMpS();
            if ((int)nextSpeedLimitMpS >= (int)CurrentSpeedLimitMpS)
                nextSpeedLimitMpS = float.MinValue;
            SetNextSpeedLimitMpS(nextSpeedLimitMpS);

            UpdateVigilance();
            UpdateSpeedControl();

            if (!IsBrakeEmergency() && !IsBrakeFullService())
                SetPenaltyApplicationDisplay(false);
        }

        public override void AlerterReset()
        {
            AlerterPressed();
        }

        public override void AlerterPressed()
        {
            if (!Activated || VigilanceEmergency)
                return;

            VigilanceAlarmTimer.Start();
            VigilanceAlarm = VigilanceAlarmTimer.Triggered;
            if (AlerterSound())
                SetVigilanceAlarm(false);
        }

        public override void SetEmergency()
        {
            SetPenaltyApplicationDisplay(true);
            if (IsBrakeEmergency())
                return;
            SetEmergencyBrake();

            SetThrottleController(0.0f);
            SetPantographsDown();
            if (EmergencyEngagesHorn()) SetHorn(true);
        }

        void EngageFullBrake()
        {
            SetFullBrake();
        }

        void UpdateVigilance()
        {
            if (!IsAlerterEnabled())
                return;

            VigilanceAlarm = VigilanceAlarmTimer.Triggered;
            VigilanceEmergency = VigilanceEmergencyTimer.Triggered;
            SetVigilanceAlarmDisplay(VigilanceAlarm);
            SetVigilanceEmergencyDisplay(VigilanceEmergency);

            if (VigilanceEmergency)
            {
                SetPenaltyApplicationDisplay(true);
                SetEmergency();

                if (!VigilancePenaltyTimer.Started)
                    VigilancePenaltyTimer.Start();
                if (SpeedMpS() < 0.1f && VigilancePenaltyTimer.Triggered)
                {
                    VigilanceEmergencyTimer.Stop();
                    VigilancePenaltyTimer.Stop();
                }
                if (AlerterSound())
                    SetVigilanceAlarm(false);
                return;
            }

            if (VigilanceAlarm)
            {
                if (SpeedMpS() < 0.1f)
                {
                    AlerterPressed();
                    return;
                }
                if (!VigilanceEmergencyTimer.Started)
                    VigilanceEmergencyTimer.Start();
                if (!AlerterSound())
                    SetVigilanceAlarm(true);
            }
            else
            {
                VigilanceEmergencyTimer.Stop();
                if (VigilancePenaltyTimer.Triggered)
                    VigilancePenaltyTimer.Stop();
            }
        }

        void UpdateSpeedControl()
        {
            OverspeedWarning = SpeedMpS() > CurrentSpeedLimitMpS * 1.05;

            SetOverspeedWarningDisplay(OverspeedWarning);

            OverspeedAlarm = OverspeedAlarmTimer.Triggered;

            if (OverspeedAlarm && IsAlerterEnabled())
            {
                SetPenaltyApplicationDisplay(true);
                SetEmergency();
                SetThrottleController(0f);

                if (!OverspeedPenaltyTimer.Started)
                    OverspeedPenaltyTimer.Start();

                if (SpeedMpS() < 12f || SpeedMpS() < CurrentSpeedLimitMpS)
                {
                    OverspeedAlarmTimer.Stop();
                    OverspeedPenaltyTimer.Stop();
                }
                return;
            }
            if (OverspeedWarning)
            {
                if (!OverspeedAlarmTimer.Started)
                    OverspeedAlarmTimer.Start();
            }
            else
            {
                OverspeedAlarmTimer.Stop();
                if (OverspeedPenaltyTimer.Triggered)
                    OverspeedPenaltyTimer.Stop();
            }
        }
    }
}