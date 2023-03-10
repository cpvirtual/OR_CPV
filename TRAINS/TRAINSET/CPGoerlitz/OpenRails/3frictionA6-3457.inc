
	Mass ( 26t )
Comment ( *** Curve Resistance & SuperElevation ***)
	CentreOfGravity ( 0.0m 1.2m 0.0m )
	ORTSTrackGauge ( 1.0m 668.0mm )
	ORTSRigidWheelbase ( 7.0m 586.0mm )
	ORTSUnbalancedSuperelevation ( 180mm )

Comment ( ********** Derailment Coefficient ********all data is speculative**)
	ORTSLengthBogieCentre ( 7.586m )
	ORTSLengthCarBody ( 12.910m )
	ORTSLengthCouplerFace ( 14.086m )
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
	Comment (Friction Calculator - Passenger Carriage - Friction Bearings - 26;3,17;3,953;12,91;2 )
	ORTSDavis_A ( 313 )
	ORTSDavis_B ( 9.2 )
	ORTSDavis_C ( 0.66 )
	DerailRailForce ( 160kN )

	ORTSBearingType ( Friction )
	ORTSAntislip ( 0 )
	DerailRailHeight ( 4cm )
	DerailBufferForce ( 400kN )
	