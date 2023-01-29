
	Mass ( 30t ) Comment (* tara 27,5t *)
Comment ( ***************** Curve Resistance & SuperElevation ******************)
	CentreOfGravity ( 0.0m 1.2m 0.0m )
	ORTSTrackGauge ( 1.0m 668.0mm )
	ORTSRigidWheelbase ( 2.0m 500.0mm )
	ORTSUnbalancedSuperelevation ( 180mm )

Comment ( ********** Derailment Coefficient **********)
	ORTSLengthBogieCentre ( 11.9m )
	ORTSLengthCarBody ( 17.9m )
	ORTSLengthCouplerFace ( 19.2m )
	ORTSNumberAxles ( 4 )
	ORTSNumberBogies ( 2 )


Comment( *********************** Friction / Adhesion ************************* )
	ORTSAdhesion ( ORTSSlipWarningThreshold ( 70 ) )
	ORTSAdhesion (	Wheelset (
			Axle (
				ORTSInertia ( 3633 ) comment ( valor por defeito. calcular mais tarde)
				ORTSRadius ( 0.420m )
			)
		)
	)
	ORTSBearingType ( Roller )
 	Comment (Friction Calculator - Electric Loco - Modern Locomotives - 78;3,057;4,3;16,2;4 )
 	ORTSDavis_A ( 370.66 )
	ORTSDavis_B ( 10.59 )
	ORTSDavis_C ( 0.64 )
	ORTSAntislip ( 0 )
	DerailRailHeight ( 4cm )
	DerailRailForce ( 150kN )
	DerailBufferForce ( 400kN )
	