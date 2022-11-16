
EngineControllers (
	Throttle ( 0 1 0.01 0
		NumNotches ( 3
			Notch ( 0.0 0 Dummy )
			Notch ( 0.1 1 Dummy )
			Notch ( 1.0 0 Dummy )
		)
	)
	Brake_Engine ( 0 1 0.0125 0
		NumNotches ( 1
			Notch( 0  1 Dummy )
		)
	)
	Brake_Train ( 0 1 0.02 0.4
		NumNotches ( 3
			Notch ( 0    0 TrainBrakesControllerReleaseStart )
			Notch ( 0.4  0 TrainBrakesControllerNeutralhandleOffStart )
			Notch ( 0.5  1 TrainBrakesControllerApplyStart )
		)
	)
	DirControl ( -1 0 1 1 )
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