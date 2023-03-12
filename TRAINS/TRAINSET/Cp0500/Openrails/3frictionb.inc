
	Mass ( 60t ) Comment (* tara 56.5t *)
Comment ( *** Curve Resistance & SuperElevation ***)
	CentreOfGravity ( 0.0m 1.2m 0.0m )
	ORTSTrackGauge ( 1m 668mm )
	ORTSRigidWheelbase ( 3m 200mm )
	ORTSUnbalancedSuperelevation ( 180mm )

Comment ( ********** Derailment Coefficient **********)
	ORTSLengthBogieCentre	( 19.7m )
	ORTSLengthCarBody		( 27.02m )
	ORTSLengthCouplerFace	( 27.78m )
	ORTSNumAxles		( 2 )
	ORTSNumBogies		( 2 )

Comment( *********************** Friction / Adhesion ************************* )
	ORTSAdhesion (
		ORTSCurtius_Kniffler ( 7.5 44 0.161 0.7 )
		ORTSSlipWarningThreshold ( 70 )
		Wheelset (
			Axle (
				ORTSInertia ( 2692 ) comment ( 60*1016,0469088*0,20*0,4699^2 )
				ORTSRadius ( 0.455m )
			)
		)
	)
	ORTSBearingType ( Roller )
 	Comment (Friction Calculator - Diesel Loco - Diesel Railcars, non-leading - 65,66;2,986;4,075;25,88;4 )
	ORTSDavis_A ( 764.08 )
	ORTSDavis_B ( 19.84 )
	ORTSDavis_C ( 1.17 )

 	ORTSWagonFrontalArea ( 10.5m^2 )
	ORTSDavisDragConstant ( 0.0003 )
	ORTSStandstillFriction ( 1300.365789 )
	ORTSMergeSpeed ( 0.270329 )
	ORTSAntislip ( 0 )

	DerailRailHeight ( 4cm )
	DerailRailForce ( 390kN )
	DerailBufferForce ( 165kN )	