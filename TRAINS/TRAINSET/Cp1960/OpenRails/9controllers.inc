
 	EngineControllers (
		Throttle ( 0 1 0.125 0 0.
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
		Brake_Engine ( 0 1 0.01 0.25
			NumNotches ( 4
				Notch( 0.0 0 TrainBrakesControllerFullQuickReleaseStart ) 
				Notch( 0.25 0 TrainBrakesControllerRunningStart ) 
				Notch( 0.75 0 TrainBrakesControllerHoldStart ) 
				Notch( 1.0 0 TrainBrakesControllerFullServiceStart )  
			)
		)
		Brake_Train ( 0 1 0.025 0.6
			NumNotches ( 6
				Notch ( 0    0 TrainBrakesControllerFullQuickReleaseStart )
				Notch ( 0.1  0 TrainBrakesControllerReleaseStart )
				Notch ( 0.2  0 TrainBrakesControllerHoldLappedStart )
				Notch ( 0.3  1 TrainBrakesControllerGraduatedSelfLapLimitedHoldingStart )
				Notch ( 0.9  0 TrainBrakesControllerContinuousServiceStart )
				Notch ( 0.95 0 TrainBrakesControllerEmergencyStart )
			)
		)
		Brake_Hand ( 0 1 0.0125 0 
				NumNotches( 0 ) 
		)
		DirControl ( -1 0 1 1 )
		BellToggle( 0 1 0 )
		Sanding ( 0 1 0 )
		Horn ( 0 1 0 )
		EmergencyStopToggle( 0 1 0 )
		Vigilance ( 0 1 0 )
		Headlights ( 0 0.25 1 0 )
		BailOffButton( 0 1 0 )

		EmergencyStopResetToggle( 0 1 0 )
		Wipers ( 0 1 0 )
		AWS ( 0 1 0 )
		Overspeed ( 0 1 0 )
		ShutsDownEngine ( 0 1 O )
	)
	