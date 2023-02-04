
	EngineControllers (
		Throttle ( 0 1 0.1 0
			NumNotches ( 11
				Notch ( 0 0 Dummy )
				Notch ( 0.1 0 Dummy )
				Notch ( 0.2 0 Dummy )
				Notch ( 0.3 0 Dummy )
				Notch ( 0.4 0 Dummy )
				Notch ( 0.5 0 Dummy )
				Notch ( 0.6 0 Dummy )
				Notch ( 0.7 0 Dummy )
				Notch ( 0.8 0 Dummy )
				Notch ( 0.9 0 Dummy )
				Notch ( 1.0 0 Dummy )
			)
		)
		Brake_Engine ( 0 1 0.01 0.25
			NumNotches ( 4
				Notch( 0.0 0 EngineBrakesControllerFullQuickReleaseStart ) 
				Notch( 0.25 0 EngineBrakesControllerRunningStart ) 
				Notch( 0.75 0 EngineBrakesControllerHoldStart ) 
				Notch( 1.0 0 EngineBrakesControllerFullServiceStart )  
			)
		)
		Brake_Train ( 0 1 0.025 0.25 
			NumNotches ( 5
				Notch( 0    0 TrainBrakesControllerReleaseStart )
				Notch( 0.25 0 TrainBrakesControllerEPApplyStart ) 
				Notch( 0.50 0 TrainBrakesControllerEPApplyStart ) 
				Notch( 0.75 0 TrainBrakesControllerEPApplyStart ) 
				Notch( 1.0  0 TrainBrakesControllerEmergencyStart ) 
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
	Vigilence ( 0 1 0 )
	Horn ( 0 1 0 )
	AWS ( 0 1 0 )
	Vigilance ( 0 1 0 )
	Overspeed ( 0 1 0 )
	ShutsDownEngine ( 0 1 0 )
	PantographToggle1 ( 0 1 0 )
	PantographToggle2 ( 0 1 1 )
	PantographsToggle_4 ( 1 1 1 )
	Headlights ( 0 0.25 1 0 )
	BellToggle ( 0 1 0 )
	CABToggle ( 0 1 0 )
	BailOffButton ( 0 1 0 )
        )
	Sound ( "5600cab.sms" )
	