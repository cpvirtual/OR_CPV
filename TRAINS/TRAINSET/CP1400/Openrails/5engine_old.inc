
Comment ( Standard ORTS Diesel Engine for CP 1400 English Electric )
Comment ( *** Diesel Engine *** )
	Type 				( Diesel )
	MaxPower 			( 713kW ) Comment (* 970cv comprovado em manual de conducao de 1969*)
	MaxForce 			( 161kN ) Comment (* comprovado em ficha técnica nº7 ed1987*)
	MaxContinuousForce 		( 142kN ) Comment (* comprovado em ficha técnica nº7 ed1987*)
	MaxVelocity 			( 105kmh ) Comment (* comprovado em ficha técnica nº7 ed1987*)
	ORTSContinuousForceTimeFactor 	( 3600 )
	MaxTemperature 		       ( 93.3degC ) Comment (* comprovado em manual de conducao*)
	MaxOilPressure 		       ( 59.738psi ) Comment (* 4,2 kg.cm2 comprovado em manual de conducao*)

	MaxDieselLevel 			( 2250l ) Comment (* comprovado em manual de conducao*)
	DieselEngineSpeedOfMaxTractiveEffort( 11.806mph ) Comment (* comprovado em ficha técnica nº7 ed1987*)
	DieselEngineType 		( electric )

Comment ( *** General *** )
	WheelRadius 			( 0.475m ) Comment (* comprovado em ficha técnica nº7 ed1987*)
	Sanding 			( 25mph )
	NumWheels 			( 4 )
	DoesHornTriggerBell 		( 0 )
	ORTSDriveWheelWeight 		( 64.4t ) Comment (* comprovado em ficha técnica nº7 ed1987*)

Comment ( *** Electric Motor *** )
	MaxCurrent 			( 1000A ) Comment (* comprovado em manual de conducao*)
Comment ( Standard ORTS Diesel Engine for CP 1400 English Electric )
ORTSDieselEngines ( 1
	Diesel(
		IdleRPM 		( 450 ) Comment (* comprovado em manual de conducao de 1969*)
		MaxRPM 			( 850 ) Comment (* comprovado em manual de conducao de 1969*)
		StartingRPM ( 360 )
		StartingConfirmRPM ( 460 )
		ChangeUpRPMpS ( 50 )
		ChangeDownRPMpS ( 40 )
		RateOfChangeUpRPMpSS ( 10 )
		RateOfChangeDownRPMpSS ( 10 )
		MaximalPower 		( 978213W ) Comment (* 1330cv comprovado em ficha técnica nº7 ed1987*)
		IdleExhaust ( 5.62 ) Comment ( 4-stroke = rpm / 80 )
		MaxExhaust ( 10.6 ) Comment ( 4-stroke = rpm / 80 )
		ExhaustDynamics ( 5 )
		ExhaustDynamicsDown ( 0.5 )
		ExhaustColor ( 11464650 )
		ExhaustTransientColor ( 11141418 )
		DieselPowerTab (
                        0	0
                        450	51787
                        452	275419
                        550	432961
                        650   608045
                        750   763129
                        850	978213
		)
		Comment (* Consumo comprovado e calculado a partir de dados da CP de 1983 *)
		DieselConsumptionTab (
                        0	0
                        450	23
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
		MinOilPressure		( 49.781psi ) Comment (* 3,5 kg.cm2 comprovado em manual de conducao*)
		MaxOilPressure 		( 59.738psi ) Comment (* 4,2 kg.cm2 comprovado em manual de conducao*)
		MaxTemperature 		( 93.3degC ) Comment (* comprovado em manual de conducao*)
		Cooling			( 3 ) Comment ( 0=No cooling, 1=Mechanical, 2= Hysteresis, 3=Proportional )
		TempTimeConstant		( 720 )
		OptTemperature		( 70degC )
		IdleTemperature		( 54.5degC ) Comment (* comprovado em manual de conducao*)
	)
)
