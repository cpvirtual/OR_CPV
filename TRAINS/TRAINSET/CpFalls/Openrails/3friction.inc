
	Mass ( 24.4t ) Comment (* tara 24,4t *)

Comment ( *** Curve Resistance & SuperElevation ***)
	CentreOfGravity ( 0.0m 1.3m 0.0m )
	ORTSTrackGauge ( 1668mm )
	ORTSRigidWheelbase ( 2000mm )
	ORTSUnbalancedSuperelevation ( 180mm )

Comment( *** Friction / Adhesion *** )
	ORTSAdhesion (
		ORTSCurtius_Kniffler ( 7.5 44 0.161 0.7 )
		ORTSSlipWarningThreshold ( 70 )
		Wheelset (
			Axle (
				ORTSInertia ( 3633 ) comment ( valor por defeito. calcular mais tarde)
				ORTSRadius ( 0.46m )
			)
		)
	)
 	Comment (Friction Calculator - Good Wagon - Bogie Wagons Covered Hoppers - 28,6;80;3,118;4,045;14,346;4 )
		comment ( 24.4 metric tons / 4 axles / 10.8 square meters )
		ORTSDavis_A ( 358.923389 )
		ORTSDavis_B ( 2.987438 )
		ORTSDavis_C ( 1.293732 )
		ORTSStandstillFriction ( 508.476366 )
		ORTSMergeSpeed ( 0.204429 )
		ORTSBearingType ( Roller )
	DerailRailForce ( 143kN )
	ORTSAntislip ( 0 )
	DerailRailHeight ( 4cm )
	DerailBufferForce ( 400kN )
	