
	Mass ( 87.3t )
Comment ( *** Curve Resistance & SuperElevation ***)
	CentreOfGravity ( 0.0m 1.2m 0.0m )
	ORTSTrackGauge ( 1.0m 668.0mm )
	ORTSRigidWheelbase ( 2.0m 900.0mm )
	ORTSUnbalancedSuperelevation ( 180mm )

Comment ( ********** Derailment Coefficient **********)
	ORTSLengthBogieCentre ( 10.5m )
	ORTSLengthCarBody ( 20.14m )
	ORTSLengthCouplerFace ( 20.44m )
	ORTSNumberAxles ( 0 )
	ORTSNumberBogies ( 2 )

Comment( *********************** Friction / Adhesion ************************* )
	ORTSAdhesion (
		ORTSCurtius_Kniffler ( 7.5 44 0.315 0.7 ) 
		ORTSSlipWarningThreshold ( 80 )
		Wheelset (
			Axle (
				ORTSInertia ( 3917 ) comment ( 87,3*1016,0469088*0,20*0,4699^2 )
				ORTSRadius ( 0.625m )
			)
		)
	)
	ORTSBearingType ( Low )
 	Comment (Friction Calculator - locomotice low resistence - Modern Locomotives - 87,3;3;4,3;20,44;4 )
 	ORTSDavis_A ( 638 )
	ORTSDavis_B ( 30.6 )
	ORTSDavis_C ( 1.18 )

	ORTSWagonFrontalArea ( 11m^2 )
	ORTSWheelFlangeLength ( 19.1516mm )
	ORTSMaximumWheelFlangeAngle ( 1.308996rad )

	ORTSDavisDragConstant ( 0.0017 )
	ORTSStandstillFriction ( 1455.409402 )
	ORTSMergeSpeed ( 0.263 )
	ORTSAntislip ( 1 )

	DerailRailHeight ( 4cm )
	DerailRailForce ( 322kN )
	DerailBufferForce ( 400kN )
	