
Comment ( Standard ORTS Diesel Engine for CP 1900 Alsthom )
Comment ( *** Diesel Engine *** )
	Type 					( Diesel )
	MaxPower 				( 1662kW ) #(* comprovado em ficha técnica nº12 ed1987*)
	MaxForce 				( 388kN ) #(* comprovado em ficha técnica nº12 ed1987*)
	MaxContinuousForce 		( 251kN ) #(* comprovado em ficha técnica nº12 ed1987*)
	MaxVelocity 			( 100kmh ) #(* comprovado em ficha técnica nº12 ed1987*)
	ORTSContinuousForceTimeFactor ( 1800 )
	MaxTemperature 		      ( 93.3degC )
	MaxOilPressure 		      ( 59.738psi )

	MaxDieselLevel 			( 4600l ) #(* comprovado em manual de conducao*)
	DieselEngineSpeedOfMaxTractiveEffort	( 11.806mph )
	DieselEngineType 			( electric )

Comment ( *** General *** )
	WheelRadius 		( 0.55m ) #(* comprovado em ficha técnica nº12 ed1987*)
	Sanding 			( 25mph )
	NumWheels 			( 6 )
	ORTSNumberDriveAxles 	( 6 )
	DoesHornTriggerBell 	( 0 )
	ORTSDriveWheelWeight 	( 117t ) #(* comprovado em ficha técnica nº12 ed1987*)

Comment ( *** Electric Motor *** )
	MaxCurrent 			( 1600A )
	ORTSElectricTrainSupply ( Mode ( Unfitted ))
	
Comment ( * SACM-AGO V12 DSHR * )
ORTSDieselEngines ( 1
	Diesel(
		IdleRPM 			( 600 ) #(* comprovado em manual de conducao*)
		MaxRPM 			( 1350 ) #(* comprovado em ficha técnica nº12 ed1987*)
		StartingRPM			( 500 )
		StartingConfirmRPM	( 650 ) #(* comprovado em manual de conducao*)
            ChangeUpRPMpS 		( 20 )
            ChangeDownRPMpS 		( 20 )
            RateOfChangeUpRPMpSS 	( 5 )
            RateOfChangeDownRPMpSS	( 5 )
		MaximalPower 		( 2206496W ) #(* 3000cv comprovado em ficha técnica nº12 ed1987*)
		IdleExhaust 		( 7.5 ) #( 4-stroke = rpm / 80 )
		MaxExhaust 			( 17 ) #( 4-stroke = rpm / 80 )
            ExhaustDynamics 		( 2.0 )
            ExhaustDynamicsDown 	( 0.5 )
            ExhaustColor 		( 11454545 )
            ExhaustTransientColor 	( 11515151 )
		DieselPowerTab (
			0	0
			600	24020
			651	28824
			990	486405
			1110	1425586
			1210	1972041
			1220	2368370
			1230	2786318
			1350	2206496
		)
		Comment (* Consumo estimado para cilindrada total de 152.1l e mistura 18:1 *)
            DieselConsumptionTab (
                0       0
                600     12.0
                651     12.5
                910     66.3
                990     123.7
                1110    326.4
                1210    432.6
                1220    516.6
                1230    597.4
                1350    698.0
		)
		ThrottleRPMTab (
			0	600
			2	770
			6	900
			15	990
			20    1100
			60	1200
			75	1221
			85	1230
			100	1350
		)
		DieselTorqueTab (		
			0	0
			600	347
			900	1720
			1110	10211
			1350	17406
		)
		MinOilPressure		( 43.5113psi ) #(* 3 bar comprovado em manual de conducao*)
		MaxOilPressure 		( 101.526psi ) #(* 7 bar comprovado em manual de conducao*)
		MaxTemperature 		( 95degC ) #(* comprovado em manual de conducao*)
		Cooling			( 3 ) #( 0=No cooling, 1=Mechanical, 2= Hysteresis, 3=Proportional )
		TempTimeConstant		( 720 )
		OptTemperature		( 73degC ) #(* comprovado em manual de conducao*)
		IdleTemperature		( 54.5degC )
	)
)