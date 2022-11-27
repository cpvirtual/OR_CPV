
	EngineControllers (
		Throttle ( 0 1 0.02 0
 			NumNotches ( 3
  				Notch( 0.0  0 Dummy )
  				Notch( 0.1  1 Dummy )
  				Notch( 1.0  0 Dummy )
			)
		)
		Brake_Engine ( 0 1 0.0125 0.5 
			NumNotches ( 1
				Notch( 0 1 EngineBrakesControllerContinuousServiceStart )
			)
		)
		Brake_Train ( 0 1 0.1 0.2
 			NumNotches ( 4
				Notch ( 0.0  0 TrainBrakesControllerOverchargeStart ) Comment ( RELEASE - sprung position )
				Notch ( 0.1  0 TrainBrakesControllerReleaseStart ) Comment ( RUNNING )
				Notch ( 0.2  1 TrainBrakesControllerGraduatedSelfLapLimitedStart  )
				Notch ( 1.0  0 TrainBrakesControllerEmergencyStart )
			)
		)
		Brake_Hand ( 0 1 0.0125 0
			NumNotches( 0 )
		)
		DirControl ( -1 0 1 1 )
		EmergencyStopResetToggle( 0 1 0 )
		EmergencyStopToggle( 0 1 0 )
		Sanding ( 0 1 0 )
		Wipers ( 0 1 0 )
		Vigilance ( 0 1 0 )
		Horn ( 0 1 0 )
		Overspeed ( 0 1 0 )
		ShutsDownEngine ( 0 1 O )
		Headlights ( 0 0.25 1 0 )
		BailOffButton ( 0 1 0 )
		CABToggle ( 0 1 0 )
		ORTSOvercharge ( 0 1 0 )
	)