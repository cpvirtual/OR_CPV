
	Mass ( 95.4t )
Comment ( ***************** Curve Resistance & SuperElevation *****************)
	CentreOfGravity ( 0.0m 1.2m 0.0m )
	ORTSTrackGauge ( 1.0m 668.0mm )
	ORTSRigidWheelbase ( 3.0m 353.0mm )
	ORTSUnbalancedSuperelevation ( 180mm )

Comment ( ********** Derailment Coefficient **********)
	ORTSLengthBogieCentre		( 8.433m )
	ORTSLengthCarBody			( 15.32m )
	ORTSLengthCouplerFace		( 17.06m )
	ORTSNumberAxles			( 6 )
	ORTSNumberBogies			( 2 )


Comment ( *********************** Friction / Adhesion ************************* )
	ORTSAdhesion (
		ORTSCurtis_Kniffler ( 7.5 44 0.161 0.7 )
		ORTSSlipWarningThreshold ( 70 )
		Wheelset (
			Axle (
				ORTSInertia ( 5351 ) comment ( 95,4*1016,0469088*0,25*0,4699^2 )
				ORTSRadius ( 0.508m )
			)
		)
	)
	ORTSBearingType ( Roller )
 	Comment (Friction Calculator - Electric Loco - Modern Locomotives - 95,4;3,05;4,25;15,92;6 )
	ORTSDavis_A ( 817.1 )
	ORTSDavis_B ( 33.39 )
	ORTSDavis_C ( 6.98 )
	ORTSAntislip ( 0 )
	
	ORTSWagonFrontalArea ( 94ft^2 )
	ORTSDavisDragConstant ( 0.0016 )
	ORTSTrailLocomotiveResistanceFactor ( 0.204 )

	DerailRailHeight ( 4cm )
	DerailRailForce ( 477kN )
	DerailBufferForce ( 400kN )
	