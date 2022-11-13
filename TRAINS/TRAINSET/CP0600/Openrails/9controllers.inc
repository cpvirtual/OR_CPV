
	EngineControllers (
		Throttle ( 0 1 0.143 0 
			NumNotches ( 8
				Notch ( 0       0 Dummy )
				Notch ( 0.143   0 Dummy )
				Notch ( 0.286   0 Dummy )
				Notch ( 0.429   0 Dummy )
				Notch ( 0.571   0 Dummy )
				Notch ( 0.714   0 Dummy )
				Notch ( 0.857   0 Dummy )
				Notch ( 1       0 Dummy )
			)
		)
		Brake_Train ( 0 1 0.025 0.9 
			NumNotches ( 5
				Notch ( 0    0 TrainBrakesControllerReleaseStart )
				Notch ( 0.3  1 TrainBrakesControllerGraduatedSelfLapLimitedStart )
				Notch ( 0.85 0 TrainBrakesControllerSuppressionStart )
				Notch ( 0.9  0 TrainBrakesControllerContinuousServiceStart )
				Notch ( 0.95 0 TrainBrakesControllerEmergencyStart )
			)
		)
		Brake_Hand ( 0 1 0.0125 0 
			NumNotches ( 0 ) 
		)
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
	