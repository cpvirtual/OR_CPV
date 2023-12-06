
Comment ( ORTS Diesel Engine for CP 1960 Bombardier - Light Trains )

Comment ( *** General *** )
	Type 					( Diesel )
	WheelRadius ( 0.55m )
	Sanding ( 10mph )
	ORTSNumberDriveAxles ( 6 )
	ORTSDriveWheelWeight ( 121t )
	ORTSMaxTrackSanderBoxCapacity ( 40.0ft^3 )
	ORTSMaxTrackSanderSandConsumption ( 0.25ft^3 )
	DoesHornTriggerBell ( 0 )

Comment ( *** Electric Motor *** )
	MaxCurrent ( 1800A )
	ORTSElectricTrainSupply ( Mode ( Unfitted ))
	MaxVelocity 			( 120kmh )
	ORTSSpeedOfMaxContinuousForce 	( 18.75kmh )
	ORTSTractionMotorType ( AC )
	AntiSlip ( 1 )

Comment (* Calculated with ORTS Diesels  with following parameter:	*)
Comment (* Cyl Bore (mm)	228.6					*)
Comment (* Cyl Stroke (mm)	266.7					*)
Comment (* Cyl number	16						*)
Comment (* Eng output (kW)	2237.387 	3042CV			*)
Comment (* Idle RPM	275 						*)
Comment (* Max RPM		1050 					*)
Comment (* Notch		8 					*)
Comment (* Stroke type	4 						*)
Comment (* Aspiration	Turbocherger 					*)
Comment (* Injection	Valve 						*)
Comment (* Maxforce (kN)	441.3		45000kgf 		*)
Comment (* Max Speed	120kph 						*)
Comment (* Diesel Comsumption Tab calculated on basis of Data from INTF - not from ORTS Diesels *)

	MaxDieselLevel 			( 3500l )
	ORTSDieselEngines ( 1
		Diesel(		
			IdleRPM	( 275 )	
			MaxRPM	( 1050 )	
			StartingRPM	( 175 )	
			StartingConfirmRPM	( 325 )	
			ChangeUpRPMpS	( 98 )	
			ChangeDownRPMpS	( 62 )
			RateOfChangeUpRPMpSS	( 36 )
			RateOfChangeDownRPMpSS	( 25 )
			MaximalPower	( 1752395 )
			IdleExhaust	( 1.2 )
			MaxExhaust	( 2.2 )
			ExhaustDynamics	( 1.6 )
			ExhaustDynamicsDown	( 0.8 )
			ExhaustColor	( 20161819 )
			ExhaustTransientColor	( 40212324 )
			DieselPowerTab ( 
				0	0
				275	78130.974603
				371.875	348037.977778
				468.75	617944.980952
				565.625	887851.984127
				662.5	1157758.987302
				759.375	1427665.990476
				856.25	1697572.993651
				953.125	1967479.996825
				1050	2237387
			)
			DieselConsumptionTab (		
				0	0
				275	60
				1050	780
			)
			ThrottleRPMTab (		
				0	275
				12.5	372
				25	469
				37.5	566
				50	663
				62.5	759
				75	856
				87.5	953
				100	1050
			)
			DieselTorqueTab (
				0	0
				275	2713.075759
				371.875	8937.190735
				468.75	12588.67152
				565.625	14989.368833
				662.5	16687.975421
				759.375	17953.192675
				856.25	18932.119893
				953.125	19712.05207
				1050	20348.06819
			)
			MinOilPressure	( 25 )	
			MaxOilPressure	( 71.12 )	
			MaxTemperature	( 85 )	
			Cooling	( 3 )	
			TempTimeConstant ( 720 )	
			OptTemperature	( 71 )	
			IdleTemperature	( 55 )	
		)
	)