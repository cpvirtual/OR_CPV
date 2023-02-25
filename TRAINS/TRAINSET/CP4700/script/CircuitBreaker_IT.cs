// COPYRIGHT 2010, 2011, 2012, 2013, 2015, 2016, 2017, 2018, 2019, 2020 by the Open Rails project.
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

using Orts.Common;
using Orts.Simulation;
using Orts.Simulation.Physics;
using ORTS.Scripting.Api;
using System;
using System.Collections.Generic;
using System.IO;

namespace Orts.Scripting.Script
{
    public class CircuitBreaker_IT : CircuitBreaker
    {
        private Timer ClosingTimer;
        private CircuitBreakerState PreviousState;
        private int UpdateCount;
        private bool CircuitBreakerSwitchIsClosedDisplay;

        public override void Initialize()
        {
            ClosingTimer = new Timer(this);
            ClosingTimer.Setup(ClosingDelayS());

            SetDriverClosingAuthorization(true);
            CircuitBreakerSwitchIsClosedDisplay = false;
        }

        public override void Update(float elapsedSeconds)
        {
            if (UpdateCount < 4)
                UpdateCount++;
            if (UpdateCount == 4)
            {
                SetCurrentState(CurrentState());
                UpdateCount++;
            }
            SetClosingAuthorization(TCSClosingAuthorization() && CurrentPantographState() == PantographState.Up);

            switch (CurrentState())
            {
                case CircuitBreakerState.Closed:
                    if (!ClosingAuthorization() || DriverOpeningOrder() || TCSOpeningOrder())
                    {
                        SetCurrentState(CircuitBreakerState.Open);
                    }
                    break;

                case CircuitBreakerState.Closing:
                    if (ClosingAuthorization() && (DriverClosingOrder() || TCSClosingOrder()))
                    {
                        if (!ClosingTimer.Started)
                        {
                            ClosingTimer.Start();
                        }

                        if (ClosingTimer.Triggered)
                        {
                            ClosingTimer.Stop();
                            SetCurrentState(CircuitBreakerState.Closed);
                        }
                    }
                    else
                    {
                        ClosingTimer.Stop();
                        SetCurrentState(CircuitBreakerState.Open);
                    }
                    break;

                case CircuitBreakerState.Open:
                    if (ClosingAuthorization() && (DriverClosingOrder() || TCSClosingOrder()))
                    {
                        SetCurrentState(CircuitBreakerState.Closing);
                    }
                    break;
            }

            if (PreviousState != CurrentState())
            {
                switch (CurrentState())
                {
                    case CircuitBreakerState.Open:
                        SignalEvent(Event.CircuitBreakerOpen);
                        break;

                    case CircuitBreakerState.Closing:
                        SignalEvent(Event.CircuitBreakerClosing);
                        break;

                    case CircuitBreakerState.Closed:
                        SignalEvent(Event.CircuitBreakerClosed);
                        break;
                }
            }

            PreviousState = CurrentState();
            if (CurrentState() != CircuitBreakerState.Open)
                CircuitBreakerSwitchIsClosedDisplay = true;
            else if (DriverOpeningOrder())
                CircuitBreakerSwitchIsClosedDisplay = false;

            // Use command not to authorize, but to show state of the circuitbreaker switch
            SetDriverClosingAuthorization(CircuitBreakerSwitchIsClosedDisplay);
        }

        public override void HandleEvent(PowerSupplyEvent evt)
        {
            switch (evt)
            {
                case PowerSupplyEvent.CloseCircuitBreakerButtonPressed:
                    SetDriverOpeningOrder(false);
                    SetDriverClosingOrder(true);
                    SignalEvent(Event.CircuitBreakerClosingOrderOn);

                    Confirm(CabControl.CircuitBreakerClosingOrder, CabSetting.On);
                    if (!ClosingAuthorization())
                    {
//                       Message(ConfirmLevel.Warning, Simulator.Catalog.GetString("Circuit breaker closing not authorized"));
                    }
                    break;
                case PowerSupplyEvent.CloseCircuitBreakerButtonReleased:
                    SetDriverClosingOrder(false);
                    break;
                case PowerSupplyEvent.OpenCircuitBreakerButtonPressed:
                    SetDriverClosingOrder(false);
                    SetDriverOpeningOrder(true);
                    SignalEvent(Event.CircuitBreakerClosingOrderOff);

                    Confirm(CabControl.CircuitBreakerClosingOrder, CabSetting.Off);
                    break;
                case PowerSupplyEvent.OpenCircuitBreakerButtonReleased:
                    SetDriverOpeningOrder(false);
                    break;
            }
        }
    }
}
