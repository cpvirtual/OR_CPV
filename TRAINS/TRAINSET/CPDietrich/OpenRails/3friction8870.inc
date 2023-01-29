
	Mass ( 58t ) Comment (* tara 53,5t *)
Comment ( *** Curve Resistance & SuperElevation ***)
	CentreOfGravity ( 0.0m 1.2m 0.0m )
	ORTSTrackGauge ( 1.0m 668.0mm )
	ORTSRigidWheelbase ( 2.0m 560.0mm )
	ORTSUnbalancedSuperelevation ( 180mm )

Comment ( ********** Derailment Coefficient **********)
	ORTSLengthBogieCentre ( 17.2 )
	ORTSLengthCarBody ( 23.84m )
	ORTSLengthCouplerFace ( 24.5m )
	ORTSNumberAxles ( 4 )
	ORTSNumberBogies ( 2 )

Comment( *** Friction / Adhesion *** )
	ORTSAdhesion ( ORTSSlipWarningThreshold ( 70 ) )
	ORTSAdhesion (	Wheelset (
			Axle (
				ORTSInertia ( 3633 ) comment ( valor por defeito. calcular mais tarde)
				ORTSRadius ( 0.46m )
			)
		)
	)
	Comment (Friction Calculator - Passenger Carriage - Corail - 58;3,1;4,05;23,84;4 )
	ORTSDavis_A ( 515.38 )
	ORTSDavis_B ( 15.66 )
	ORTSDavis_C ( 0.65 )
	DerailRailForce ( 290kN )
	ORTSBearingType ( Roller )
	ORTSAntislip ( 0 )
	DerailRailHeight ( 4cm )
	DerailBufferForce ( 400kN )
	