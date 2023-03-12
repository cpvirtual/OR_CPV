
	Type ( Engine )
	InertiaTensor ( Box ( 3.025m 3.526m 13.485m ) )
	Size ( 3.025m 3.526m 13.485m )  
	PassengerCapacity ( 60 )

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
		Velocity ( -0.12m/s )
	)
	Coupling (
		Type ( Bar )
		Spring (
			Stiffness ( 1e7N/m 1e7N/m )
			Damping ( 0.5e7N/m/s 0.5e7N/m/s )
			Break ( 9e9N 9e9N )
			r0 ( 10cm 10cm )
		)
		CouplingHasRigidConnection ( 1 )
		Velocity ( 0.2m/s )
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
