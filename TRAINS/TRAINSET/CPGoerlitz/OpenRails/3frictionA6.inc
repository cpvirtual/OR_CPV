
	Mass ( 26t )
Comment ( *** Curve Resistance & SuperElevation ***)
	CentreOfGravity ( 0.0m 1.2m 0.0m )
	ORTSTrackGauge ( 1.0m 668.0mm )
	ORTSRigidWheelbase ( 8.0m 236.0mm )
	ORTSUnbalancedSuperelevation ( 180mm )

Comment ( ********** Derailment Coefficient ********all data is speculative**)
	ORTSLengthBogieCentre ( 8.236m )
	ORTSLengthCarBody ( 13.56m )
	ORTSLengthCouplerFace ( 14.736m )
	ORTSNumberAxles ( 2 )
	ORTSNumberBogies ( 0 )

Comment( *** Friction / Adhesion *** )
	ORTSAdhesion (
		ORTSCurtius_Kniffler ( 7.5 44 0.161 0.7 )
		ORTSSlipWarningThreshold ( 70 )
		Wheelset (
			Axle (
				ORTSInertia ( 3633 ) comment ( valor por defeito. calcular mais tarde)
				ORTSRadius ( 0.520m )
			)
		)
	)
	Comment (Friction Calculator - Passenger Carriage - Friction Bearings - 26;3,17;3,953;13,56;2 )
	ORTSDavis_A ( 313 )
	ORTSDavis_B ( 9.2 )
	ORTSDavis_C ( 0.70 )
	DerailRailForce ( 160kN )

	ORTSBearingType ( Friction )
	ORTSAntislip ( 0 )
	DerailRailHeight ( 4cm )
	DerailBufferForce ( 400kN )
	