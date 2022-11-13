
	InertiaTensor ( Box ( 3m 4.176m 24.5m ) )
	Size ( 2.970m 4.392m 25.3m )
	Mass ( 39.6t ) #(* tara 38,4t *)


Comment( ****************** Coupler Information ******************* )
	Coupling (
		Type ( Chain )
		Spring (
			Stiffness ( 1e6N/m 2e6N/m )
			Damping ( 1e6N/m/s 1e6N/m/s)
			Break ( 1e7N 1e7N )
			r0 ( 10cm 40cm )
		)
		CouplingHasRigidConnection ( 1 )
		Velocity ( 0.1m/s )
	)
	Coupling (
		Type ( Bar )
		Spring (
			Stiffness ( 1e6N/m 2e6N/m )
			Damping ( 1e6N/m/s 1e6N/m/s)
			Break ( 1e7N 1e7N )
			r0 ( 10cm 40cm )
		)
		CouplingUniqueType ( "0450" )
		CouplingHasRigidConnection ( 1 )
		Velocity ( 0.1m/s )
	)
	Buffers (
		Spring (
			Stiffness ( 1e7N/m 0 )
			Damping ( 1e6N/m/s 0 )
			r0 ( 0m 1e9 )
		)
		Centre ( 0.5m )
		Radius ( 1m )
		Angle ( 0.5deg )
	)