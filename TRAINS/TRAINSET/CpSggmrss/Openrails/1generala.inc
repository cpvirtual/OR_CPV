
	Size ( 2.930m 1.155m 17.02m)
	InertiaTensor ( Box (3.243m 4.228m 13.2m) )

Comment( ****************** Coupler Information ******************* )
	Coupling (
		Type ( Bar )
		Spring (
			Stiffness ( 1e6N/m 5e6N/m )
			Damping ( 1e6N/m/s 1e6N/m/s )
			Break ( 600kN 600kN )
			r0 ( 6cm 9cm )
		)
		CouplingHasRigidConnection (1)
		CouplingUniqueType ( "Sggmrss" )
		Velocity ( 0.12m/s )
	)
	Coupling (
		FrontCouplerAnim ( f_coupler_coupled.s 0.0 0.0 0.0 )
		FrontCouplerOpenAnim ( f_coupler_uncoupled.s 0.0 0.0 0.0 )
		FrontAirHoseAnim ( f_cpbrakehose_disconnected.s 0.0 0.0 0.0 )
		FrontAirHoseDisconnectedAnim ( f_cpbrakehose_disconnected.s 0.0 0.0 0.0 )
		Spring (
			ORTSTensionStiffness ( 50000lbf 511000lbf )
			ORTSTensionR0 ( 0in 1.0in ) Comment ( Distances doubled )
			ORTSTensionSlack ( 2.75in 0.4in )

			ORTSCompressionStiffness ( 50000lbf 511000lbf )
			ORTSCompressionR0 ( 0in 1.0in )
			ORTSCompressionSlack ( 2.75in 0.4in )

			ORTSBreak ( 350000lbf 511000lbf )
			)
		CouplingHasRigidConnection ( 0 )
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
