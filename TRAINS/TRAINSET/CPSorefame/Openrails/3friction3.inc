
	WheelRadius ( 0.425m )

Comment ( *** Curve Resistance & SuperElevation ***)
	CentreOfGravity ( 0.0m 1.2m 0.0m )
	ORTSTrackGauge ( 1668mm )
	ORTSRigidWheelbase ( 2700mm )
	ORTSUnbalancedSuperelevation ( 180mm )

Comment( *** Friction / Adhesion *** )
	ORTSAdhesion (
		ORTSCurtius_Kniffler ( 7.5 44 0.161 0.7 )
		ORTSSlipWarningThreshold ( 70 )
		Wheelset (
			Axle (
				AnimatedParts ( "WHEELS11" )
				ORTSRadius ( 0.425m )
				ORTSInertia ( 448 ) comment ( 40/4*1016,0469088*0,20*0,4699^2  )
          			NumberWheelsetAxles ( 2 )
			)
			Axle (
				AnimatedParts ( "WHEELS12" )
				ORTSRadius ( 0.425m )
				ORTSInertia ( 448 )
          			NumberWheelsetAxles ( 2 )
			)
			Axle (
				AnimatedParts ( "WHEELS21" )
				ORTSRadius ( 0.425m )
				ORTSInertia ( 448 )
          			NumberWheelsetAxles ( 2 )
			)
			Axle (
				AnimatedParts ( "WHEELS22" )
				ORTSRadius ( 0.425m )
				ORTSInertia ( 448 )
          			NumberWheelsetAxles ( 2 )
			)
		)
	)

	ORTSBearingType ( Roller )
	ORTSWagonFrontalArea ( 109ft^2 ) Comment (* Estimate based on dimensions *)
	ORTSDavisDragConstant ( 0.0004 )
	Antislip ( 1 ) Comment (* Anti skid braking not supported in OR *)
	DerailRailHeight ( 4cm )
	DerailBufferForce ( 400kN )
