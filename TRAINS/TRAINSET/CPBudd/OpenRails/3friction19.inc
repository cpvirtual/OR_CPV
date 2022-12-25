
	Mass ( 32t ) Comment (* tara 29,5t *)
Comment ( *** Curve Resistance & SuperElevation ***)
	CentreOfGravity ( 0.0m 1.2m 0.0m )
	ORTSTrackGauge ( 1.0m 668.0mm )
	ORTSRigidWheelbase ( 2.0m 745.0mm )
	ORTSUnbalancedSuperelevation ( 180mm )

Comment( *** Friction / Adhesion *** )
	ORTSAdhesion ( ORTSSlipWarningThreshold ( 70 ) )
	ORTSAdhesion (	Wheelset (
			Axle (
				ORTSInertia ( 3633 ) comment ( valor por defeito. calcular mais tarde)
				ORTSRadius ( 0.425m )
			)
		)
	)
	Comment (Friction Calculator - Passenger Carriage - CFF Voiture Legere - 32;3,061;3,625;22,42;4 )
	ORTSDavis_A ( 418.59 )
	ORTSDavis_B ( 11.30 )
	ORTSDavis_C ( 0.90 )
	DerailRailForce ( 160kN )

	ORTSBearingType ( Roller )
	ORTSAntislip ( 0 )
	DerailRailHeight ( 4cm )
	DerailBufferForce ( 400kN )
	