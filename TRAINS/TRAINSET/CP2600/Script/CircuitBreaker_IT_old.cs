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

        public override void Initialize()
        {
            ClosingTimer = new Timer(this);
            ClosingTimer.Setup(ClosingDelayS());

            SetDriverClosingAuthorization(true);
        }

        public override void Update(float elapsedSeconds)
        {
            SetClosingAuthorization(TCSClosingAuthorization() && CurrentPantographState() == PantographState.Up);

            switch (CurrentState())
            {
                case CircuitBreakerState.Closed:
                    if (!ClosingAuthorization() || DriverOpeningOrder())
                    {
                        SetCurrentState(CircuitBreakerState.Open);
                    }
                    break;

                case CircuitBreakerState.Closing:
                    if (ClosingAuthorization() && DriverClosingOrder())
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
                    if (ClosingAuthorization() && DriverClosingOrder())
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
