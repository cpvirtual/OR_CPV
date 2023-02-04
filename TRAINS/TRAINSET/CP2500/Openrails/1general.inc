
Comment (****************** General Information *******************)
	Size  						( 3.105m 4.450m 15.59m )
	Mass 						( 72t )
	WheelRadius 					( 0.65m )
	InertiaTensor 					( Box ( 3.105m 4.450m 15.620m ) )
	NumWheels 					( 4 )
	ORTSPantographs(
		Pantograph( 1				Delay( 8 ) )
		Pantograph( 2				Delay( 8 ) )
	)
	
Comment (****************** Coupler Information *******************)
	Coupling (
		Type ( Chain )
		Spring (
			Stiffness ( 1.1e6N/m 4.8e6N/m )
			Damping ( 1.2e6N/m/s 3.4e6N/m/s )
			Break ( 3.4e7N 3.4e7N )
			r0 ( 20cm 30cm )
		)
		CouplingHasRigidConnection ()
		Velocity ( 0.1m/s )
	)
	Buffers (
		Spring (
			Stiffness ( 1e7N/m 0 )
			Damping ( 1e6N/m/s 0 )
			r0 ( 0m 1e9 )
		)
		Centre ( 0.5 )
		Radius ( 1 )
		Angle ( 0.5deg )
	)
	