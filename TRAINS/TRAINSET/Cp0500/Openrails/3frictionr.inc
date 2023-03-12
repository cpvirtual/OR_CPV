
	Mass ( 48t ) Comment (* tara 45.3t *)
Comment ( *** Curve Resistance & SuperElevation ***)
	CentreOfGravity ( 0.0m 1.2m 0.0m )
	ORTSTrackGauge ( 1.0m 668.0mm )
	ORTSRigidWheelbase ( 2.0m 600.0mm )
	ORTSUnbalancedSuperelevation ( 180mm )

Comment ( ********** Derailment Coefficient **********)
	ORTSLengthBogieCentre	( 19 )
	ORTSLengthCarBody		( 25.68 )
	ORTSLengthCouplerFace	( 26.36 )
	ORTSNumAxles		( 4 )
	ORTSNumBogies		( 2 )

Comment( *********************** Friction / Adhesion ************************* )
	ORTSAdhesion (
		ORTSCurtius_Kniffler ( 7.5 44 0.161 0.7 )
		ORTSSlipWarningThreshold ( 70 )
		Wheelset (
			Axle (
				ORTSInertia ( 2154 ) comment ( 48*1016,0469088*0,20*0,4699^2 )
				ORTSRadius ( 0.455m )
			)
		)
	)
	ORTSBearingType ( Roller )
 	Comment (Friction Calculator - Passenger Carriage - Older bogie carriages - 48;2,8;4,173;27,02;4 )
	ORTSDavis_A ( 513 )
	ORTSDavis_B ( 16.9 )
	ORTSDavis_C ( 1.13 )

	ORTSWagonFrontalArea ( 10m^2 )
	ORTSDavisDragConstant ( 0.0003 )
	ORTSStandstillFriction ( 1300.365789 )
	ORTSMergeSpeed ( 0.270329 )
	ORTSAntislip ( 0 )

	DerailRailHeight ( 4cm )
	DerailRailForce ( 390kN )
	DerailBufferForce ( 132kN )