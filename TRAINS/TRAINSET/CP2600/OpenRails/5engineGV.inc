
Comment ( *** Electric Engine *** )
Comment ( *** General *** )
	WheelRadius			( 0.570m )
	Sanding				( 25kmh )
	MaxSandingTime			( 1200 )
	ORTSNumberDriveAxles		( 4 )
	ORTSDriveWheelWeight		( 78t )

Comment ( *** Traction Characteristics 2 x TAB-660 A1 1,88*** )
	Type				( Electric )
	ORTSTractionMotorType		( AC )  
 	MaxTemperature 			( 93degC )
	MaxOilPressure 			( 59.738psi )
	MinOilPressure 			( 20 )
	MaxPower			( 2870kW )
	MaxForce			( 210kN )
	MaxContinuousForce		( 119kN )
	ORTSSpeedOfMaxContinuousForce	( 89kmh )
	MaxVelocity			( 160kmh )
	MaxCurrent			( 1600A )

Comment ( *** General *** )
	DoesHornTriggerBell		( 0 )
	RunUpTimeToMaxForce		( 30 )
	DieselEngineSpeedOfMaxTractiveEffort ( 30kmh )

	ORTSContinuousForceTimeFactor	( 1800 )																				
	ORTSTractionCharacteristics (	18	5
		throttle (	0	0.11	0.86	1	)
		table (						
			0km/h	0.00kN	238.00kN	1479.00kN	1700.00kN
			10km/h	0.00kN	147.00kN	913.50kN	1050.00kN
			20km/h	0.00kN	106.40kN	661.20kN	760.00kN
			30km/h	0.00kN	84.00kN	522.00kN	600.00kN
			40km/h	0.00kN	63.00kN	391.50kN	450.00kN
			50km/h	0.00kN	49.00kN	304.50kN	350.00kN
			60km/h	0.00kN	37.10kN	230.55kN	265.00kN
			70km/h	0.00kN	31.50kN	195.75kN	225.00kN
			80km/h	0.00kN	29.18kN	181.36kN	208.46kN
			90km/h	0.00kN	27.74kN	172.38kN	198.14kN
			98km/h	0.00kN	26.60kN	165.30kN	190.00kN
			100km/h	0.00kN	26.14kN	162.47kN	186.74kN
			110km/h	0.00kN	23.79kN	147.83kN	169.91kN
			120km/h	0.00kN	21.81kN	135.55kN	155.80kN
			140km/h	0.00kN	18.62kN	115.71kN	133.00kN
			150km/h	0.00kN	17.40kN	108.15kN	124.31kN
			160km/h	0.00kN	15.12kN	93.98kN	108.03kN
			180km/h	0.00kN	11.93kN	74.15kN	85.23kN
		)					
	)