
	Mass ( 59.5t ) Comment (* tara 17.5t *)

Comment ( *** Curve Resistance & SuperElevation ***)
	CentreOfGravity ( 0.0m 1.5m 0.0m )
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
 	Comment (Friction Calculator - Good Wagon - Two Axle Modern Open Wagons - 17,5;59,5;2,76;3,83;14,04;4 )
	ORTSDavis_A ( 722 )
	ORTSDavis_B ( 18.0 )
	ORTSDavis_C ( 1.27 )
	DerailRailForce ( 297.5kN )
	ORTSBearingType ( Roller )
	ORTSAntislip ( 0 )
	DerailRailHeight ( 4cm )
	DerailBufferForce ( 400kN )
	