
Comment (****************** General Information *******************)
	Size  ( 3.0m 4.30m 20.13m )
	InertiaTensor ( Box (3.0m 4.13m 20.38m) )
	Mass ( 87.3t )
	ORTSPantographs(
		Pantograph( 1				Delay ( 4s ) )
		Pantograph( 2				Delay ( 4s ) )
	)
Comment( ****************** Coupler Information ******************* )
	Coupling (
		Type ( Chain )
		Spring (
			Stiffness ( 1e6N/m 5e6N/m )
			Damping ( 1e6N/m/s 1e6N/m/s )
			Break ( 1200kN 1200kN )
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