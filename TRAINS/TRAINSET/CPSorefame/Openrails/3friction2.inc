
	WheelRadius ( 0.460m )

Comment ( *** Curve Resistance & SuperElevation ***)
	CentreOfGravity ( 0.0m 1.2m 0.0m )
	ORTSTrackGauge ( 1.0m 668.0mm )
	ORTSRigidWheelbase ( 2.0m 570.0mm )
	ORTSUnbalancedSuperelevation ( 180mm )

Comment( *** Friction / Adhesion *** )
	ORTSAdhesion (
		ORTSCurtius_Kniffler ( 7.5 44 0.161 0.7 )
		ORTSSlipWarningThreshold ( 70 )
		Wheelset (
			Axle (
				ORTSInertia ( 3633 ) comment ( valor por defeito. calcular mais tarde)
				ORTSRadius ( 0.460m )
			)
		)
	)

	ORTSBearingType ( Roller )
	ORTSWagonFrontalArea ( 109ft^2 ) Comment (* Estimate based on dimensions *)
	ORTSDavisDragConstant ( 0.0004 )
	Antislip ( 1 ) Comment (* Anti skid braking not supported in OR *)
	DerailRailHeight ( 4cm )
	DerailBufferForce ( 400kN )
	