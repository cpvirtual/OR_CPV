
	Mass ( 30.4t )
Comment ( *** Curve Resistance & SuperElevation ***)
	CentreOfGravity              ( 0.0m 1.6m 0.0m )
	ORTSTrackGauge               ( 1m 668mm )
	ORTSRigidWheelbase           ( 2m 740mm )
	ORTSUnbalancedSuperelevation ( 180mm )

Comment ( ********** Derailment Coefficient **********)
	ORTSLengthBogieCentre		( 1.370m )
	ORTSLengthCarBody			( 6.895m )
	ORTSLengthCouplerFace		( 7.815m )
	ORTSNumberAxles			( 0 )
	ORTSNumberBogies			( 1 )
	WheelRadius 			( 0.4955 )	
	ORTSWheelFlangeLength 		( 19.1516mm )
	ORTSMaximumWheelFlangeAngle 	( 1.308996rad )

Comment( *********************** Friction / Adhesion ************************* )
	ORTSAdhesion ( 
		ORTSCurtius_Kniffler ( 7.5 44 0.161 0.7 )
		ORTSSlipWarningThreshold ( 70 )
		Wheelset (
			Axle (
				ORTSInertia ( 2890 ) comment ( 64,4*1016,0469088*0,20*0,4699^2 )
				ORTSRadius ( 0.4955m )
			)
		)
	)
	ORTSBearingType ( Roller )
	Comment (Friction Calculator - Diesel Mechanical - Older Locomotives - 30,4; 30,4; 2,345; 3,74; 6,895; 3; 1; 3 )
 	ORTSDavis_A ( 549 )
	ORTSDavis_B ( 21.3 )
	ORTSDavis_C ( 4.34 )

	ORTSWagonFrontalArea ( 10.9m^2 )
	ORTSDavisDragConstant ( 0.0016 )
	ORTSTrailLocomotiveResistanceFactor ( 0.101 )
	ORTSStandstillFriction ( 1300.365789 )
	ORTSMergeSpeed ( 0.270329 )
	ORTSAntislip ( 0 )

	DerailRailHeight ( 4cm )
	DerailRailForce ( 76kN )
	DerailBufferForce ( 400kN )
	