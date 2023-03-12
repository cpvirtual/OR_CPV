
Comment ( Standard ORTS Diesel Engine for CP 1000 Drewry )
Comment ( *** Diesel Engine *** )
	Type 					( Diesel )
	MaxPower 				( 110.32kW ) #(* comprovado em ficha técnica nº1 ed1987*)
	MaxForce 				( 74.53kN ) #(* comprovado em ficha técnica nº1 ed1987*)
	MaxContinuousForce 		( 54.92kN ) #(* estimado *)
	MaxVelocity 			( 41.5kmh ) #(* comprovado em ficha técnica nº1 ed1987*)
	ORTSContinuousForceTimeFactor ( 1800 )
	MaxTemperature 		      ( 93.3degC )
	MaxDieselLevel 			( 1010l ) #(* 0.845t / 0.837t/m^3 estimado baseado em peso na ficha técnica nº1 ed1987*)
	DieselEngineSpeedOfMaxTractiveEffort	( 11.806mph ) 
	DieselEngineType 			( hydraulic )

Comment ( *** General *** )
	WheelRadius 		( 0.4955m ) #(* comprovado em ficha técnica nº1 ed1987*)
	Sanding 			( 15kph )
	ORTSNumberDriveAxles 	( 3 )
	DoesHornTriggerBell 	( 0 )
	ORTSDriveWheelWeight 	( 30.4t ) #(* comprovado em ficha técnica nº1 ed1987*)
	
Comment ( * Gardner 8L3 * )
	ORTSDieselEngines ( 1
		Diesel(
			IdleRPM ( 530 )
			MaxRPM ( 1200 )
			StartingRPM ( 460 )
			StartingConfirmRPM ( 550 )
			ChangeUpRPMpS ( 50 )
			ChangeDownRPMpS ( 40 )
			RateOfChangeUpRPMpSS ( 10 )
			RateOfChangeDownRPMpSS ( 10 )
			MaximalPower ( 200hp )
			IdleExhaust ( 7 )
			MaxExhaust ( 15 )
			ExhaustDynamics (1.25 )
			ExhaustDynamicsDown ( 0.5 )
			ExhaustColor ( 11464650 )
			ExhaustTransientColor ( 11141418 )
			DieselPowerTab (
				0	0
				530	17330
				1200	110320
			)
			DieselConsumptionTab (
				0	0
				530	2.6
				1200	273
			)
			ThrottleRPMTab (
				0	530
				8	700
				100	1200
			)
			DieselTorqueTab (
				0	0
				530	657
				1200	1486
			)
			MinOilPressure		( 49.781psi )
			MaxOilPressure 		( 59.738psi )
			MaxTemperature 		( 93.3degC )
			Cooling			( 3 ) #( 0=No cooling. 1=Mechanical. 2= Hysteresis. 3=Proportional )
			TempTimeConstant		( 720 )
			OptTemperature		( 70degC )
			IdleTemperature		( 54.5degC )
		)
	)
	ORTSMaxTractiveForceCurves (
		0 (
			0.00	0
			1.39	0
			2.78	0
			7.50	0
			8.33	0
			11.53	0
			15.00	0
		)
 		0.125 (		
			0.00	74530
			1.39	8268
			2.78	4134
			7.50	1531
			8.33	1378
			11.53	1196
			15.00	766
		)		
		0.25 (		
			0.00	74530
			1.39	16537
			2.78	8268
			7.50	3062
			8.33	2756
			11.53	2292
			15.00	1531
		)		
		0.375 (		
			0.00	74530
			1.39	24805
			2.78	12402
			7.50	4594
			8.33	4134
			11.53	3989
			15.00	2297
		)		
		0.5 (		
			0.00	74530
			1.39	33073
			2.78	16537
			7.50	6125
			8.33	5512
			11.53	4985
			15.00	3062
		)		
		0.625 (		
			0.00	74530
			1.39	41342
			2.78	20671
			7.50	7656
			8.33	6890
			11.53	5981
			15.00	3828
		)		
		0.75 (		
			0.00	74530
			1.39	49610
			2.78	24805
			7.50	9187
			8.33	8268
			11.53	7977
			15.00	4594
		)		
		0.875 (		
			0.00	74530
			1.39	57878
			2.78	28939
			7.50	10718
			8.33	9646
			11.53	8973
			15.00	5359
		)		
		1 (		
			0.00	74530
			1.39	66147
			2.78	33073
			7.50	12249
			8.33	11024
			11.53	10003
			15.00	6125
		)
	)
