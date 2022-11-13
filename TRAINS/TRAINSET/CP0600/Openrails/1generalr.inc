
	InertiaTensor ( Box ( 3.594m 4.431m 22m ) )
	Size  ( 3.17m 3.87m 24.89m )
	Mass ( 43.75t ) #(* tara em OM 41t *)

Comment( ****************** Coupler Information ******************* )
	Coupling (
		Type ( Bar )
		Spring (
			Stiffness ( 1e7N/m 1e7N/m )
			Damping ( 0.2e7N/m/s 0.2e7N/m/s )
			Break ( 1e7N 1e7N )
			r0 ( 10cm 1e9 )
		)
		CouplingHasRigidConnection ()
		Velocity ( 0.1m/s )
		CouplingUniqueType ( "600" )
		)
	Buffers (
		Spring (
			Stiffness ( 1e6N/m 5e6N/m )
			Damping ( 1e6N/m/s 1e6N/m/s )
			r0 ( 0m 1e9 )
		)
		Centre ( 0.5 )
		Radius ( 1 )
		Angle ( 0.5deg )
	)