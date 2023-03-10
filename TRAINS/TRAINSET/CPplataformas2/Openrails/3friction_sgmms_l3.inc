
	Mass ( 80t ) Comment (* tara 17.5t *)

Comment ( *** Curve Resistance & SuperElevation ***)
	CentreOfGravity ( 0.0m 1.5m 0.0m )
	ORTSTrackGauge ( 1.0m 668.0mm )
	ORTSRigidWheelbase ( 2.0m 0.0mm )
	ORTSUnbalancedSuperelevation ( 180mm )

Comment( *** Friction / Adhesion *** )
	ORTSAdhesion (
		ORTSCurtius_Kniffler ( 7.5 44 0.161 0.7 )
		ORTSSlipWarningThreshold ( 70 )
		Wheelset (
			Axle (
				ORTSInertia ( 3633 ) comment ( valor por defeito. calcular mais tarde)
				ORTSRadius ( 0.46m )
			)
		)
	)
	ORTSBearingType ( Roller )
 	Comment (Friction Calculator - Good Wagon - Bogie Flat Wagons - 17,5;80;2,76;3,83;14,04;4 )
	ORTSDavis_A ( 861 )
	ORTSDavis_B ( 24.2 )
	ORTSDavis_C ( 1.27 )
	ORTSWagonFrontalArea ( 9.01m^2 )
	ORTSDavisDragConstant ( 0.0006 )
	ORTSAntislip ( 0 )
	DerailRailHeight ( 4cm )
	DerailRailForce ( 400kN ) comment (* mass*5 *)
	DerailBufferForce ( 400kN )
	