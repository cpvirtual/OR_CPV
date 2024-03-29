
	Mass ( 80t ) Comment (* tara 20,7t *)
Comment ( *** Curve Resistance & SuperElevation ***)
	CentreOfGravity ( 0.0m 1.5m 0.0m )
	ORTSTrackGauge ( 1.0m 668.0mm )
	ORTSRigidWheelbase ( 2.0m 200.0mm )
	ORTSUnbalancedSuperelevation ( 180mm )

Comment ( ********** Derailment Coefficient **********)
	ORTSLengthBogieCentre ( 8.8m )
	ORTSLengthCarBody ( 12.865m )
	ORTSLengthCouplerFace ( 14.065m )
	ORTSNumberAxles ( 4 )
	ORTSNumberBogies ( 2 )
	ORTSWheelFlangeLength ( 19.151mm )
	ORTSMaximumWheelFlangeAngle ( 62deg )

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
 	Comment (Friction Calculator - Good Wagon - Bogie Wagons Tank Wagon - 20,7;80;2,9;4,26;12,865;4 )
	ORTSDavis_A ( 861 )
	ORTSDavis_B ( 24.2 )
	ORTSDavis_C ( 1.63 )

	ORTSWagonFrontalArea ( 11m^2 )
	ORTSDavisDragConstant ( 0.0006 )
	ORTSStandstillFriction ( 1300.365789 )
	ORTSMergeSpeed ( 0.270329 )
	ORTSAntislip ( 0 )

	DerailRailHeight ( 4cm )
	DerailRailForce ( 51.75kN )
	DerailBufferForce ( 400kN )
	