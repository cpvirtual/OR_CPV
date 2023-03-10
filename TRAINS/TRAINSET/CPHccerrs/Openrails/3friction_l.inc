
	Mass ( 12.5t ) Comment (* tara 11t *)

Comment ( *** Curve Resistance & SuperElevation ***)
	CentreOfGravity ( 0.0m 1.4m 0.0m )
	ORTSTrackGauge ( 1.0m 668.0mm )
	ORTSRigidWheelbase ( 6.0m 0.0mm )
	ORTSUnbalancedSuperelevation ( 180mm )

Comment ( ********** Derailment Coefficient **********)
	ORTSLengthBogieCentre ( 6.0m )
	ORTSLengthCarBody ( 8.5m )
	ORTSLengthCouplerFace ( 9.8m )
	ORTSNumberAxles ( 2 )
	ORTSNumberBogies ( 0 )
	ORTSWheelFlangeLength ( 19.151mm )
	ORTSMaximumWheelFlangeAngle ( 62deg )

Comment( *** Friction / Adhesion *** )
	ORTSAdhesion (
		ORTSCurtius_Kniffler ( 7.5 44 0.161 0.7 )
		ORTSSlipWarningThreshold ( 70 )
		Wheelset (
			Axle (
				ORTSInertia ( 3633 ) comment ( valor por defeito. calcular mais tarde)
				ORTSRadius ( 0.485m )
			)
		)
	)
 	Comment (Friction Calculator - Good Wagon - Two Axle Wagons Modern Vans - 11;12,5;2,8;3,689;9,5;2 )
	ORTSDavis_A ( 224 )
	ORTSDavis_B ( 6.5 )
	Comment (Friction Calculator - Good Wagon - Bogie Wagons Open Auto Racks - 11;12,5;2,8;3,689;9,5;2 )
	ORTSDavis_C ( 3.05 )
	DerailRailForce ( 62.5kN )
	ORTSBearingType ( Roller )
	ORTSAntislip ( 0 )
	DerailRailHeight ( 4cm )
	DerailBufferForce ( 400kN )
	