
	Mass ( 87.64t )
Comment ( *** Curve Resistance & SuperElevation ***)
	CentreOfGravity ( 0.0m 1.8m 0.0m )
	ORTSTrackGauge ( 1.0m 668.0mm )
	ORTSRigidWheelbase ( 4.0m 300.0mm )
	ORTSUnbalancedSuperelevation ( 180mm )

Comment ( ********** Derailment Coefficient **********)
	ORTSLengthBogieCentre ( 4.85m )
	ORTSLengthCarBody ( 12.55m )
	ORTSLengthCouplerFace ( 13.25m )
	ORTSNumberAxles ( 2 )
	ORTSNumberBogies ( 1 )
	WheelRadius ( 0.450 )	
	ORTSWheelFlangeLength ( 19.1516mm )
	ORTSMaximumWheelFlangeAngle ( 1.308996rad )

Comment ( *** Friction *** )
	ORTSAdhesion (
		ORTSCurtius_Kniffler ( 7.5 44 0.161 0.7 )
		ORTSSlipWarningThreshold ( 70 )
		Wheelset (
			Axle (
				ORTSInertia ( 5351 ) comment ( 95,4*1016,0469088*0,25*0,4699^2 )
				ORTSRadius ( 0.450m )
			)
		)
	)
	ORTSBearingType ( Roller )
 	Comment (Friction Calculator - Steam Tender Loco - Roller - 87,64; 50,39; 3,2; 4,4; 1,9; 6; 3 )
	ORTSDavis_A ( 5587 )
	ORTSDavis_B ( 8.8 )
	ORTSDavis_C ( 8.11 )

	ORTSWagonFrontalArea ( 11.3m^2 )
	ORTSDavisDragConstant ( 0.0028 )
	ORTSTrailLocomotiveResistanceFactor ( 0.146 )
	ORTSStandstillFriction ( 1300.365789 )
	ORTSMergeSpeed ( 0.270329 )
	ORTSAntislip ( 0 )

	DerailRailHeight ( 4cm )
	DerailRailForce ( 220kN )
	DerailBufferForce ( 400kN )

