
	InertiaTensor ( Box (3m 4m 26m) )
	ORTSNumberAxles ( 4 )
	ORTSNumberBogies ( 2 )

Comment( ****************** Open Rails Advanced Coupler ******************* )
	Coupling (
               Comment (
		FrontCouplerAnim ( f_coupler_coupled.s 0.0 1.9 0.0 )
		FrontCouplerOpenAnim ( f_coupler_uncoupled.s 0.0 1.9 0.0 )
		RearCouplerAnim ( r_coupler_coupled.s 0.0 1.9 0.0 )
		RearCouplerOpenAnim ( r_coupler_uncoupled.s 0.0 1.9 0.0 )
               )

		Spring (
			ORTSTensionStiffness ( 222kN 2273kN )
			ORTSTensionR0 ( 0cm 1.25cm )
			ORTSTensionSlack ( 4.5cm 1cm )
			ORTSCompressionStiffness ( 222kN 2273kN )
			ORTSCompressionR0 ( 0cm 1.25cm )
			ORTSCompressionSlack ( 4.5cm 1cm )
			ORTSBreak ( 1600kN 1700kN )
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
