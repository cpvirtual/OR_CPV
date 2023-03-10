
Comment ( *** Curve Resistance & SuperElevation ***)
	CentreOfGravity ( 0.0m 1.668m 0.0m )
	ORTSTrackGauge ( 1.0m 668.0mm )
	ORTSRigidWheelbase ( 2.0m 300.0mm )
	ORTSUnbalancedSuperelevation ( 180mm )

Comment ( ********** Derailment Coefficient **********)
	ORTSLengthBogieCentre ( 17.0m )
	ORTSLengthCarBody ( 24.5m )
	ORTSLengthCouplerFace ( 25.1m )
	ORTSNumberAxles ( 4 )
	ORTSNumberBogies ( 2 )
	ORTSWheelFlangeLength ( 19.151mm )
	ORTSMaximumWheelFlangeAngle ( 62deg )

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
 	Comment (Friction Calculator - Passenger Carriage - Corail 1970+ - 53;2,89;4,25;24,74;4 )
	ORTSDavis_A ( 492.66 )
	ORTSDavis_B ( 14.31 )
	ORTSDavis_C ( 0.67 )

	ORTSWagonFrontalArea ( 109ft^2 ) Comment (* Estimate based on dimensions *)
	ORTSDavisDragConstant ( 0.0004 )
	Antislip ( 1 ) Comment (* Anti skid braking not supported in OR *)
	DerailRailHeight ( 4cm )
	DerailBufferForce ( 400kN )
	DerailRailForce ( 265kN )
	