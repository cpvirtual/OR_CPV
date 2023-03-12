
	Type ( Engine )
	InertiaTensor ( Box ( 3.594m 4.431m 22m ) )
	Size ( 3.394m 4.218m 23.587m )
	IntakePoint ( -0.5m 0.2m FuelDiesel )
	PassengerCapacity ( 74 )

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
