
Comment ( *** Electric Engine *** )
Comment ( *** General *** )
	WheelRadius				( 0.570m )
	Sanding				( 25kmh )
	MaxSandingTime			( 1200 )
	NumWheels				( 4 )
	ORTSDriveWheelWeight		( 78t )

Comment ( *** Traction Characteristics 4 x TAB-660 A11 2,87*** )
	Type					( Electric )
  	MaxTemperature 			( 93degC )
	MaxOilPressure 			( 59.738psi )
	MinOilPressure 			( 20 )
	MaxPower				( 2870kW )
	MaxForce				( 250kN )
	MaxContinuousForce		( 191.5kN )
	ORTSSpeedOfMaxContinuousForce	( 55kmh )
	MaxVelocity				( 100kmh )
	MaxCurrent				( 1600A )

Comment ( *** General *** )
	DoesHornTriggerBell		( 0 )
	RunUpTimeToMaxForce		( 30 )
	DieselEngineSpeedOfMaxTractiveEffort ( 30kmh )
	
	ORTSContinuousForceTimeFactor ( 1800 )
	ORTSTractionCharacteristics (	7	3
		throttle (		0	1	)
		table (
			0km/h		0.00kN	610.00kN
			10km/h	0.00kN	450.00kN
			20km/h	0.00kN	310.00kN
			55km/h  	0.00kN  	250.00kN
			88km/h	0.00kN	119.00kN
			100km/h	0.00kN	108.03kN
			120km/h	0.00kN	95.00kN
			)
		)