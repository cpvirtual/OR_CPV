
	EngineControllers (
            Throttle ( 0 1 0.25 0
			NumNotches ( 5
				Notch ( 0      0 Dummy )
				Notch ( 0.25   0 Dummy )
				Notch ( 0.50   0 Dummy )
				Notch ( 0.75   0 Dummy )
				Notch ( 1   0 Dummy )
			)
		)
		Brake_Dynamic ( 0 1 0.11 0
			NumNotches ( 10
				Notch ( 0 0 Dummy )
				Notch ( 0.11 0 Dummy )
				Notch ( 0.22 0 Dummy )
				Notch ( 0.33 0 Dummy )
				Notch ( 0.44 0 Dummy )
				Notch ( 0.55 0 Dummy )
				Notch ( 0.66 0 Dummy )
				Notch ( 0.77 0 Dummy )
				Notch ( 0.88 0 Dummy )
				Notch ( 1 0 Dummy )
			)
		)
		Brake_Engine ( 0 1 0.1 0.0
			NumNotches( 1
				Notch( 0 1 EngineBrakesControllerVacuumContinuousServiceStart )
			)
		)
		Brake_Train ( 0 1 0.1 0.3
			NumNotches ( 4
				Notch ( 0.0  0 TrainBrakesControllerFullQuickReleaseStart ) Comment ( RELEASE - sprung position - exhauster fast speed )
				Notch ( 0.1  0 TrainBrakesControllerReleaseStart ) Comment ( RUNNING )
				Notch ( 0.2  1 TrainBrakesControllerVacuumContinuousServiceStart )
				Notch ( 1.0  0 TrainBrakesControllerEmergencyStart )
			)
		)
		Brake_Hand ( 0 1 0.0125 0 
			NumNotches( 0 ) 
		)
		SmallEjectorOrCompressor ( 0 1 0.1 0.5 )
		DirControl ( -1 0 1 1 )
		BellToggle ( 0 1 0 )
		AWS ( 0 1 0 )
		EngineBrakingButton ( 0 1 0 )
		Headlights ( 0 0.25 1 0 )
		Horn ( 0 1 0 )
		Sanding ( 0 1 0 )
		Vigilance ( 0 1 0 )
		Wipers ( 0 1 0 )
	)

	