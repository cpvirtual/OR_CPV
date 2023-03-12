
Comment ( *** General *** )
	Type ( Engine )
	Size  ( 3.06m 4.21m 10.44m )
	WheelRadius ( 0.425m )
	NumWheels ( 5 )

Comment( ****************** Coupler Information ******************* )
	Coupling (
		Type ( Bar )
		Spring (
			Stiffness ( 1e1N/m 1e6N/m )
			Damping ( 1e7N/m/s 1e7N/m/s )
			Break ( 5.1e7N 5.1e6N )
			r0 ( 0m 0.04m )
		)
		CouplingHasRigidConnection ()
		Velocity (0.1m/s)
		CouplingUniqueType (CP200)
	)

        Coupling (
		Type ( Chain )
		Spring (
			Stiffness ( 1e6N/m 2e6N/m )
			Damping ( 1e6N/m/s 1e6N/m/s )
			Break ( 3.2e6N 3.2e6N )
			r0 ( 20cm 40cm )
		)
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

Comment ( *** Outros *** )
	Sound (	CP261eng.sms )
