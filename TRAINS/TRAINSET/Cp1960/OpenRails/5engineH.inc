
Comment ( ORTS Diesel Engine for CP 1960 Bombardier - Heavy Trains )
Comment ( *** Diesel Engine BASIC configuration***
	MaxPower 				( 1655kW )
	MaxForce 				( 450kN )
	MaxContinuousForce 		( 282kN )
	ORTSContinuousForceTimeFactor ( 1800 )
	MaxTemperature 		      ( 93.3degC )
	MaxOilPressure 		      ( 59.738psi )

	DieselEngineSpeedOfMaxTractiveEffort( 17.3mph )
	DieselEngineType 			( electric )

	DieselSmokeEffectInitialMagnitude ( 0.25 )
	DieselSmokeEffectMaxMagnitude ( 3.75 )
	DieselSmokeEffectInitialSmokeRate ( 4 )
	DieselSmokeEffectMaxSmokeRate ( 17 )

	DieselEngineIdleRPM ( 550 )
	DieselEngineMaxRPM ( 1050 )
	DieselEngineMaxRPMChangeRate ( 50 )

	DoesBrakeCutPower( 1 )
	DoesHornTriggerBell( 0 )
	RunUpTimeToMaxForce ( 30 )
	BrakeCutsPowerAtBrakeCylinderPressure ( 15 )
	MaxSandingTime( 1200 )
)

Comment ( *** General *** )
	Type 					( Diesel )
	WheelRadius ( 0.55m )
	Sanding ( 10mph )
	ORTSNumberDriveAxles ( 6 )
	ORTSDriveWheelWeight ( 121t )
	ORTSElectricTrainSupply ( Mode ( Unfitted ) )
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

Comment ( * 	Caculated with ORTS Diesels  with following parameter:
		Cyl Bore (mm)	228.6
		Cyl Stroke (mm)	266.7
		Cyl number	16
		Eng output (kW)	2237.387 	3042CV
		Idle RPM	275
		Max RPM		1050
		Notch		8
		Stroke type	4
		Aspiration	Turbocharger
		Injection	Valve
		Maxforce (kN)	441.3		45000kgf
		Max Speed	120kph

		Diesel Comsumption Tab calculated on basis of Data from INTF - not from ORTS Diesels *
)
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
	ORTSMaxTractiveForceCurves (
		0	(
			0	0
			1	0
			2	0
			3.5	0
			5	0
			7	0
			9	0
			11.5	0
			14	0
			17	0
			20	0
			23.5	0
			27	0
			31	0
			33.3332333	0
			33.3333333	0
		)
		0.125	(
			0	55162.5
			1	55162.5
			2	55162.5
			3.5	34246.415448
			5	23972.490813
			7	17123.207724
			9	13318.050452
			11.5	10422.822093
			14	8561.603862
			17	7050.732592
			20	5993.122703
			23.5	5100.52996
			27	4439.350151
			31	3866.530776
			33.3332333	3595.884413
			33.3333333	0
		)
		0.25	(
			0	110325
			1	110325
			2	110325
			3.5	85991.057784
			5	60193.740449
			7	42995.528892
			9	33440.966916
			11.5	26171.191499
			14	21497.764446
			17	17704.041308
			20	15048.435112
			23.5	12807.178819
			27	11146.988972
			31	9708.667814
			33.3332333	9029.088164
			33.3333333	0
		)
		0.375	(
			0	165487.5
			1	165487.5
			2	165487.5
			3.5	151317.68248
			5	105922.377736
			7	75658.84124
			9	58845.765409
			11.5	46053.207711
			14	37829.42062
			17	31153.640511
			20	26480.594434
			23.5	22536.676114
			27	19615.255136
			31	17084.254474
			33.3332333	15888.404342
			33.3333333	0
		)
		0.5	(
			0	220650
			1	220650
			2	220650
			3.5	220650
			5	159490.449084
			7	113921.749346
			9	88605.805047
			11.5	69343.673515
			14	56960.874673
			17	46908.955613
			20	39872.612271
			23.5	33934.138103
			27	29535.268349
			31	25724.265981
			33.3332333	23923.639157
			33.3333333	0
		)
		0.625	(
			0	275812.5
			1	275812.5
			2	275812.5
			3.5	275812.5
			5	219886.28426
			7	157061.631614
			9	122159.046811
			11.5	95602.732287
			14	78530.815807
			17	64672.436547
			20	54971.571065
			23.5	46784.3158
			27	40719.68227
			31	35465.529719
			33.3332333	32983.041621
			33.3333333	0
		)
		0.75	(
			0	330975
			1	330975
			2	330975
			3.5	330975
			5	286411.602349
			7	204579.715964
			9	159117.556861
			11.5	124526.78363
			14	102289.857982
			17	84238.706573
			20	71602.900587
			23.5	60938.638798
			27	53039.18562
			31	46195.419734
			33.3332333	42961.869281
			33.3333333	0
		)
		0.875	(
			0	386137.5
			1	386137.5
			2	386137.5
			3.5	386137.5
			5	358546.815768
			7	256104.868406
			9	199192.675427
			11.5	155889.919899
			14	128052.434203
			17	105454.945814
			20	89636.703942
			23.5	76286.556546
			27	66397.558476
			31	57830.131576
			33.3332333	53782.183766
			33.3333333	0
		)
		1	(
			0	441300
			1	441300
			2	441300
			3.5	441300
			5	435885.706697
			7	311346.933355
			9	242158.725943
			11.5	189515.524651
			14	155673.466678
			17	128201.67844
			20	108971.426674
			23.5	92741.639723
			27	80719.575314
			31	70304.146241
			33.3332333	65383.052219
			33.3333333	0
		)
	)