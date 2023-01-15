
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
	Brake_Engine ( 0 1 0.1 0
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
	Brake_Brakeman ( 0 1 0.1 0
		NumNotches ( 1
			Notch( 0 1 BrakemanBrakesControllerManualBrakingStart )
		)
	)
	Brake_Hand ( 0 1 0.0125 0 
		NumNotches( 0 ) 
	)
	SmallEjectorOrCompressor ( 0 1 0.1 0.5 )
)