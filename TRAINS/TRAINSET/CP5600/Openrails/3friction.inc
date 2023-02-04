
Comment ( *** Curve Resistance & SuperElevation ***)
	CentreOfGravity ( 0.0m 1.2m 0.0m )
	ORTSTrackGauge ( 1m 668mm )
	ORTSRigidWheelBase ( 2m 200mm )
	ORTSUnbalancedSuperelevation ( 180mm )

Comment ( ********** Derailment Coefficient **********)
	ORTSLengthBogieCentre ( 10.5m )
	ORTSLengthCarBody ( 20.14m )
	ORTSLengthCouplerFace ( 20.44m )
	ORTSNumberAxles ( 0 )
	ORTSNumberBogies ( 2 )

Comment( *********************** Friction / Adhesion ************************* )
	ORTSAdhesion (
		ORTSCurtius_Kniffler ( 7.5 44 0.17 0.7 )
		ORTSSlipWarningThreshold ( 70 )
		Wheelset (
			Axle (
				ORTSInertia ( 3917 ) comment ( 87,3*1016,0469088*0,20*0,4699^2 )
				ORTSRadius ( 0.625m )
			)
		)
	)
	ORTSBearingType ( Low )
 	Comment (Friction Calculator - Electric Loco - Modern Locomotives - 87,3;3;4,3;20,44;4 )
	ORTSDavis_A ( 638.21 )
	ORTSDavis_B ( 30.56 )
	ORTSDavis_C ( 4.47 )

	ORTSWagonFrontalArea ( 11m^2 )
	ORTSWheelFlangeLength ( 19.1516mm )
	ORTSMaximumWheelFlangeAngle ( 1.308996rad )

	ORTSDavisDragConstant ( 0.0024 )
	ORTSStandstillFriction ( 1455.409402 )
	ORTSMergeSpeed ( 0.27805 )
	ORTSAntislip ( 0 )

	DerailRailHeight ( 4cm )
	DerailRailForce ( 436.5kN )
	DerailBufferForce ( 400kN )
	