
Comment ( *** Curve Resistance & SuperElevation ***)
	CentreOfGravity ( 0.0m 1.2m 0.0m )
	ORTSTrackGauge ( 1.0m 668.0mm )
	ORTSRigidWheelbase ( 2.0m 590.0mm )
	ORTSUnbalancedSuperelevation ( 180mm )


Comment( *********************** Friction / Adhesion ************************* )
	ORTSAdhesion (
		ORTSCurtis_Kniffler ( 7.5 44 0.161 0.7 )
	)
	ORTSAdhesion (
		ORTSSlipWarningThreshold ( 70 )
	)
	ORTSAdhesion (
		Wheelset (
			Axle (
				ORTSInertia ( 3633 ) comment ( valor por defeito. calcular mais tarde)
				ORTSRadius ( 0.425m )
			)
		)
	)
	ORTSBearingType 		( Roller )
 	Comment (Friction Calculator - Diesel Loco - Modern locomotives - 65;2,97;4,392;25,2;4 )
	ORTSDavis_A 		( 550.69 )
	ORTSDavis_B 		( 22.75 )
	ORTSDavis_C 		( 4.79 )
	ORTSAntislip 		( 0 )
	DerailRailHeight 		( 4cm )
	DerailRailForce 		( 325kN )
	DerailBufferForce 	( 400kN )

	ORTSLengthBogieCentre	( 18.12 )
	ORTSLengthCarBody		( 25.02 )
	ORTSLengthCouplerFace	( 25.98 )

	ORTSNumAxles		( 4 )
	ORTSNumBogies		( 2 )
