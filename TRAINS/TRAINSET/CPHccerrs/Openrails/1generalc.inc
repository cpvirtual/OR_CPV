
	Type ( Freight )
	Size ( 2.8m 3.689m 9.5m )

Comment( ****************** Coupler Information ******************* )
	Coupling (
		Type ( Bar )
		Spring (
			Stiffness ( 1e6N/m 5e6N/m )
			Damping ( 1e6N/m/s 1e6N/m/s )
			Break ( 600kN 600kN )
			r0 ( 6cm 9cm )
		)
		CouplingHasRigidConnection ()
		Velocity ( 0.12m/s )
		CouplingUniqueType ( "hccerrs" )
	)
	Coupling (
		Type ( Chain )
		Spring (
			Stiffness ( 5e6N/m 1e6N/m )
			Damping ( 1e6N/m/s 1e6N/m/s )
			Break ( 600kN 600kN )
			r0 ( 9cm 6cm )
		)
		CouplingHasRigidConnection ()
		Velocity ( -0.12m/s )
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
