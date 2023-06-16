
Comment ( *** Curve Resistance & SuperElevation ***)
	CentreOfGravity ( 0.0m 1.6m 0.0m )
	ORTSTrackGauge ( 1.0m 668.0mm )
	ORTSRigidWheelbase ( 3.0m 200.0mm )
	ORTSUnbalancedSuperelevation ( 180mm )

Comment ( ********** Derailment Coefficient **********)
	ORTSLengthBogieCentre ( 7.5m )
	ORTSLengthCarBody ( 14.24m )
	ORTSLengthCouplerFace ( 15.38m )
	ORTSNumberAxles ( 0 )
	ORTSNumberBogies ( 2 )
	ORTSWheelFlangeLength ( 19.1516mm )
	ORTSMaximumWheelFlangeAngle ( 1.308996rad )

Comment( *********************** Friction / Adhesion ************************* )
	ORTSAdhesion (
		ORTSCurtius_Kniffler ( 7.5 44 0.161 0.7 )
		ORTSSlipWarningThreshold ( 70 )
		Wheelset (
			Axle (
				ORTSInertia ( 3164 ) comment ( 70,52*1016,0469088*0,20*0,4699^2 )
				ORTSRadius ( 0.650m )
			)
		)
	)
	ORTSBearingType ( Roller )
 	Comment (Friction Calculator - Electric Loco - Modern Locomotives - 70.52;3,03;3,86;14,24;4 )
	ORTSDavis_A ( 573.60 )
	ORTSDavis_B ( 24.68 )
	ORTSDavis_C ( 3.76 )

	ORTSWagonFrontalArea ( 10.9m^2 )
	ORTSDavisDragConstant ( 0.0024 )
	ORTSStandstillFriction ( 1300.365789 )
	ORTSMergeSpeed ( 0.270329 )
	ORTSAntislip ( 0 )

	DerailRailHeight ( 4cm )
	DerailRailForce ( 353kN )
	DerailBufferForce ( 400kN )
