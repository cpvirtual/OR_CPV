
	EngineControllers (
		Throttle ( 0 1 0.125 0 0
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
		Brake_Engine ( 0 1 0.4 0.5 
			NumNotches ( 3 
				Notch(0 0 TrainBrakesControllerReleaseStart ) 
				Notch(0.5 0 TrainBrakesControllerRunningStart ) 
				Notch(0.9 0 TrainBrakesControllerApplyStart ) 
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
	BellToggle( 0 1 0 )
	AWS ( 0 1 0 )
	Sanding ( 0 1 0 )
	Horn ( 0 1 0 )
	Wipers ( 0 1 0 )
	EmergencyStopResetToggle( 0 1 0 )
	EmergencyStopToggle( 0 1 0 )
	Vigilance ( 0 1 0 )
	Headlights ( 0 0.25 1 0 )
	BailOffButton( 0 1 0 )
	)
