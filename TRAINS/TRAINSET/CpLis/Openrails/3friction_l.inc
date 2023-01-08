
	Mass ( 40t ) Comment (* tara 13,9t *)

Comment ( *** Curve Resistance & SuperElevation ***)
	CentreOfGravity ( 0.0m 1.5m 0.0m )
	ORTSTrackGauge ( 1.0m 668.0mm )
	ORTSRigidWheelbase ( 8.0m 0.0mm )
	ORTSUnbalancedSuperelevation ( 180mm )

Comment( *** Friction / Adhesion *** )
	ORTSAdhesion ( ORTSSlipWarningThreshold ( 70 ) )
	ORTSAdhesion (	Wheelset (
			Axle (
				ORTSInertia ( 3633 ) comment ( valor por defeito. calcular mais tarde)
				ORTSRadius ( 0.5m )
			)
		)
	)
 	Comment (Friction Calculator - Good Wagon - Two Axle Wagons Modern Covered Wagon - 13,9;40;3,016;4,141;12,62;2 )
	ORTSDavis_A ( 331 )
	ORTSDavis_B ( 14.1 )
	ORTSDavis_C ( 1.63 )
	DerailRailForce ( 200kN )
	ORTSBearingType ( Roller )
	ORTSAntislip ( 0 )
	DerailRailHeight ( 4cm )
	DerailBufferForce ( 400kN )
	