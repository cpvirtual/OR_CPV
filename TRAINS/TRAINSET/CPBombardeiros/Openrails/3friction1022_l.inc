
Comment ( *** Para vagões Glm 26 94 102 2 601/968 Alemães "Bombardeiros" *** )
	Mass ( 30t ) Comment (* tara 10,5t *)
Comment ( *** Curve Resistance & SuperElevation ***)
	CentreOfGravity ( 0.0m 1.6m 0.0m )
	ORTSTrackGauge ( 1.0m 668.0mm )
	ORTSRigidWheelbase ( 6.0m 0.0mm )
	ORTSUnbalancedSuperelevation ( 180mm )

Comment( *** Friction / Adhesion *** )
	ORTSAdhesion ( ORTSSlipWarningThreshold ( 70 ) )
	ORTSAdhesion (	Wheelset (
			Axle (
				ORTSInertia ( 3633 ) comment ( valor por defeito. calcular mais tarde)
				ORTSRadius ( 0.485m )
			)
		)
	)
 	Comment (Friction Calculator - Good Wagon - Two Axle Wagons Modern Vans - 10,5;30;2,8;4,09;7,8;2 )
	ORTSDavis_A ( 287 )
	ORTSDavis_B ( 10.6 )
	ORTSDavis_C ( 0.97 )
	DerailRailForce ( 150kN )
	ORTSBearingType ( Roller )
	ORTSAntislip ( 0 )
	DerailRailHeight ( 4cm )
	DerailBufferForce ( 400kN )
	