
	Size ( 3.2m 4.2m 19.37m )

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
	Buffers (
		Spring (
			Stiffness ( 1e6N/m 5e6N/m )
			Damping ( 1.1e6N/m/s 1.1e6N/m/s )
			r0 ( 0m 1e9 )
		)
		Centre ( 0.5m )
		Radius ( 1m )
		Angle ( 0.5deg )
	)

	ORTSFreightAnims (
		WagonEmptyWeight( 114.5t )
		EmptyORTSDavis_A ( 1254 )
		EmptyORTSDavis_B ( 34.6 )
		EmptyORTSDavis_C ( 5.47 )
		EmptyCentreOfGravity_Y ( 1.4 )

		FreightAnimContinuous (
			FreightWeightWhenFull( 6.5t )
			ORTSDavis_A ( 1298 )
			ORTSDavis_B ( 36.6 )
			ORTSDavis_C ( 5.47 )
			FullCentreOfGravity_Y ( 1.7 )
		)
	)     