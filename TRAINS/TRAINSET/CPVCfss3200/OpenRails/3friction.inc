
	Mass ( 11.6t )
Comment ( *** Curve Resistance & SuperElevation ***)
	CentreOfGravity ( 0.0m 1.2m 0.0m )
	ORTSTrackGauge ( 1.0m 668.0mm )
	ORTSRigidWheelbase ( 6.0m 559.0mm )
	ORTSUnbalancedSuperelevation ( 180mm )

Comment ( ********** Derailment Coefficient ********all data is speculative**)
	ORTSLengthBogieCentre ( 6.559m )
	ORTSLengthCarBody ( 9.999m )
	ORTSLengthCouplerFace ( 11.139m )
	ORTSNumberAxles ( 2 )
	ORTSNumberBogies ( 0 )

Comment( *** Friction / Adhesion *** )
	ORTSAdhesion ( ORTSSlipWarningThreshold ( 70 ) )
	ORTSAdhesion (	Wheelset (
			Axle (
				ORTSInertia ( 3633 ) comment ( valor por defeito. calcular mais tarde)
				ORTSRadius ( 0.425m )
			)
		)
	)
	Comment (Friction Calculator - Passenger Carriage - Friction Bearings - 11,6;3,426;3,879;9,999;2 )
	ORTSDavis_A ( 209 )
	ORTSDavis_B ( 4.1 )
	ORTSDavis_C ( 0.53 )
	DerailRailForce ( 160kN )

	ORTSStandstillFriction ( 1023.8144 )
	ORTSMergeSpeed ( 0.449297 )
	ORTSBearingType ( Friction )
	ORTSAntislip ( 0 )
	DerailRailHeight ( 4cm )
	DerailBufferForce ( 400kN )
	