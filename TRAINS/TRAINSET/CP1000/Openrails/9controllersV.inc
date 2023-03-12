
EngineControllers (
	Throttle ( 0 1 0.0125 0
 		NumNotches ( 3
 			Notch( 0.0  0 Dummy )
 			Notch( 0.1  1 Dummy )
			Notch( 1.0  0 Dummy )
		)
	)
	Brake_Train ( 0 1 0.2 0.2
		NumNotches( 3
			Notch(0    0 TrainBrakesControllerReleaseStart )
			Notch(0.2  0 TrainBrakesControllerRunningStart )
			Notch(0.4  1 TrainBrakesControllerVacuumApplyContinuousServiceStart )
		)
	)
	Brake_Engine ( 0 1 0.1 0.0
		NumNotches( 1
			Notch( 0 1 EngineBrakesControllerVacuumContinuousServiceStart )
		)
	)
	Brake_Brakeman ( 0 1 0.1 0.0
		NumNotches ( 1
			Notch( 0 1 BrakemanBrakesControllerManualBrakingStart )
		)
	)
	Brake_Hand ( 0 1 0.0125 0 
		NumNotches ( 0 ) 
	)
	SmallEjectorOrCompressor ( 0 1 0.1 0.5 )
	DirControl ( -1 0 1 1 )
	Sanding ( 0 1 0 )
	Horn ( 0 1 0 )
	Wipers ( 0 1 0 )
	Headlights ( 0 0.25 1 0 )
	BailOffButton( 0 1 0 )
)