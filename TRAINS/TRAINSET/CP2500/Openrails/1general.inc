
Comment (****************** General Information *******************)
	Size  						( 3.105m 4.450m 15.59m )
	Mass 						( 72t )
	WheelRadius 					( 0.65m )
	InertiaTensor 					( Box ( 3.105m 4.450m 15.620m ) )
	ORTSPantographs(
		Pantograph( 1				Delay( 5 ) )
		Pantograph( 2				Delay( 5 ) )
	)
Comment (****************** Coupler Information *******************)
	Coupling (
		Type ( Chain )
		Spring (
			Stiffness ( 1e6N/m 2e6N/m )
			Damping ( 1e6N/m/s 1e6N/m/s )
			Break ( 600kN 600kN )
			r0 ( 10cm 40cm )
		)
		CouplingHasRigidConnection ()
		Velocity ( 0.1m/s )
	)
	Buffers (
		Spring (
			Stiffness ( 5e6N/m 5e6N/m )
			Damping ( 1e6N/m/s 1e6N/m/s )
			r0 ( 0m 1e9 )
		)
		Centre ( 0.5m )
		Radius ( 1m )
		Angle ( 0.5deg )
	)
