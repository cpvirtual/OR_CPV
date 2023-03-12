
	Mass ( 98t ) Comment (* tara 84,03t *)
Comment ( *** Curve Resistance & SuperElevation ***)
	CentreOfGravity ( 0.0m 1.8m 0.0m )
	ORTSTrackGauge ( 1.0m 668.0mm )
	ORTSRigidWheelbase ( 4.0m 500.0mm )
	ORTSUnbalancedSuperelevation ( 180mm )

Comment ( ********** Derailment Coefficient **********)
	ORTSLengthBogieCentre ( 5.35m )
	ORTSLengthCarBody ( 12.192m )
	ORTSLengthCouplerFace ( 14.124m )
	ORTSNumberAxles ( 3 )
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
	ORTSBearingType ( Friction )
 	Comment (Friction Calculator - Steam Tank Loco - Chapelon - 84,03; 98; 60; 3,2; 4,25; 1,35; 7; 4 )
	ORTSDavis_A ( 5380 )
	ORTSDavis_B ( 441.3 )
	ORTSDavis_C ( 7.77 )

	ORTSWagonFrontalArea ( 11m^2 )
	ORTSDavisDragConstant ( 0.0028 )
	ORTSTrailLocomotiveResistanceFactor ( 0.147 )
	ORTSStandstillFriction ( 1300.365789 )
	ORTSMergeSpeed ( 0.270329 )
	ORTSAntislip ( 0 )

	DerailRailHeight ( 4cm )
	DerailRailForce ( 174kN )
	DerailBufferForce ( 200kN )

