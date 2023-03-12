
	Mass ( 58t ) Comment (* tara 51.5t *)

Comment ( *** Curve Resistance & SuperElevation ***)
	CentreOfGravity ( 0.0m 1.2m 0.0m )
	ORTSTrackGauge ( 1.0m 668.0mm )
	ORTSRigidWheelbase ( 3.0m 0.0mm )
	ORTSUnbalancedSuperelevation ( 180mm )

Comment ( ********** Derailment Coefficient **********)
	ORTSLengthBogieCentre	( 16.33 )
	ORTSLengthCarBody		( 22.33 )
	ORTSLengthCouplerFace	( 23.63 )
	ORTSNumAxles		( 0 )
	ORTSNumBogies		( 2 )
	ORTSWheelFlangeLength ( 19.151mm )
	ORTSMaximumWheelFlangeAngle ( 62deg )

Comment( *********************** Friction / Adhesion ************************* )
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
	ORTSBearingType 		( Roller )
 	Comment (Friction Calculator - Diesel Loco - Diesel railcars - 58; 3,17; 4,25; 22,33; 4 )
	ORTSDavis_A 		( 712 )
	ORTSDavis_B 		( 17.5 ) # ( 1.29 for non-leading )
	ORTSDavis_C 		( 6.14 )

	ORTSWagonFrontalArea 	( 11m^2 )
	ORTSDavisDragConstant 	( 0.0022 )
	ORTSStandstillFriction 	( 1300.365789 )
	ORTSMergeSpeed 		( 0.270329 )
	ORTSAntislip 		( 0 )

	DerailRailHeight 		( 4cm )
	DerailRailForce 		( 325kN )
	DerailBufferForce 	( 400kN )

