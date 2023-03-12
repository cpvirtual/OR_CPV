 
Comment ( *** Diesel Engine *** )
	Type 					( Diesel )
	MaxPower 				( 252kW ) Comment (* comprovado a partir ficha técnica *)
	MaxForce 				( 126.5kN )
	MaxContinuousForce 		( 21.38kN )
	MaxVelocity 			( 100kmh )
	ORTSContinuousForceTimeFactor ( 3600 )
	MaxTemperature 			( 85 )
	MaxOilPressure 			( 71.12 )
	MaxDieselLevel 			( 1100 ) Comment (* comprovado a partir ficha técnica de 1983 *)
	DieselEngineSpeedOfMaxTractiveEffort( 33kph )
	DieselEngineType 			( electric )

Comment ( *** General *** )
	WheelRadius 		( 0.46m )
	Sanding 			( 25mph )
	ORTSNumberDriveAxles 	( 4 )
	DoesHornTriggerBell 	( 0 )
	ORTSDriveWheelWeight 	( 58t )
	ORTSSpeedOfMaxContinuousForce ( 33kph )										

Comment ( *** 4 x Electric Motor GT30/27 *** )
	MaxCurrent 			( 1000A )
	ORTSElectricTrainSupply ( Mode ( Unfitted ))

Comment ( * 2 x SSCM "Poyaud" C6150T 6LH * )
ORTSDieselEngines ( 1
	Diesel(
		IdleRPM 			( 950 )
		MaxRPM 			( 1800 )
		StartingRPM			( 850 )
		StartingConfirmRPM	( 965 )
		ChangeUpRPMpS 		( 50 )
		ChangeDownRPMpS 		( 40 )
		RateOfChangeUpRPMpSS 	( 10 )
		RateOfChangeDownRPMpSS 	( 10 )
		MaximalPower 		( 176520W ) #(* 240cv )
		IdleExhaust 		( 5 ) #( 4-stroke = rpm / 80 )
		MaxExhaust 			( 23 ) #( 4-stroke = rpm / 80 )
		ExhaustDynamics 		( 0.8 )
		ExhaustDynamicsDown 	( 0.4 )
		ExhaustColor 		( 00999792 )
		ExhaustTransientColor 	( FF5B5851 )
		DieselPowerTab (
			0	0
			950	3677
			1800	176520
		)
		Comment (* Consumo comprovado e calculado a partir de dados da CP de 1983 *)
		DieselConsumptionTab (
			0	0
			950	10	
			1800	165
		)
		ThrottleRPMTab (
			0	950
			20    975
			100	1800
		)
		DieselTorqueTab (		
			0	0
			950	1060
			180	8369
		)
		MinOilPressure		( 49.781psi ) #(* 3,5 kg.cm2 comprovado em manual de conducao*)
		MaxOilPressure 		( 59.738psi ) #(* 4,2 kg.cm2 comprovado em manual de conducao*)
		MaxTemperature 		( 93.3degC ) #(* comprovado em manual de conducao*)
		Cooling			( 3 ) #( 0=No cooling, 1=Mechanical, 2= Hysteresis, 3=Proportional )
		TempTimeConstant		( 720 )
		OptTemperature		( 70degC )
		IdleTemperature		( 54.5degC ) #(* comprovado em manual de conducao*)
	)
)
