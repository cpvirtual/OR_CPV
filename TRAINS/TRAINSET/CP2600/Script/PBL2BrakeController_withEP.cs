// COPYRIGHT 2010, 2012 by the Open Rails project.
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
using System.IO;
using ORTS.Scripting.Api;
using Orts.Simulation.RollingStocks.SubSystems.Controllers;

namespace ORTS.Scripting.Script
{
    public class PBL2BrakeController : BrakeController
    {
        enum State
        {
            Overcharge,
            OverchargeElimination,
            QuickRelease,
            Release,
            Hold,
            Apply,
            Emergency
        }

        public float OverchargeValue { get; private set; }
        public float QuickReleaseValue { get; private set; }
        public float ReleaseValue { get; private set; }
        public float HoldValue { get; private set; }
        public float ApplyValue { get; private set; }
        public float EmergencyValue { get; private set; }

        // brake controller values
        private float OverchargePressureBar = 0.4f;
        private float OverchargeEleminationPressureRateBarpS = 0.0025f;
        private float FirstDepressureBar = 0.5f;
        private float BrakeReleasedDepressureBar = 0.2f;

        protected float CurrentPressure;

        private State CurrentState;

        private bool FirstDepression = false;
        private bool Neutral = false;
        private bool Overcharge = false;
        private bool OverchargeElimination = false;
        private bool QuickRelease = false;
        private bool Release = false;
        private bool Apply = false;

        private float RegulatorPressureBar = 0.0f;

        public PBL2BrakeController()
        {
        }

        public override void Initialize()
        {
            foreach (MSTSNotch notch in Notches())
            {
                switch (notch.Type)
                {
                    case ControllerState.Release:
                        ReleaseValue = notch.Value;
                        break;
                    case ControllerState.FullQuickRelease:
                        OverchargeValue = notch.Value;
                        QuickReleaseValue = notch.Value;
                        break;
                    case ControllerState.Lap:
                    case ControllerState.Hold:
                        HoldValue = notch.Value;
                        break;
                    case ControllerState.Apply:
                    case ControllerState.GSelfLap:
                    case ControllerState.GSelfLapH:
                        ApplyValue = notch.Value;
                        break;
                    case ControllerState.Emergency:
                        EmergencyValue = notch.Value;
                        break;
                }
            }
        }

        public override void InitializeMoving()
        {
        }

        public override float Update(float elapsedSeconds)
        {
            if (Apply)
                SetCurrentValue(ApplyValue);
            else if (Release)
                SetCurrentValue(ReleaseValue);
            else
                SetCurrentValue(HoldValue);

            return CurrentValue();
        }

        public override void UpdatePressure(ref float pressureBar, float elapsedClockSeconds, ref float epPressureBar)
        {
            RegulatorPressureBar = Math.Min(MaxPressureBar(), MainReservoirPressureBar());

            if (!FirstDepression && Apply && pressureBar > Math.Max(RegulatorPressureBar - FirstDepressureBar, 0))
                FirstDepression = true;
            else if (FirstDepression && pressureBar <= Math.Max(RegulatorPressureBar - FirstDepressureBar, 0))
                FirstDepression = false;

            if (Apply && Overcharge)
                Overcharge = false;
            if (Apply && QuickRelease)
                QuickRelease = false;

            if (EmergencyBrakingPushButton() || TCSEmergencyBraking())
                CurrentState = State.Emergency;
            else if (
                Apply && pressureBar > RegulatorPressureBar - FullServReductionBar()
                || FirstDepression && !Release && !QuickRelease && pressureBar > RegulatorPressureBar - FirstDepressureBar
                )
                CurrentState = State.Apply;
            else if (OverchargeElimination && pressureBar > RegulatorPressureBar)
                CurrentState = State.OverchargeElimination;
            else if (Overcharge && pressureBar <= RegulatorPressureBar + OverchargePressureBar)
                CurrentState = State.Overcharge;
            else if (QuickRelease && !Neutral && pressureBar < RegulatorPressureBar)
                CurrentState = State.QuickRelease;
            else if (
                !Neutral && (
                    Release && pressureBar < RegulatorPressureBar
                    || !FirstDepression && pressureBar > RegulatorPressureBar - BrakeReleasedDepressureBar && pressureBar < RegulatorPressureBar
                    || pressureBar < RegulatorPressureBar - FullServReductionBar()
                    )
                )
                CurrentState = State.Release;
            else
                CurrentState = State.Hold;

            switch (CurrentState)
            {
                case State.Overcharge:
                    SetUpdateValue(-1);

                    pressureBar += QuickReleaseRateBarpS() * elapsedClockSeconds;
                    epPressureBar = -1;

                    if (pressureBar > MaxPressureBar() + OverchargePressureBar)
                        pressureBar = MaxPressureBar() + OverchargePressureBar;
                    break;

                case State.OverchargeElimination:
                    SetUpdateValue(-1);

                    pressureBar -= OverchargeEleminationPressureRateBarpS * elapsedClockSeconds;
                    epPressureBar = -1;

                    if (pressureBar < MaxPressureBar())
                        pressureBar = MaxPressureBar();
                    break;

                case State.QuickRelease:
                    SetUpdateValue(-1);

                    pressureBar += QuickReleaseRateBarpS() * elapsedClockSeconds;
                    epPressureBar = -1;

                    if (pressureBar > RegulatorPressureBar)
                        pressureBar = RegulatorPressureBar;
                    break;

                case State.Release:
                    SetUpdateValue(-1);

                    pressureBar += ReleaseRateBarpS() * elapsedClockSeconds;
                    epPressureBar = -1;

                    if (pressureBar > RegulatorPressureBar)
                        pressureBar = RegulatorPressureBar;
                    break;

                case State.Hold:
                    SetUpdateValue(0);
                    epPressureBar = 0;
                    break;

                case State.Apply:
                    SetUpdateValue(1);

                    pressureBar -= ApplyRateBarpS() * elapsedClockSeconds;
                    epPressureBar = 1;

                    if (pressureBar < Math.Max(RegulatorPressureBar - FullServReductionBar(), 0.0f))
                        pressureBar = Math.Max(RegulatorPressureBar - FullServReductionBar(), 0.0f);
                    break;

                case State.Emergency:
                    SetUpdateValue(1);

                    pressureBar -= EmergencyRateBarpS() * elapsedClockSeconds;
                    epPressureBar = 1;

                    if (pressureBar < 0)
                        pressureBar = 0;
                    break;
            }

            if (QuickRelease && pressureBar == RegulatorPressureBar)
                QuickRelease = false;
        }

        public override void UpdateEngineBrakePressure(ref float pressureBar, float elapsedClockSeconds)
        {
            switch (CurrentState)
            {
                case State.Release:
                    SetCurrentValue(ReleaseValue);
                    SetUpdateValue(-1);
                    pressureBar -= ReleaseRateBarpS() * elapsedClockSeconds;
                    break;
                
                case State.Apply:
                    SetCurrentValue(ApplyValue);
                    SetUpdateValue(0);
                    pressureBar += ApplyRateBarpS() * elapsedClockSeconds;
                    break;
                
                case State.Emergency:
                    SetCurrentValue(EmergencyValue);
                    SetUpdateValue(1);
                    pressureBar += EmergencyRateBarpS() * elapsedClockSeconds;
                    break;
            }

            if (pressureBar > MaxPressureBar())
                pressureBar = MaxPressureBar();
            if (pressureBar < 0)
                pressureBar = 0;
        }

        public override void HandleEvent(BrakeControllerEvent evt)
        {
            switch (evt)
            {
                case BrakeControllerEvent.StartIncrease:
                    Apply = true;
                    break;

                case BrakeControllerEvent.StopIncrease:
                    Apply = false;
                    break;

                case BrakeControllerEvent.StartDecrease:
                    Release = true;
                    break;

                case BrakeControllerEvent.StopDecrease:
                    Release = false;
                    break;
            }
        }

        public override void HandleEvent(BrakeControllerEvent evt, float? value)
        {
            switch (evt)
            {
                case BrakeControllerEvent.StartIncrease:
                    Apply = true;
                    break;

                case BrakeControllerEvent.StartDecrease:
                    Release = true;
                    break;

                case BrakeControllerEvent.StartDecreaseToZero:
                    QuickRelease = true;
                    break;

                case BrakeControllerEvent.SetCurrentPercent:
                    if (value != null)
                    {
                        float percent = value ?? 0F;
                        percent *= 100;

                        if (percent < 40)
                        {
                            Apply = true;
                            Release = false;
                        }
                        else if (percent > 60)
                        {
                            Apply = false;
                            Release = true;
                        }
                        else
                        {
                            Apply = false;
                            Release = false;
                        }
                    }
                    break;

                case BrakeControllerEvent.SetCurrentValue:
                    if (value != null)
                    {
                        float newValue = value ?? 0F;
                        SetValue(newValue);
                    }
                    break;
            }
        }

        public override bool IsValid()
        {
            return true;
        }

        public override ControllerState GetState()
        {
            switch (CurrentState)
            {
                case State.Overcharge:
                    return ControllerState.Overcharge;

                case State.OverchargeElimination:
                    return ControllerState.Overcharge;

                case State.QuickRelease:
                    return ControllerState.FullQuickRelease;

                case State.Release:
                    return ControllerState.Release;

                case State.Hold:
                    return ControllerState.Hold;

                case State.Apply:
                    return ControllerState.Apply;

                case State.Emergency:
                    if (EmergencyBrakingPushButton())
                        return ControllerState.EBPB;
                    else if (TCSEmergencyBraking())
                        return ControllerState.TCSEmergency;
                    else if (TCSFullServiceBraking())
                        return ControllerState.TCSFullServ;
                    else
                        return ControllerState.Emergency;

                default:
                    return ControllerState.Dummy;
            }
        }

        public override float? GetStateFraction()
        {
            return null;
        }

        private void SetValue(float v)
        {
            SetCurrentValue(v);
            
            if (CurrentValue() == EmergencyValue)
            {
                Apply = false;
                Release = false;
                QuickRelease = false;
            }
            else if (CurrentValue() == ApplyValue)
            {
                Apply = true;
                Release = false;
                QuickRelease = false;
            }
            else if (CurrentValue() == HoldValue)
            {
                Apply = false;
                Release = false;
                QuickRelease = false;
            }
            else if (CurrentValue() == ReleaseValue)
            {
                Apply = false;
                Release = true;
                QuickRelease = false;
            }
            else if (CurrentValue() == QuickReleaseValue)
            {
                Apply = false;
                Release = false;
                QuickRelease = true;
            }
        }
    }
}
