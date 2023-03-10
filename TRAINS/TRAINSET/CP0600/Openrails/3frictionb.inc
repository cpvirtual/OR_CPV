
Comment ( *** Curve Resistance & SuperElevation ***)
	CentreOfGravity ( 0.0m 1.2m 0.0m )
	ORTSTrackGauge ( 1m 668mm )
	ORTSRigidWheelbase ( 2m 600mm )
	ORTSUnbalancedSuperelevation ( 180mm )

Comment ( ********** Derailment Coefficient **********)
	ORTSLengthBogieCentre	( 19m )
	ORTSLengthCarBody		( 25.88m )
	ORTSLengthCouplerFace	( 26.74m )
	ORTSNumAxles		( 4 )
	ORTSNumBogies		( 2 )


Comment( *********************** Friction / Adhesion ************************* )
	ORTSAdhesion (
		ORTSCurtius_Kniffler ( 7.5 44 0.161 0.7 )
		ORTSSlipWarningThreshold ( 70 )
		Wheelset (
			Axle (
				ORTSInertia ( 2946 ) comment ( 65,66*1016,0469088*0,20*0,4699^2 )
				ORTSRadius ( 0.460m )
			)
		)
	)
	ORTSBearingType ( Roller )
 	Comment (Friction Calculator - Diesel Loco - Diesel Railcars, non-leading - 65,66;2,986;4,075;25,88;4 )
	ORTSDavis_A ( 764.08 )
	ORTSDavis_B ( 19.84 )
	ORTSDavis_C ( 1.17 )
	ORTSAntislip ( 0 )


	DerailRailHeight ( 4cm )
	DerailRailForce ( 390kN )
	DerailBufferForce ( 165kN )	