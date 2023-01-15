
	Mass ( 114t )
Comment ( ***************** Curve Resistance & SuperElevation *****************)
	CentreOfGravity			( 0.0m 1.3m 0.0m )
	ORTSTrackGauge			( 1m 668mm )
	ORTSRigidWheelbase		( 3m 352mm )
	ORTSUnbalancedSuperelevation	( 180mm )

Comment ( ********** Derailment Coefficient **********)
	ORTSLengthBogieCentre		( 9.143m )
	ORTSLengthCarBody			( 15.848m )
	ORTSLengthCouplerFace		( 16.988m )
	ORTSNumberAxles			( 2 )
	ORTSNumberBogies			( 2 )

Comment ( *********************** Friction / Adhesion ************************* )
	ORTSAdhesion (
		ORTSCurtis_Kniffler ( 7.5 44 0.161 0.7 )
		ORTSSlipWarningThreshold ( 70 )
		Wheelset (
			Axle (
				ORTSInertia ( 6226 ) comment ( 111*1016,0469088*0,25*0,4699^2 )
				ORTSRadius ( 0.508m )
			)
		)
	)
	ORTSBearingType ( Roller )
 	Comment ( ORTS Friction Calculator - 114;6;11;Roller modern )
	ORTSDavis_A ( 1638 )
 	Comment (Friction Calculator - Diesel Mechanical - low resistance - 111;3,025;4,4;15,848;6;2;2 )
	ORTSDavis_B ( 79.8 )
	ORTSDavis_C ( 7.13 )

	ORTSWagonFrontalArea ( 11m^2 )
	ORTSWheelFlangeLength ( 19.1516mm )
	ORTSMaximumWheelFlangeAngle ( 1.308996rad )

	ORTSDavisDragConstant ( 0.0024 )
	ORTSStandstillFriction ( 1900.535 )
	ORTSMergeSpeed ( 0.26858 )
	ORTSAntislip ( 0 )

	DerailRailHeight ( 4cm )
	DerailRailForce ( 555kN )
	DerailBufferForce ( 400kN )
