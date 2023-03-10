
Comment (****************** General Information *******************)
	Size  ( 3.17m 3.87m 17.4m )
	Mass ( 78t )
	ORTSPantographs(
		Pantograph( 1				Delay( 4 ) )
		Pantograph( 2				Delay( 4 ) )
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