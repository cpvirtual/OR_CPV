
	Mass ( 45t ) Comment (* tara 22,25t *)
Comment ( *** Curve Resistance & SuperElevation ***)
	CentreOfGravity ( 0.0m 1.2m 0.0m )
	ORTSTrackGauge ( 1m 668mm )
	ORTSRigidWheelbase ( 1m 800mm )
	ORTSUnbalancedSuperelevation ( 180mm )

Comment( *** Friction / Adhesion *** )
	ORTSAdhesion ( ORTSSlipWarningThreshold ( 70 ) )
	ORTSAdhesion (	Wheelset (
			Axle (
				ORTSInertia ( 3533 ) comment ( valor por defeito. calcular mais tarde)
				ORTSRadius ( 0.46m )
			)
		)
	)
 	Comment (Friction Calculator - Good Wagon - Open Auto Racks - 22,25;45;2,5;3,883;13,6;6 )
	ORTSDavis_A ( 624 )
	ORTSDavis_B ( 13.6 )
	ORTSDavis_C ( 1.65 )
	DerailRailForce ( 225kN )
	ORTSBearingType ( Roller )
	ORTSAntislip ( 0 )
	DerailRailHeight ( 4cm )
	DerailBufferForce ( 400kN )
	