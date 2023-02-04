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
using System.Collections.Generic;
using ORTS.Common;
using ORTS.Scripting;
using ORTS.Scripting.Api;
using System.IO;
using System.Text;
using System.Runtime.InteropServices;

namespace ORTS.Scripting.Script
{

    public class ORTSZs : TrainControlSystem
    {
        
        private DateTime NextUpdate = DateTime.Now;
                
        [System.Runtime.InteropServices.DllImport("user32.dll", CharSet = System.Runtime.InteropServices.CharSet.Auto)]
        static extern IntPtr SendMessage(IntPtr hWnd, UInt32 Msg, IntPtr wParam, IntPtr lParam);

        [DllImport("user32.dll", SetLastError = true)]
        static extern IntPtr FindWindow(string lpClassName, string lpWindowName);

        [System.Runtime.InteropServices.StructLayout(System.Runtime.InteropServices.LayoutKind.Sequential)]
        struct COPYDATASTRUCT
        {
            public uint dwData;
            public int cbData;
            public IntPtr lpData;
        }

        public static uint WM_COPYDATA = 74;

        public override void Initialize()
        {
                        
        }
                

        public override void Update()
        {
                        
                        if (NextUpdate <= DateTime.Now) {
                                string text = SpeedMpS() + ";" + ClockTime() + ";" + NextSignalAspect(0) + ";" + NextSignalAspect(1) + ";" + NextSignalAspect(2) + ";" + NextSignalAspect(3) + ";" + NextSignalAspect(4) + ";" + NextSignalDistanceM(0) + ";" + NextSignalDistanceM(1) + ";" + NextSignalDistanceM(2) + ";" + NextSignalDistanceM(3) + ";" + NextSignalDistanceM(4) + ";" + NextSignalSpeedLimitMpS(0) + ";" + NextSignalSpeedLimitMpS(1) + ";" + NextSignalSpeedLimitMpS(2) + ";" + NextSignalSpeedLimitMpS(3) + ";" + NextSignalSpeedLimitMpS(4) + ";" + NextPostDistanceM(0) + ";" + NextPostDistanceM(1) + ";" + NextPostDistanceM(2) + ";" + NextPostDistanceM(3) + ";" + NextPostDistanceM(4) + ";" + NextPostSpeedLimitMpS(0) + ";" + NextPostSpeedLimitMpS(1) + ";" + NextPostSpeedLimitMpS(2) + ";" + NextPostSpeedLimitMpS(3) + ";" + NextPostSpeedLimitMpS(4) + ";" + CurrentSignalSpeedLimitMpS() + ";" + CurrentPostSpeedLimitMpS();
                                
                                //Message(Orts.Simulation.ConfirmLevel.MSG, "Mööp");
                                
                                IntPtr windowHandle = FindWindow(null, "ORTSZs Settings");

                                COPYDATASTRUCT cd = new COPYDATASTRUCT();
                                cd.dwData = 2;

                                cd.cbData = text.Length + 1;
                                cd.lpData = System.Runtime.InteropServices.Marshal.StringToHGlobalAnsi(text);

                                IntPtr cdBuffer = System.Runtime.InteropServices.Marshal.AllocHGlobal(System.Runtime.InteropServices.Marshal.SizeOf(cd));
                                System.Runtime.InteropServices.Marshal.StructureToPtr(cd, cdBuffer, false);

                                SendMessage(windowHandle, WM_COPYDATA, IntPtr.Zero, cdBuffer);
                                
                                
                                System.Runtime.InteropServices.Marshal.FreeHGlobal(cdBuffer);

                                NextUpdate = DateTime.Now.AddMilliseconds(250);
                        }
        }
                
                public override void SetEmergency(bool emergency)
        {
            
                }
                
                public override void HandleEvent(TCSEvent evt, string message)
                {
                        
                }
    }

}