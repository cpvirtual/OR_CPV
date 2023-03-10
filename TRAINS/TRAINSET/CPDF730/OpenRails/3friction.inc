
Comment ( *** Curve Resistance & SuperElevation ***)
	CentreOfGravity ( 0.0m 1.2m 0.0m )
	ORTSTrackGauge ( 1.0m 668.0mm )
	ORTSRigidWheelbase ( 7.0m 500mm )
	ORTSUnbalancedSuperelevation ( 180mm )

Comment( *** Friction / Adhesion *** )
	ORTSAdhesion (
		ORTSCurtius_Kniffler ( 7.5 44 0.161 0.7 )
		ORTSSlipWarningThreshold ( 70 )
		Wheelset (
			Axle (
				ORTSInertia ( 1167 )
				ORTSRadius ( 0.485m )
			)
		)
	)
	comment ( ORTS Friction 18 metric tons / 2 axles / 7.22 square meters )
	ORTSDavis_A ( 264.779549 )
	ORTSDavis_B ( 1.853208 )
	ORTSDavis_C ( 0.864884 )
	ORTSStandstillFriction ( 375.105516 )
	ORTSMergeSpeed ( 0.225305 )
	ORTSBearingType ( Roller )
	ORTSAntislip ( 0 )
	DerailRailHeight ( 4cm )
	DerailRailForce ( 125kN )
	DerailBufferForce ( 250kN )	