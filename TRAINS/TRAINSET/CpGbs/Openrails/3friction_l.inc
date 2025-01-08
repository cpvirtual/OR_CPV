
	Mass ( 36t ) Comment (* tara 14,3t *)

Comment ( *** Curve Resistance & SuperElevation ***)
	CentreOfGravity ( 0.0m 1.66m 0.0m )
	ORTSTrackGauge ( 1.0m 668.0mm )
	ORTSRigidWheelbase ( 8.0m 0.0mm )
	ORTSUnbalancedSuperelevation ( 180mm )

Comment( *** Friction / Adhesion *** )
	ORTSAdhesion ( ORTSCurtis_Kniffler ( 7.5 44 0.161 0.7 ) )
	ORTSAdhesion ( ORTSSlipWarningThreshold ( 70 ) )
	ORTSAdhesion (	Wheelset (
			Axle (
				ORTSInertia ( 3633 ) comment ( valor por defeito. calcular mais tarde)
				ORTSRadius ( 0.5m )
			)
		)
	)
 	Comment (Friction Calculator - Good Wagon - Two Axle Wagons Modern Vans - 14,3;36;2,68;4,14;12,78;2 )
	ORTSDavis_A ( 314 )
	ORTSDavis_B ( 12.7 )
	ORTSDavis_C ( 1.57 )
	DerailRailForce ( 180kN )
	ORTSBearingType ( Roller )
	ORTSAntislip ( 0 )
	DerailRailHeight ( 4cm )
	DerailBufferForce ( 400kN )
	