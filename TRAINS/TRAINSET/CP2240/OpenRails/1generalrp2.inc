
Comment (****************** General Information *******************)
	Type ( Engine )
	Size ( 3.1m 4m 23.4m )
	InertiaTensor ( Box (3m 3.8m 22m) )
	Mass ( 34t )

Comment( ****************** Coupler Information ******************* )
	Comment ( Rear coupling )
	Coupling (
		Type ( Automatic )
		Spring (
			Stiffness ( 1e7N/m 1e6N/m )
			Damping ( 2e6N/m/s 2e6N/m/s )
			Break ( 600kN 600kN )
			r0 ( 0cm 0cm )
		)
		CouplingHasRigidConnection ()
		Velocity ( 0.12m/s )
		CouplingUniqueType ( "Scharfenberg 10" )
	)
 	Comment ( Front coupling )
	Coupling (
		Type ( Bar )
		Spring (
			Stiffness ( 1e7N/m 1e6N/m )
			Damping ( 1e6N/m/s 1e6N/m/s )
			Break ( 600kN 600kN )
			r0 ( -5cm 0cm )
		)
		Couplinghasrigidconnection ( 1 )
		Velocity ( 0.12m/s )
		CouplingUniqueType ( "Scharfenberg Shaku" )
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

Comment ( *** Curve Resistance & SuperElevation ***)
	CentreOfGravity ( 0.0m 1.6m 0.0m )
	ORTSTrackGauge ( 1m 668mm )
	ORTSRigidWheelbase ( 2m 500mm )
	ORTSUnbalancedSuperelevation ( 180mm )

Comment( *********************** Friction / Adhesion ************************* )
	ORTSAdhesion (
		ORTSCurtis_Kniffler ( 7.5 44 0.161 0.7 )
		ORTSSlipWarningThreshold ( 70 )
		Wheelset (
			Axle (
				ORTSInertia ( 1526 ) comment ( 34*1016,0469088*0,20*0,4699^2 )
				ORTSRadius ( 0.425m )
			)
		)
	)
	ORTSBearingType ( Roller )
 	ORTSDavis_A ( 732.7 )
	ORTSDavis_B ( 22.376 )
	ORTSDavis_C ( 1.466 )

	ORTSWagonFrontalArea ( 92ft^2 ) Comment (* Estimate based on dimensions *)
	ORTSWheelFlangeLength ( 19.1516mm )
	ORTSMaximumWheelFlangeAngle ( 1.308996rad )

	ORTSDavisDragConstant ( 0.0017 )
	ORTSMergeSpeed ( 0.270329 )
	ORTSAntislip ( 0 )

	DerailRailHeight ( 4cm )
	DerailRailForce ( 170kN )
	DerailBufferForce ( 400kN )
	