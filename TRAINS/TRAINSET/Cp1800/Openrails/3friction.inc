
	Mass ( 110.3t )
Comment (*** Curve Resistance & SuperElevation ***)
	CentreOfGravity ( 0.0m 1.6m 0.0m )
	ORTSTrackGauge ( 1.0m 668.0mm )
	ORTSRigidWheelbase ( 4.0m 114.0mm )
	ORTSUnbalancedSuperelevation ( 180mm )

Comment ( ********** Derailment Coefficient **********)
	ORTSLengthBogieCentre ( 10.494m )
	ORTSLengthCarBody ( 17.44m )
	ORTSLengthCouplerFace ( 18.68m )
	ORTSNumberAxles ( 0 )
	ORTSNumberBogies ( 2 )

Comment( *********************** Friction / Adhesion ************************* )
	ORTSAdhesion (
		ORTSCurtius_Kniffler ( 6.18 44 0.161 0.7 )
		ORTSSlipWarningThreshold ( 70 )
		Wheelset (
			Axle (
				ORTSInertia ( 6186 ) comment (* 110,3*1016,0469088*0,25*0,4699^2 *)
				ORTSRadius ( 0.508m )
			)
		)
	)
	ORTSBearingType ( Roller )
 	Comment (Friction Calculator - Diesel or Electric Loco - Modern Locomotives - 110,3;3,26;4,265;10,494;6 )
	ORTSDavis_A ( 878.59 )
	ORTSDavis_B ( 38.61 )
	ORTSDavis_C ( 4.17 )

	ORTSWagonFrontalArea ( 10.9m^2 )
	ORTSWheelFlangeLength ( 19.1516mm )
	ORTSMaximumWheelFlangeAngle ( 1.308996rad )

	ORTSDavisDragConstant ( 0.0016 )
	ORTSTrailLocomotiveResistanceFactor ( 0.323 )
	ORTSMergeSpeed ( 0.270329 )
	ORTSAntislip ( 0 )

	DerailRailHeight ( 4cm )
	DerailRailForce ( 551.5kN )
	DerailBufferForce ( 400kN )
	