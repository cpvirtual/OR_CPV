
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
		Brake_Train ( 0 1.0 0.01 0.2
			NumNotches ( 9
				Notch ( 0       0 TrainBrakesControllerFullQuickReleaseStart ) Comment ( REL - Release = Should overcharge ATP to 5.40 bar )
				Notch ( 0.01 0 TrainBrakesControllerReleaseStart ) Comment ( RUN - Running = 5.00 bar )
				Notch ( 0.02 0 TrainBrakesControllerEPApplyStart ) Comment ( 1 INIL - Initial = 4.60 bar )
				Notch ( 0.16 0 TrainBrakesControllerEPApplyStart ) Comment ( 2 = 4.35 bar )
				Notch ( 0.40 0 TrainBrakesControllerEPApplyStart ) Comment ( 3 = 4.10 bar )
				Notch ( 0.65 0 TrainBrakesControllerEPApplyStart ) Comment ( 4 = 3.85 bar )
				Notch ( 0.80 0 TrainBrakesControllerEPApplyStart ) Comment ( 5 = 3.60 bar )
				Notch ( 0.99 0 TrainBrakesControllerEPApplyStart ) Comment ( 6 FULL SERV - Full Service = 3.35 bar )
				Notch ( 1.00 0 TrainBrakesControllerEmergencyStart ) Comment ( EMGCY - Emergency )
			)
		)
		Brake_Hand ( 0 1 0.0125 0 
			NumNotches( 0 ) 
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

	