
	Mass ( 11.9t ) Comment (* tara 11,9t *)
Comment ( *** Curve Resistance & SuperElevation ***)
	CentreOfGravity ( 0.0m 1.2m 0.0m )
	ORTSTrackGauge ( 1.0m 668.0mm )
	ORTSRigidWheelbase ( 6.0m 600.0mm )
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
	ORTSAdhesion (
		ORTSCurtius_Kniffler ( 7.5 44 0.161 0.7 )
		ORTSSlipWarningThreshold ( 70 )
		Wheelset (
			Axle (
				ORTSInertia ( 3633 ) comment ( valor por defeito. calcular mais tarde)
				ORTSRadius ( 0.5m )
			)
		)
	)
 	Comment (Friction Calculator - Good Wagon - 2 Axle Open Wagons - 11,9;40;2,66;3,635;10,54;2 )
	ORTSDavis_A ( 180 )
	ORTSDavis_B ( 4.2 )
	Comment (Friction Calculator - Good Wagon - Bogie Wagon with End Bulkheads - 11,9;40;2,66;3,635;10,54;2 )
	ORTSDavis_C ( 2.79 )
	DerailRailForce ( 59.5kN )
	ORTSBearingType ( Roller )
	ORTSAntislip ( 0 )
	DerailRailHeight ( 4cm )
	DerailBufferForce ( 400kN )
	