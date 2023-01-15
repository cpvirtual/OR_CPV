
	Mass ( 32t ) Comment (* tara 12t *)

Comment ( *** Curve Resistance & SuperElevation ***)
	CentreOfGravity ( 0.0m 1.2m 0.0m )
	ORTSTrackGauge ( 1.0m 668.0mm )
	ORTSRigidWheelbase ( 6.0m 0.0mm )
	ORTSUnbalancedSuperelevation ( 180mm )

Comment ( ********** Derailment Coefficient **********)
	ORTSLengthBogieCentre ( 6.0m )
	ORTSLengthCarBody ( 6.8m )
	ORTSLengthCouplerFace ( 7.616m )
	ORTSNumberAxles ( 2 )
	ORTSNumberBogies ( 0 )
	ORTSWheelFlangeLength ( 19.151mm )
	ORTSMaximumWheelFlangeAngle ( 62deg )

Comment( *** Friction / Adhesion *** )
	ORTSAdhesion ( ORTSSlipWarningThreshold ( 70 ) )
	ORTSAdhesion (	Wheelset (
			Axle (
				ORTSInertia ( 3633 ) comment ( valor por defeito. calcular mais tarde)
				ORTSRadius ( 0.5m )
			)
		)
	)
 	Comment (Friction Calculator - Goods Wagon - Two Axle Older Vans - 12;20;2,5;4,012;8,065;2 )
	ORTSDavis_A ( 294 )
	ORTSDavis_B ( 7.1 )
	ORTSDavis_C ( 1.05 )
	DerailRailForce ( 160kN )
	ORTSBearingType ( Roller )
	ORTSAntislip ( 0 )
	DerailRailHeight ( 4cm )
	DerailBufferForce ( 400kN )
	