
	EngineControllers (
		Throttle ( 0 1 0.125 0 
			NumNotches ( 9
				Notch ( 0       0 Dummy )
				Notch ( 0.125   0 Dummy )
				Notch ( 0.25    0 Dummy )
				Notch ( 0.375   0 Dummy )
				Notch ( 0.5     0 Dummy )
				Notch ( 0.625   0 Dummy )
				Notch ( 0.75    0 Dummy )
				Notch ( 0.875   0 Dummy )
				Notch ( 1       0 Dummy )
			)
		)
		Brake_Train ( 0 1 0.0125 0.75 
			NumNotches ( 5
				Notch ( 0    0 TrainBrakesControllerReleaseStart )
				Notch ( 0.3  1 TrainBrakesControllerGraduatedSelfLapLimitedStart )
				Notch ( 0.85 0 TrainBrakesControllerSuppressionStart )
				Notch ( 0.9  0 TrainBrakesControllerContinuousServiceStart )
				Notch ( 0.95 0 TrainBrakesControllerEmergencyStart )
			)
		)
            Gear( 0 6 1 0 
                NumNotches ( 8 
			Notch ( 0         0 Dummy )
			Notch ( 1         0 Dummy )
			Notch ( 2         0 Dummy )
			Notch ( 3         0 Dummy )
			Notch ( 4         0 Dummy )
			Notch ( 5         0 Dummy )
			Notch ( 6         0 Dummy )
			Notch ( 7         0 Dummy )
                )
            )
		DirControl ( -1 0 1 1 )
		BellToggle( 0 1 0 )
		Sanding ( 0 1 0 )
		Horn ( 0 1 0 )
		Wipers ( 0 1 0 )
		Vigilance ( 0 1 0 )
		Headlights ( 0 0.25 1 0 )
	)
	