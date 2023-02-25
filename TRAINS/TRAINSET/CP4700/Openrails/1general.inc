
	Type ( Engine )
	FreightAnim ( 4700_anim.s 1 1 )
	ORTSFreightAnims (
		MSTSFreightAnimEnabled (1)
		WagonEmptyWeight (87.3t)
		FreightAnimStatic (
			SubType(Default)
			Shape(4700cabe.s)
			Offset(0, 0, 0)
			FreightWeight(0.001t)
			Flip()
			Visibility ( "Cab3D" )
		)
	)
Comment (****************** General Information *******************)
	Size  ( 3m 4m 19.42m )
	ORTSPantographs(
		Pantograph( 1				Delay ( 4 ) )
		Pantograph( 2				Delay ( 4 ) )
	)

Comment( ****************** Coupler Information ******************* )
	Coupling (
		Type ( Chain )
		Spring (
			Stiffness ( 1e6N/m 5e6N/m )
			Damping ( 1e6N/m/s 1e6N/m/s )
			Break ( 600kN 600kN )
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
			Break ( 600kN 600kN )
			r0 ( 6cm 9cm )
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
	