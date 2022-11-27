
	Mass ( 117t )
Comment ( ***************** Curve Resistance & SuperElevation *****************)
	CentreOfGravity ( 0.0m 1.6m 0.0m )
	ORTSTrackGauge ( 1.0m 668.0mm )
	ORTSRigidWheelbase ( 4m 0mm )
	ORTSUnbalancedSuperelevation ( 180mm )

Comment ( ********** Derailment Coefficient **********)
	ORTSLengthBogieCentre ( 11.586m )
	ORTSLengthCarBody ( 17.40m )
	ORTSLengthCouplerFace ( 19.084m )
	ORTSNumberAxles ( 0 )
	ORTSNumberBogies ( 2 )


Comment ( *********************** Friction / Adhesion ************************* )
	ORTSAdhesion (
		ORTSCurtis_Kniffler ( 9 44 0.16 0.7 )
		ORTSSlipWarningThreshold ( 70 )
		Wheelset (
			Axle (
				ORTSInertia ( 6534 ) comment ( 116,5*1016,0469088*0,25*0,4699^2 )
				ORTSRadius ( 0.550m )
			)
		)
	)
	ORTSBearingType ( Roller )
 	Comment (Friction Calculator - Diesel Loco - Modern Locomotives - 117;3,062;4,31;17,4;6 )
	ORTSDavis_A ( 905 )
	ORTSDavis_B ( 41 )
	ORTSDavis_C ( 1.01 )

	ORTSWagonFrontalArea ( 11.9m^2 )
	ORTSWheelFlangeLength ( 19.1516mm )
	ORTSMaximumWheelFlangeAngle ( 1.308996rad )

	ORTSDavisDragConstant ( 0.0024 )
	ORTSStandstillFriction ( 1300.365789 )
	ORTSMergeSpeed ( 0.270329 )
	ORTSAntislip ( 0 )

	DerailRailHeight ( 4cm )
	DerailRailForce ( 570kN )
	DerailBufferForce ( 400kN )
