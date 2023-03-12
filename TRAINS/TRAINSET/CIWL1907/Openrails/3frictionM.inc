
	Mass ( 35t )
Comment ( *** Curve Resistance & SuperElevation ***)
	CentreOfGravity ( 0.0m 1.2m 0.0m )
	ORTSTrackGauge ( 1.0m 668.0mm )
	ORTSRigidWheelbase ( 2.0m 0.0mm )
	ORTSUnbalancedSuperelevation ( 180mm )

Comment ( ********** Derailment Coefficient **********)
	ORTSLengthBogieCentre ( 11.72m )
	ORTSLengthCarBody ( 16.22m )
	ORTSLengthCouplerFace ( 17.42m )
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
				ORTSRadius ( 0.425m )
			)
		)
	)
	ORTSBearingType ( Roller )
	Comment (Friction Calculator - Passenger Carriage - Older Bogie Carriages with Roller Bearings - 35; 2,7; 4,09; 16,22; 4 )
	ORTSDavis_A ( 437.77 )
	ORTSDavis_B ( 12.36 )
	ORTSDavis_C ( 0.71 )

	ORTSWagonFrontalArea ( 10.9m^2 )
	ORTSDavisDragConstant ( 0.0003 )
	ORTSStandstillFriction ( 1300.365789 )
	ORTSMergeSpeed ( 0.270329 )
	ORTSAntislip ( 0 )

	DerailRailHeight ( 4cm )
	DerailRailForce ( 175kN )
	DerailBufferForce ( 400kN )
