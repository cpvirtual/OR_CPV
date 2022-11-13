
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
 	Comment (FCalc 2.0 - EMU DMU - Roller Bearing-Rear - 39,6;4,11,7018;4,392;25,2;4 )
	ORTSDavis_A 		( 768 )
	ORTSDavis_B 		( 11.65 )
	ORTSDavis_C 		( 0.34 )
	ORTSAntislip 		( 0 )
	DerailRailHeight 		( 4cm )
	DerailRailForce 		( 325kN )
	DerailBufferForce 	( 400kN )

	ORTSLengthBogieCentre	( 18.12 )
	ORTSLengthCarBody		( 25.02 )
	ORTSLengthCouplerFace	( 25.98 )

	ORTSNumAxles		( 4 )
	ORTSNumBogies		( 2 )
