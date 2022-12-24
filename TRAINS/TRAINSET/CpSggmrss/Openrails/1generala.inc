
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
		CouplingHasRigidConnection ( 1 )
		CouplingUniqueType ( "Sggmrss" )
		Velocity ( 0.12m/s )
	)
	Coupling (
		FrontCouplerAnim ( f_engate2.s 0 1.085 -0.618 )
		FrontCouplerOpenAnim ( f_engate1.s 0 1.085 -0.618 )
		FrontAirHoseAnim ( f_mangueira2.s 0 1.085 -0.618 )
		FrontAirHoseDisconnectedAnim ( f_mangueira2.s 0 1.085 -0.618 )
		Spring (
			ORTSTensionStiffness ( 200kN 1200kN )
			ORTSTensionR0 ( 0mm 25mm ) Comment ( Distances doubled )
			ORTSTensionSlack ( 3mm 10mm )

			ORTSCompressionStiffness ( 1200kN 2400kN )
			ORTSCompressionR0 ( 0mm 25mm )
			ORTSCompressionSlack ( 60mm 15mm )

			ORTSBreak ( 700kN 1200kN )
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
