
	FreightAnim ( madeira1.s 1 1 )

	Mass ( 32t ) Comment (* tara 11t *)
Comment ( *** Curve Resistance & SuperElevation ***)
	CentreOfGravity ( 0.0m 1.2m 0.0m )
	ORTSTrackGauge ( 1.0m 668.0mm )
	ORTSRigidWheelbase ( 6.0m 000.0mm )
	ORTSUnbalancedSuperelevation ( 180mm )

Comment ( ********** Derailment Coefficient **********)
	ORTSLengthBogieCentre ( 6.6m )
	ORTSLengthCarBody ( 10.6m )
	ORTSLengthCouplerFace ( 11.74m )
	ORTSNumberAxles ( 2 )
	ORTSNumberBogies ( 0 )
	ORTSWheelFlangeLength ( 19.151mm )
	ORTSMaximumWheelFlangeAngle ( 62deg )

Comment( *** Friction / Adhesion *** )
	ORTSAdhesion ( ORTSSlipWarningThreshold ( 70 ) )
	ORTSAdhesion (	Wheelset (
			Axle (
				ORTSInertia ( 3633 ) comment ( valor por defeito. calcular mais tarde)
				ORTSRadius ( 0.5m )
			)
		)
	)
 	Comment (Friction Calculator - Good Wagon - 2 Axle Open Wagons - 11;32;3;435;8,5;2 )
	ORTSDavis_A ( 296 )
	ORTSDavis_B ( 11.3 )
	Comment (Friction Calculator - Good Wagon - Bogie Wagon with End Bulkheads - 11;32;3;435;8,5;2 )
	ORTSDavis_C ( 1.31 )
	DerailRailForce ( 55kN )
	ORTSBearingType ( Roller )
	ORTSAntislip ( 0 )
	DerailRailHeight ( 4cm )
	DerailBufferForce ( 400kN )
	