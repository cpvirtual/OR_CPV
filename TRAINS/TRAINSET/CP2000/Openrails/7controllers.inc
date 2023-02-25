
EngineControllers (
	Throttle ( 0 1 1 0
		NumNotches  ( 7
			Notch ( 0.0	0    )
			Notch ( 0.14	0 )
			Notch ( 0.60   	0 )
			Notch ( 0.84   	0 )
			Notch ( 0.90   	0 )
			Notch ( 0.96   	0 )
			Notch ( 1.0   	0 )
		)
	)
	Brake_Dynamic ( 0 1 0.0125 0 
		NumNotches( 0 )
		)
	Brake_Train ( 0 1 0.025 1
		NumNotches ( 3
			Notch ( 0.0  0 TrainBrakesControllerReleaseStart )
			Notch ( 0.1  1 TrainBrakesControllerContinuousServiceStart )
			Notch ( 1.0  0 TrainBrakesControllerFullServiceStart )
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
	AWS ( 0 0 0 )
	Overspeed ( 0 0 0 )
	ShutsDownEngine ( 0 1 0 )
	PantographToggle1 ( 0 1 0 )
	PantographToggle2 ( 0 1 1 )
	PantographsToggle_4 ( 1 1 1 )
	Headlights ( 0 0.25 1 0 )
	BellToggle ( 0 1 0 )
	CABToggle ( 0 1 0 )
	BailOffButton ( 0 1 0 )
	ORTSOvercharge ( 0 1 0 )
)
        