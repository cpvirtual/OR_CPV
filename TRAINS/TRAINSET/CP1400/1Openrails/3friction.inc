
	Mass ( 64.4t )
Comment ( *** Curve Resistance & SuperElevation ***)
	CentreOfGravity ( 0.0m 1.6m 0.0m )
	ORTSTrackGauge ( 1.0m 668.0mm )
	ORTSRigidWheelbase ( 2.0m 360.0mm )
	ORTSUnbalancedSuperelevation ( 180mm )

Comment( *********************** Friction / Adhesion ************************* )
	ORTSAdhesion ( ORTSCurtius_Kniffler ( 7.5 44 0.161 0.7 ) )
	ORTSAdhesion ( ORTSSlipWarningThreshold ( 70  ) )
	ORTSAdhesion (	Wheelset (
			Axle (
				ORTSInertia ( 2890 ) comment ( 64,4*1016,0469088*0,20*0,4699^2 )
				ORTSRadius ( 0.475m )
			)
		)
	)
	ORTSBearingType ( Roller )
	Comment (Friction Calculator - Diesel Loco - Modern Locomotives - 64.4;3;4,355;11,58;4 )
 	ORTSDavis_A ( 548 )
	ORTSDavis_B ( 22.5 )
	ORTSDavis_C ( 4 )
	ORTSAntislip ( 0 )
	DerailRailHeight ( 4cm )
	DerailRailForce ( 322kN )
	DerailBufferForce ( 400kN )
	