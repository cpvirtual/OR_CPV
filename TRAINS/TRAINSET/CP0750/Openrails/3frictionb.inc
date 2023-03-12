
	Mass ( 12t ) Comment (* tara 10.7t *)

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
 	Comment (Friction Calculator - Passenger Carriage - Older 4-wheel Carriages - 12; 3; 3,3; 13,15; 2 )
	ORTSDavis_A 		( 228 )
	ORTSDavis_B 		( 4.2 )
	ORTSDavis_C 		( 1.66 )

	ORTSWagonFrontalArea 	( 8.5m^2 )
	ORTSDavisDragConstant 	( 0.0008 )
	ORTSStandstillFriction 	( 1300.365789 )
	ORTSMergeSpeed 		( 0.270329 )
	ORTSAntislip 		( 0 )

	DerailRailHeight 		( 4cm )
	DerailRailForce 		( 30kN )
	DerailBufferForce 	( 200kN )


