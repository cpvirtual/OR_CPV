
	Mass ( 121t )

Comment ( ***************** Curve Resistance & SuperElevation *****************)
	CentreOfGravity ( 0.0m 1.7m 0.0m )
	ORTSTrackGauge ( 1.0m 668.0mm )
	ORTSRigidWheelbase ( 1m 702mm )
	ORTSUnbalancedSuperelevation ( 180mm )

Comment ( ********** Derailment Coefficient **********)
	ORTSNumberAxles ( 0 )
	ORTSNumberBogies ( 2 )
	ORTSLengthBogieCentre ( 11.586m )
	ORTSLengthCarBody ( 17.40m )
	ORTSLengthCouplerFace ( 19.084m )
	ORTSWheelFlangeLength ( 19.1516mm )
	ORTSMaximumWheelFlangeAngle ( 1.308996rad )

Comment ( *********************** Friction / Adhesion ************************* )
	ORTSAdhesion (
		ORTSCurtius_Kniffler ( 6.438 20.971 0.161 0.7 )
		ORTSSlipWarningThreshold ( 70 )
		Wheelset (
			Axle (
				ORTSInertia ( 6787 ) comment ( 121*1016,0469088*0,25*0,4699^2 )
				ORTSRadius ( 0.508m )
			)
		)
	)
	ORTSBearingType ( Roller )
 	Comment (Friction Calculator - Diesel Electric Loco - CN Passenger locos - 121;3,048;3,937;19;6 )
	ORTSDavis_A ( 1298 )
	ORTSDavis_B ( 36.6 )
	ORTSDavis_C ( 5.47 )
	ORTSTrailLocomotiveResistanceFactor ( 0.184 )
	ORTSDavisDragConstant ( 0.0022 )
	ORTSWagonFrontalArea ( 11.9m^2 )

	ORTSStandstillFriction ( 1300.365789 )
	ORTSMergeSpeed ( 0.270329 )
	ORTSAntislip ( 0 )