
Comment (*** Curve Resistance & SuperElevation ***)
	CentreOfGravity ( 0.0m 1.2m 0.0m )
	ORTSTrackGauge ( 1.0m 668.0mm )
	ORTSRigidWheelbase ( 2.0m 500.0mm )
	ORTSUnbalancedSuperelevation ( 180mm )

Comment (*** Friction / Adhesion ***)
	ORTSAdhesion ( ORTSSlipWarningThreshold ( 70 ) )
	ORTSAdhesion (	Wheelset (
			Axle (
				ORTSInertia ( 3633 ) comment ( valor por defeito. calcular mais tarde)
				ORTSRadius ( 0.425m )
			)
		)
	)
 	Comment (Friction Calculator - Passenger Carriage - European UIC - 38;3,016;3,935;20,86;4 )
	ORTSDavis_A ( 417.16 )
	ORTSDavis_B ( 13.41 )
	ORTSDavis_C ( 0.84 )
	ORTSBearingType ( Roller )
	ORTSAntislip ( 0 )
	DerailRailHeight ( 4cm )
	DerailRailForce ( 190kN )
	DerailBufferForce ( 400kN )
	