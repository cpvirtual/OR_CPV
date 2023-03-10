
Comment ( *** Curve Resistance & SuperElevation ***)
	CentreOfGravity ( 0.0m 1.2m 0.0m )
	ORTSTrackGauge ( 1.0m 668.0mm )
	ORTSRigidWheelbase ( 2.0m 0mm )
	ORTSUnbalancedSuperelevation ( 180mm )

Comment ( ********** Derailment Coefficient **********)
	ORTSLengthBogieCentre ( 7.5m )
	ORTSLengthCarBody ( 13.05m )
	ORTSLengthCouplerFace ( 13.89m )
	ORTSNumberAxles ( 4 )
	ORTSNumberBogies ( 2 )
	ORTSWheelFlangeLength ( 21.5mm )
	ORTSMaximumWheelFlangeAngle ( 62deg )


Comment( *** Friction / Adhesion *** )
	ORTSAdhesion (
		ORTSCurtius_Kniffler ( 7.5 44 0.161 0.7 )
		ORTSSlipWarningThreshold ( 70 )
		Wheelset (
			Axle (
				ORTSInertia ( 1167 )
				ORTSRadius ( 0.485m )
			)
		)
	)
 	Comment ( ORTS Friction 28;4;8.83575 )
	ORTSDavis_A ( 411.879299 )
	ORTSDavis_B ( 3.428208 )
	ORTSDavis_C ( 1.058434 )
	ORTSStandstillFriction ( 583.497469 )
	ORTSMergeSpeed ( 0.211585 )
	ORTSBearingType ( Roller )
	ORTSAntislip ( 0 )
	DerailRailHeight ( 4cm )
	DerailRailForce ( 125kN )
	DerailBufferForce ( 250kN )
	