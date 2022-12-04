
Comment ( Standard ORTS Diesel Engine for CP 1400 English Electric )
Comment ( *** Diesel Engine *** )
	Type 					( Diesel )
	MaxPower 				( 713kW ) #(* 970cv comprovado em manual de conducao de 1969*)
	MaxForce 				( 161kN ) #(* comprovado em ficha técnica nº7 ed1987*)
	MaxContinuousForce 		( 142kN ) #(* comprovado em ficha técnica nº7 ed1987*)
	MaxVelocity 			( 105kmh ) #(* comprovado em ficha técnica nº7 ed1987*)
	ORTSContinuousForceTimeFactor ( 3600 )
	MaxTemperature 		      ( 93.3degC ) #(* comprovado em manual de conducao*)
	MaxOilPressure 		      ( 59.738psi ) #(* 4.2 kg.cm2 comprovado em manual de conducao*)

	MaxDieselLevel 			( 2250l ) #(* comprovado em manual de conducao*)
	DieselEngineSpeedOfMaxTractiveEffort	( 11.806mph ) #(* comprovado em ficha técnica nº7 ed1987*)
	DieselEngineType 			( electric )

Comment ( *** General *** )
	WheelRadius 		( 0.475m ) #(* comprovado em ficha técnica nº7 ed1987*)
	Sanding 			( 25mph )
	NumWheels 			( 4 )
	ORTSNumberDriveAxles 	( 4 )
	DoesHornTriggerBell 	( 0 )
	ORTSDriveWheelWeight 	( 64.4t ) #(* comprovado em ficha técnica nº7 ed1987*)

Comment ( *** Electric Motor *** )
	MaxCurrent 			( 1000A ) #(* comprovado em manual de conducao*)
	ORTSElectricTrainSupply ( Mode ( Unfitted ))
	
Comment ( * English Electric 8 SVT * )
ORTSDieselEngines ( 1
	Diesel(
		IdleRPM 			( 450 ) #(* comprovado em manual de conducao de 1969*)
		MaxRPM 			( 850 ) #(* comprovado em manual de conducao de 1969*)
		StartingRPM			( 360 )
		StartingConfirmRPM	( 460 )
		ChangeUpRPMpS 		( 50 )
		ChangeDownRPMpS 		( 40 )
		RateOfChangeUpRPMpSS 	( 10 )
		RateOfChangeDownRPMpSS 	( 10 )
		MaximalPower 		( 978213W ) #(* 1330cv comprovado em ficha técnica nº7 ed1987*)
		IdleExhaust 		( 4 ) #( 4-stroke = rpm / 80 )
		MaxExhaust 			( 11 ) #( 4-stroke = rpm / 80 )
		ExhaustDynamics 		( 1.2 )
		ExhaustDynamicsDown 	( 0.5 )
		ExhaustColor 		( 00999792 )
		ExhaustTransientColor 	( FF5B5851 )
		DieselPowerTab (
			450	50000
			452	249809
			550	383290
			650	518261
			750	643539
			850	745700
		)
		Comment (* Consumo comprovado e calculado a partir de dados da CP de 1983 *)
		DieselConsumptionTab (
			0	0
			450	14
			452	64
			550	98
			650	145
			750	194	
			850	273
		)
		ThrottleRPMTab (
			0	450
			20    452
			25	475
			50	600
			75	725
			100	850
		)
		DieselTorqueTab (		
			0	0
			450	1060
			452	5273
			550	6648
			650	7606
			750	8186
			850	8369
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