
	Mass ( 40t ) Comment (* tara 13,5t *)

Comment ( *** Curve Resistance & SuperElevation ***)
	CentreOfGravity ( 0.0m 1.6m 0.0m )
	ORTSTrackGauge ( 1.0m 668.0mm )
	ORTSRigidWheelbase ( 5.0m 700.0mm )
	ORTSUnbalancedSuperelevation ( 180mm )

Comment ( ********** Derailment Coefficient **********)
	ORTSLengthBogieCentre ( 5.7m )
	ORTSLengthCarBody ( 9.34m )
	ORTSLengthCouplerFace ( 10.58m )
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
 	Comment (Friction Calculator - Good Wagon - Two Axle Wagons Modern Vans - 13,5;40;2,73;4,03;9,34;2 )
	ORTSDavis_A ( 331 )
	ORTSDavis_B ( 14.1 )
	ORTSDavis_C ( 1.14 )
	DerailRailForce ( 200kN )
	ORTSBearingType ( Roller )
	ORTSAntislip ( 0 )
	DerailRailHeight ( 4cm )
	DerailBufferForce ( 400kN )
	