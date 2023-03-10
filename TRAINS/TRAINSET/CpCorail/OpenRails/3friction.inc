
	Mass ( 45t ) Comment (* tara 42t *)

Comment ( *** Curve Resistance & SuperElevation ***)
	CentreOfGravity ( 0.0m 1.2m 0.0m )
	ORTSTrackGauge ( 1.0m 668.0mm )
	ORTSRigidWheelbase ( 2.0m 560.0mm )
	ORTSUnbalancedSuperelevation ( 180mm )

Comment ( ********** Derailment Coefficient **********)
	ORTSLengthBogieCentre ( 18.0m )
	ORTSLengthCarBody ( 25.1m )
	ORTSLengthCouplerFace ( 26.4m )
	ORTSNumberAxles ( 4 )
	ORTSNumberBogies ( 2 )

Comment( *** Friction / Adhesion *** )
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
	ORTSBearingType ( Roller )
 	Comment (Friction Calculator - Passenger Carriage - Based on Corail 1970+ - 45;2,825;4,05;25,76;4 )
	ORTSDavis_A ( 453.96 )
	ORTSDavis_B ( 12.15 )
	ORTSDavis_C ( 0.67 )

	ORTSWagonFrontalArea ( 10.9m^2 )
	ORTSDavisDragConstant ( 0.0003 )
	ORTSStandstillFriction ( 1300.365789 )
	ORTSMergeSpeed ( 0.270329 )
	ORTSAntislip ( 0 )

	DerailRailHeight ( 4cm )
	DerailRailForce ( 225kN )
	DerailBufferForce ( 400kN )
	