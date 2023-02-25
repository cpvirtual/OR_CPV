
Comment (****************** General Information *******************)
	Type ( Carriage )
	Size ( 3.17m 3.8m 22.75m )
	Mass ( 40.5t ) comment ( em carga normal sentados+3pass/m^2)

Comment( ****************** Coupler Information ******************* )
	Coupling (
		Type ( Bar )
		Spring (
			Stiffness ( 1e6N/m 5e6N/m )
			Damping ( 1e6N/m/s 1e6N/m/s )
			Break ( 1200kN 1200kN )
			r0 ( 6cm 9cm )
		)
		CouplingHasRigidConnection ()
		Velocity ( 0.08m/s )
		CouplingUniqueType ( "Scharfenberg Shaku" )
	)

Comment ( *** Curve Resistance & SuperElevation ***)
	CentreOfGravity ( 0.0m 1.2m 0.0m )
	ORTSTrackGauge ( 1.0m 668.0mm )
	ORTSRigidWheelbase ( 2.0m 700.0mm )
	ORTSUnbalancedSuperelevation ( 180mm )

Comment ( ********** Derailment Coefficient **********)
	ORTSLengthBogieCentre ( 16.82m )
	ORTSLengthCarBody ( 22.62m )
	ORTSLengthCouplerFace ( 23.22m )
	ORTSNumberAxles ( 0 )
	ORTSNumberBogies ( 2 )

Comment( *** Friction / Adhesion *** )
	ORTSAdhesion (
		ORTSCurtis_Kniffler ( 7.5 44 0.161 0.7 )
		ORTSSlipWarningThreshold ( 70 )
		Wheelset (
			Axle (
				ORTSInertia ( 3633 ) comment ( valor por defeito. calcular mais tarde)
				ORTSRadius ( 0.420m )
			)
		)
	)
	ORTSBearingType ( Roller )
 	Comment (Friction Calculator - Passenger Carriage - European UIC 1960+ - 40,5;3,17;3,8;22,75;4 )
	ORTSDavis_A ( 430.67 )
	ORTSDavis_B ( 14.30 )
	ORTSDavis_C ( 0.92 )

	ORTSWagonFrontalArea ( 10.9m^2 )
	ORTSWheelFlangeLength ( 19.1516mm )
	ORTSMaximumWheelFlangeAngle ( 1.308996rad )

	ORTSDavisDragConstant ( 0.0004 )
	ORTSStandstillFriction ( 1300.365789 )
	ORTSMergeSpeed ( 0.270329 )
	ORTSAntislip ( 0 )

	DerailRailHeight ( 4cm )
	DerailRailForce ( 203kN )
	DerailBufferForce ( 400kN )
	