
	Size ( 3m 3.9m 25.23m )	
	WheelRadius ( 0.420m )
	NumWheels ( 4 )
	ORTSLengthBogieCentre ( 16.890m )
	ORTSLengthCarBody ( 26.060m )
	ORTSLengthCouplerFace ( 25.480m )
	ORTSNumberAxles ( 4 )
	ORTSNumberBogies ( 2 )

Comment( ****************** Coupler Information ******************* )
	Coupling (
		Type ( Chain )
		Spring (
			Stiffness ( 1e6N/m 5e6N/m )
			Damping ( 1e6N/m/s 1e6N/m/s )
			Break ( 600kN 600kN )
			r0 ( 6cm 9cm )
		)
		CouplingHasRigidConnection ()
		Velocity ( 0.12m/s )
	)
	Buffers (
		Spring (
			Stiffness ( 1e6N/m 5e6N/m )
			Damping ( 1.3e6N/m/s 3.8e6N/m/s )
			r0 ( 0m 1e9 )
		)
		Centre ( 0.5m )
		Radius ( 1m )
		Angle ( 0.5deg )
	)

Comment( *********************** Friction / Adhesion ************************* )
	ORTSAdhesion ( ORTSCurtis_Kniffler ( 7.5 44 0.161 0.7 ) )
	ORTSAdhesion ( ORTSSlipWarningThreshold ( 70 ) )
	ORTSAdhesion (	Wheelset (
			Axle (
				ORTSInertia ( 3633 ) comment ( valor por defeito. calcular mais tarde)
				ORTSRadius ( 0.460m )
			)
		)
	)
	ORTSBearingType ( Roller )
	ORTSAntislip ( 0 )
	DerailRailHeight ( 4cm )
	DerailBufferForce ( 400kN )
