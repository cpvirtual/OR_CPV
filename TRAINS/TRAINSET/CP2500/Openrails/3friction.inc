
Comment ( *** Curve Resistance & SuperElevation ***)
	CentreOfGravity ( 0.0m 1.6m 0.0m )
	ORTSTrackGauge ( 1m 668mm )
	ORTSRigidWheelbase ( 3m 200mm )
	ORTSUnbalancedSuperelevation ( 180mm )

Comment ( ********** Derailment Coefficient **********)


Comment( *********************** Friction / Adhesion ************************* )
	ORTSAdhesion (
		ORTSCurtius_Kniffler ( 7.5 44 0.161 0.7 )
		ORTSSlipWarningThreshold ( 70 )
		Wheelset (
			Axle (
				ORTSInertia ( 3231 ) comment ( 72*1016,0469088*0,20*0,4699^2 )
				ORTSRadius ( 0.650m )
			)
		)
	)
	ORTSBearingType ( Roller )
 	Comment (Friction Calculator - Electric Loco - Modern Locomotives - 72;3,105;3,86;14,24;4 )
	ORTSDavis_A ( 579.59 )
	ORTSDavis_B ( 25.20 )
	ORTSDavis_C ( 3.84 )

	ORTSWagonFrontalArea ( 10.71m^2 )
	ORTSDavisDragConstant ( 0.0024 )
	ORTSStandstillFriction ( 1500.422064 )
	ORTSMergeSpeed ( 0.267935 )
	ORTSAntislip ( 0 )

	DerailRailHeight ( 4cm )
	DerailRailForce ( 353kN )
	DerailBufferForce ( 400kN )
	