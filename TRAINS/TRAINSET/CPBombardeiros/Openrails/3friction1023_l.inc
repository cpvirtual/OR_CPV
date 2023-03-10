
	Mass ( 31,5t ) Comment (* tara 11,5t *)
Comment ( *** Curve Resistance & SuperElevation ***)
	CentreOfGravity ( 0.0m 1.2m 0.0m )
	ORTSTrackGauge ( 1.0m 668.0mm )
	ORTSRigidWheelbase ( 6.0m 0.0mm )
	ORTSUnbalancedSuperelevation ( 180mm )

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
 	Comment (Friction Calculator - Good Wagon - Two Axle Wagons Modern Vans - 11,5;31,5;2,8;4,09;8,5;2 )
	ORTSDavis_A ( 294 )
	ORTSDavis_B ( 11.1 )
	ORTSDavis_C ( 1.05 )
	DerailRailForce ( 157.5kN )
	ORTSBearingType ( Roller )
	ORTSAntislip ( 0 )
	DerailRailHeight ( 4cm )
	DerailBufferForce ( 400kN )
	