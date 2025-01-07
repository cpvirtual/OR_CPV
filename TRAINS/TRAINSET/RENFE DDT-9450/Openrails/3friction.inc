
	Mass ( 60t )
Comment ( *** Curve Resistance & SuperElevation ***)
	CentreOfGravity ( 0.0m 1.2m 0.0m )
	ORTSTrackGauge ( 1.0m 668.0mm )
	ORTSRigidWheelbase ( 2.0m 500.0mm )
	ORTSUnbalancedSuperelevation ( 180mm )

Comment ( ********** Derailment Coefficient **********)
	ORTSLengthBogieCentre ( 17.0m )
	ORTSLengthCarBody ( 25.1m )
	ORTSLengthCouplerFace ( 25.7m )
	ORTSNumberAxles ( 4 )
	ORTSNumberBogies ( 2 )
	ORTSWheelFlangeLength ( 19.151mm )
	ORTSMaximumWheelFlangeAngle ( 62deg )

Comment( *** Friction / Adhesion *** )
	ORTSAdhesion ( ORTSSlipWarningThreshold ( 70 ) )
	ORTSAdhesion (	Wheelset (
			Axle (
				ORTSInertia ( 3633 ) comment ( valor por defeito. calcular mais tarde)
				ORTSRadius ( 0.50m )
			)
		)
	)
	ORTSBearingType ( Roller )
	Comment (Friction Calculator - Passenger Carriage - CFF Voiture Legere - 45;3,24;3,927;19,917;4 )
	ORTSDavis_A ( 496.39 )
	ORTSDavis_B ( 15.89 )
	ORTSDavis_C ( 0.86 )

	ORTSWagonFrontalArea ( 10.9m^2 )
	ORTSDavisDragConstant ( 0.0003 )
	ORTSStandstillFriction ( 1300.365789 )
	ORTSMergeSpeed ( 0.270329 )
	ORTSAntislip ( 0 )

	DerailRailHeight ( 4cm )
	DerailRailForce ( 225kN )
	DerailBufferForce ( 400kN )
	