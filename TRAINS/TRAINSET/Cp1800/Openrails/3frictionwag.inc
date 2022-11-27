
	Mass ( 78t )
Comment ( *** Curve Resistance & SuperElevation ***)
	CentreOfGravity ( 0.0m 1.6m 0.0m )
	ORTSTrackGauge ( 1.0m 668.0mm )
	ORTSRigidWheelbase ( 2.0m 200.0mm )
	ORTSUnbalancedSuperelevation ( 180mm )

Comment( *********************** Friction / Adhesion ************************* )
	ORTSAdhesion (
		ORTSCurtis_Kniffler ( 7.5 44 0.161 0.7 )
		ORTSSlipWarningThreshold ( 70 )
		Wheelset (
			Axle (
				ORTSInertia ( 3500 ) comment ( 78*1016,0469088*0,20*0,4699^2 )
				ORTSRadius ( 0.570m )
			)
		)
	)
	ORTSBearingType ( Roller )
 	Comment (Friction Calculator - Electric Loco - Modern Locomotives - 78;3,057;4,3;16,2;4 )
	ORTSDavis_A ( 603.26 )
	ORTSDavis_B ( 27.30 )
	ORTSDavis_C ( 0.94 )
	ORTSAntislip ( 0 )
	DerailRailHeight ( 4cm )
	DerailRailForce ( 390kN )
	DerailBufferForce ( 400kN )
	