
Comment ( *** Curve Resistance & SuperElevation ***)
	CentreOfGravity ( 0.0m 1.2m 0.0m )
	ORTSTrackGauge ( 1.0m 668.0mm )
	ORTSRigidWheelbase ( 2.0m 600.0mm )
	ORTSUnbalancedSuperelevation ( 180mm )

Comment( *********************** Friction / Adhesion ************************* )
	ORTSAdhesion (
		ORTSCurtius_Kniffler ( 7.5 44 0.161 0.7 )
		ORTSSlipWarningThreshold ( 70 )
		Wheelset (
			Axle (
				ORTSInertia ( 2355 ) comment ( 52,48*1016,0469088*0,20*0,4699^2 )
				ORTSRadius ( 0.460m )
			)
		)
	)
	ORTSBearingType ( Roller )
 	Comment (Friction Calculator - Diesel Loco - Diesel Railcars, non-leading - 52,48;2,986;4,075;25,68;4 )
	ORTSDavis_A ( 675.02 )
	ORTSDavis_B ( 15.86 )
	ORTSDavis_C ( 1.17 )
	ORTSAntislip ( 0 )
	DerailRailHeight ( 4cm )
	DerailRailForce ( 390kN )
	DerailBufferForce ( 132kN )

	ORTSLengthBogieCentre	( 19 )
	ORTSLengthCarBody		( 25.68 )
	ORTSLengthCouplerFace	( 26.36 )

	ORTSNumAxles		( 4 )
	ORTSNumBogies		( 2 )