
Comment ( *** Electric Engine *** )
Comment ( *** General *** )
	WheelRadius				( 0.625m )
	Sanding				( 25kph )
	MaxSandingTime			( 1200 )
	NumWheels				( 4 )
	ORTSDriveWheelWeight		( 87.3t )

Comment ( *** Traction Characteristics 4 x SIEMENS 1TB 2824 OGA02*** )
	Type					( Electric )
  	MaxTemperature 			( 93degC )
	MaxOilPressure 			( 59.738psi )
	MinOilPressure 			( 20 )
	MaxPower				( 5600kW )
	MaxForce				( 300kN )
	MaxContinuousForce		( 250kN )
	ORTSSpeedOfMaxContinuousForce	( 70kmh )
	MaxVelocity				( 250kmh )
	MaxCurrent				( 2100A )

	DoesHornTriggerBell		( 0 )
	RunUpTimeToMaxForce		( 30 )
	DieselEngineSpeedOfMaxTractiveEffort ( 30kmh )

	ORTSContinuousForceTimeFactor ( 1800 )
	ORTSTractionCharacteristics (   21   4
   		throttle ( 0 0.64 1 )
		table (
			0km/h		0.00kN  	225kN	  	300kN
			10km/h	0.00kN	225kN	  	299kN
			20km/h	0.00kN	225kN	  	298kN
			30km/h	0.00kN	225kN	  	297kN
			40km/h	0.00kN	225kN	  	296kN
			50km/h	0.00kN	225kN	  	294kN
			60km/h	0.00kN	225kN	 	292kN
			70km/h	0.00kN	225kN	 	290kN
			80km/h	0.00kN	225kN	  	258kN
			90km/h	0.00kN	225kN	 	256kN
			100km/h	0.00kN	225kN	  	254kN
			110km/h	0.00kN	205.3kN 	235.1kN
			120km/h	0.00kN	188.2kN 	215kN
			130km/h	0.00kN	173.7kN 	200kN
			140km/h	0.00kN	161.3kN 	185kN
			150km/h	0.00kN	150.5kN 	172.3kN
			160km/h	0.00kN	141kN   	162.7kN
			170km/h	0.00kN	132.7kN 	153.2kN
			180km/h	0.00kN	125.3kN 	144.9kN
			190km/h	0.00kN	118.71kN	136kN
			220km/h	0.00kN	112.74kN  	129kN
		)                 
	)