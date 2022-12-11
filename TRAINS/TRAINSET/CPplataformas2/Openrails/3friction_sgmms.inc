
	Mass ( 17.5t ) Comment (* tara 17.5t *)

Comment ( *** Curve Resistance & SuperElevation ***)
	CentreOfGravity ( 0.0m 1.0m 0.0m )
	ORTSTrackGauge ( 1.0m 668.0mm )
	ORTSRigidWheelbase ( 2.0m 0.0mm )
	ORTSUnbalancedSuperelevation ( 180mm )

Comment( *** Friction / Adhesion *** )
	ORTSAdhesion ( ORTSSlipWarningThreshold ( 70 ) )
	ORTSAdhesion (	Wheelset (
			Axle (
				ORTSInertia ( 3633 ) comment ( valor por defeito. calcular mais tarde)
				ORTSRadius ( 0.46m )
			)
		)
	)
 	Comment (Friction Calculator - Good Wagon - Two Axle Modern Open Wagons - 17,5;80;2,76;1,24;14,04;4 )
	ORTSDavis_A ( 439 )
	ORTSDavis_B ( 5.3 )
	ORTSDavis_C ( 0.41 )
	DerailRailForce ( 87.5kN )
	ORTSBearingType ( Roller )
	ORTSAntislip ( 0 )
	DerailRailHeight ( 4cm )
	DerailBufferForce ( 400kN )
	