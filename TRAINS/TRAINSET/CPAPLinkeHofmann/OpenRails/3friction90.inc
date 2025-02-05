
	Mass ( 38t ) Comment (* tara 29.5t *)
Comment ( *** Curve Resistance & SuperElevation ***)
	CentreOfGravity ( 0.0m 1.2m 0.0m )
	ORTSTrackGauge ( 1.0m 668.0mm )
	ORTSRigidWheelbase ( 2.0m 500.0mm )
	ORTSUnbalancedSuperelevation ( 180mm )

Comment ( ********** Derailment Coefficient **********)
	ORTSLengthBogieCentre ( 17.4m )
	ORTSLengthCarBody ( 23.52m )
	ORTSLengthCouplerFace ( 24.84m )
	ORTSNumberAxles ( 4 )
	ORTSNumberBogies ( 2 )

Comment( *********************** Friction / Adhesion ************************* )
	ORTSAdhesion (
		ORTSCurtius_Kniffler ( 7.5 44 0.161 0.7 )
		ORTSSlipWarningThreshold ( 70 )
		Wheelset (
			Axle (
				ORTSInertia ( 3633 ) comment ( valor por defeito. calcular mais tarde)
				ORTSRadius ( 0.460m )
			)
		)
	)
 	Comment (Friction Calculator - Passenger Carriage - European UIC - 40;3,063;3,903;24,82;4 )
	ORTSDavis_A ( 428.00 )
	ORTSDavis_B ( 14.12 )
	ORTSDavis_C ( 1.00 )
	DerailRailForce ( 200kN )
	ORTSBearingType ( Roller )
	ORTSAntislip ( 0 )
	DerailRailHeight ( 4cm )
	DerailBufferForce ( 400kN )
	