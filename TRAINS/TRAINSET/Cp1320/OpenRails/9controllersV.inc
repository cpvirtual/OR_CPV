
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
	Brake_Engine ( 0 1 0.4 0.5 
		NumNotches ( 3 
			Notch(0 0 TrainBrakesControllerReleaseStart ) 
			Notch(0.5 0 TrainBrakesControllerRunningStart ) 
			Notch(0.9 0 TrainBrakesControllerApplyStart ) 
		) 
	) 
	Brake_Train ( 0 1 0.01 0.65 
                NumNotches( 3
                    Notch(0     1 TrainBrakesControllerReleaseStart )
                    Notch(0.4   1 TrainBrakesControllerRunningStart )
                    Notch(0.5   1 TrainBrakesControllerApplyStart )
                )
	)
	Brake_Hand ( 0 1 0.0125 0 
		NumNotches( 0 ) 
	)
	SmallEjectorOrCompressor ( 0 1 0.1 0.5 )
	