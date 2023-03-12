
	Mass ( 24t ) Comment (* tara 20.9t - 22.24t em O.M.*)

Comment ( *** Curve Resistance & SuperElevation ***)
	CentreOfGravity ( 0.0m 1.2m 0.0m )
	ORTSTrackGauge ( 1.0m 668.0mm )
	ORTSRigidWheelbase ( 6.0m 0.0mm )
	ORTSUnbalancedSuperelevation ( 180mm )

Comment ( ********** Derailment Coefficient **********)
	ORTSLengthBogieCentre	( 6.0 )
	ORTSLengthCarBody		( 13.15m )
	ORTSLengthCouplerFace	( 13.77m )
	ORTSNumAxles		( 0 )
	ORTSNumBogies		( 0 )
	ORTSWheelFlangeLength ( 19.151mm )
	ORTSMaximumWheelFlangeAngle ( 62deg )

Comment( *********************** Friction / Adhesion ************************* )
	ORTSAdhesion (
		ORTSCurtius_Kniffler ( 7.5 44 0.161 0.7 )
		ORTSSlipWarningThreshold ( 70 )
		Wheelset (
			Axle (
				ORTSInertia ( 3633 ) comment ( valor por defeito. calcular mais tarde)
				ORTSRadius ( 0.450m )
			)
		)
	)
	ORTSBearingType 		( Roller )
 	Comment (Friction Calculator - Diesel Mechanical - Modern locomotive - 24; 24; 3; 3,3; 13,15; 2; 1; 2 )
	ORTSDavis_A 		( 278 )
	ORTSDavis_B 		( 16.8 )
	ORTSDavis_C 		( 3.18 )

	ORTSWagonFrontalArea 	( 8.5m^2 )
	ORTSDavisDragConstant 	( 0.0012 )
	ORTSStandstillFriction 	( 1300.365789 )
	ORTSMergeSpeed 		( 0.270329 )
	ORTSAntislip 		( 0 )

	DerailRailHeight 		( 4cm )
	DerailRailForce 		( 60kN )
	DerailBufferForce 	( 200kN )
