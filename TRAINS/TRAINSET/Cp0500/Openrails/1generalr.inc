
	Type ( Carriage )
	InertiaTensor ( Box ( 3.594m 4.431m 22m ) )
	Size  ( 3.17m 3.87m 24.89m )
	Mass ( 43.75t ) #(* tara em OM 41t *)

Comment( ****************** Coupler Information ******************* )
	Coupling (
		Type ( Chain )
		Spring (
			Stiffness   ( 1e6N/m 	2e6N/m )
			Damping     ( 1e6N/m/s 	1e6N/m/s)
			Break 	( 600kN 	600kN )
			r0 		( 6cm 	9cm )
		)
		CouplingHasRigidConnection  ( )
		Velocity                    ( 0.12m/s )
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