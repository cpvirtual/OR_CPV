
	Mass ( 57.94t ) Comment (* tara 42t *)
Comment ( *** Curve Resistance & SuperElevation ***)
	CentreOfGravity ( 0.0m 1.8m 0.0m )
	ORTSTrackGauge ( 1.0m 668.0mm )
	ORTSRigidWheelbase ( 3.0m 900.0mm )
	ORTSUnbalancedSuperelevation ( 180mm )

Comment ( *** Friction *** )
	ORTSAdhesion (
		ORTSCurtius_Kniffler ( 7.5 44 0.161 0.7 )
		ORTSSlipWarningThreshold ( 70 )
		Wheelset (
			Axle (
				ORTSInertia ( 5351 ) comment ( 95,4*1016,0469088*0,25*0,4699^2 )
				ORTSRadius ( 0.508m )
			)
		)
	)
	ORTSBearingType ( Friction )
 	Comment (Friction Calculator - Steam Tender Loco - Chapelon - 57,94; 41,03; 3,2; 4; 1,75; 5; 3 )
	ORTSDavis_A ( 2519 )
	ORTSDavis_B ( 83.7 )
	ORTSDavis_C ( 7.32 )

	ORTSWagonFrontalArea ( 10.9m^2 )
	ORTSWheelFlangeLength ( 19.1516mm )
	ORTSMaximumWheelFlangeAngle ( 1.308996rad )

	ORTSDavisDragConstant ( 0.0028 )
	ORTSStandstillFriction ( 1300.365789 )
	ORTSMergeSpeed ( 0.270329 )
	ORTSAntislip ( 0 )

	DerailRailHeight ( 4cm )
	DerailRailForce ( 477kN )
	DerailBufferForce ( 400kN )

