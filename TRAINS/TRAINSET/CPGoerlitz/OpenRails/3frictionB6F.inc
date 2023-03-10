
	Mass ( 25t )
Comment ( *** Curve Resistance & SuperElevation ***)
	CentreOfGravity ( 0.0m 1.2m 0.0m )
	ORTSTrackGauge ( 1.0m 668.0mm )
	ORTSRigidWheelbase ( 8.0m 048.0mm )
	ORTSUnbalancedSuperelevation ( 180mm )

Comment ( ********** Derailment Coefficient ********all data is speculative**)
	ORTSLengthBogieCentre ( 8.048m )
	ORTSLengthCarBody ( 13.310m )
	ORTSLengthCouplerFace ( 14.548m )
	ORTSNumberAxles ( 2 )
	ORTSNumberBogies ( 0 )

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
	Comment (Friction Calculator - Passenger Carriage - Friction Bearings - 25;3,17;4,257;13,31;2 )
	ORTSDavis_A ( 307 )
	ORTSDavis_B ( 8.8 )
	ORTSDavis_C ( 0.71 )
	DerailRailForce ( 160kN )

	ORTSBearingType ( Friction )
	ORTSAntislip ( 0 )
	DerailRailHeight ( 4cm )
	DerailBufferForce ( 400kN )
	