
	Size ( 3m 3.9m 16.03m )
	WheelRadius ( 0.420m )
	NumWheels ( 4 )
	ORTSLengthBogieCentre ( 9.280m )
	ORTSLengthCarBody ( 16.030m )
	ORTSLengthCouplerFace ( 15.626m )

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

	MaxBrakeForce					( 26kN )
	MaxHandbrakeForce 				( 16kN )
	BrakePipeVolume 					( 0.47ft^3 )
