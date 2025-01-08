
	Size  ( 3.0 3.285 8.5m )
	Mass ( 42t )
	WheelRadius ( 0.545m )
	NumWheels ( 3 )

Comment( ****************** Coupler Information ******************* )
	Coupling (
		Type ( Chain )
		Spring (
			Stiffness ( 1e6N/m 5e6N/m )
			Damping ( 1e6N/m/s 1e6N/m/s )
			Break ( 1200kN 1200kN )
			r0 ( 6cm 9cm )
		)
		CouplingHasRigidConnection ()
		Velocity ( 0.12m/s )
	)
	Coupling (
		Type ( Chain )
		Spring (
			Stiffness ( 1e6N/m 5e6N/m )
			Damping ( 1e6N/m/s 1e6N/m/s )
			Break ( 1200kN 1200kN )
			r0 ( 6cm 9cm )
		)
		CouplingHasRigidConnection ()
		Velocity ( -0.12m/s )
	)
	Buffers (
		Spring (
			Stiffness ( 1e6N/m 5e6N/m )
			Damping ( 1.3e6N/m/s 3.8e6N/m/s )
			r0 ( 0m 1e9 )
		)
		Centre ( 0.5m )
		Radius ( 1m )
		Angle ( 0.5deg )
	)

Comment ( *** Curve Resistance & SuperElevation ***)
	CentreOfGravity ( 0.0m 1.3m 0.0m )
	ORTSTrackGauge ( 1.0m 668.0mm )
	ORTSRigidWheelbase ( 2.0m 950.0mm )
	ORTSUnbalancedSuperelevation ( 180mm )

Comment( *********************** Friction / Adhesion ************************* )
	ORTSAdhesion (
		ORTSCurtis_Kniffler ( 7.5 44 0.161 0.7 )
	)
	ORTSAdhesion (
		ORTSSlipWarningThreshold ( 70 )
	)
	ORTSAdhesion (
		Wheelset (
			Axle (
				ORTSInertia ( 3633 ) comment ( valor por defeito. calcular mais tarde)
				ORTSRadius ( 0.545m )
			)
		)
	)
	ORTSBearingType ( Roller )
 	Comment (Friction Calculator - Electric Loco - Modern Locomotives - 42;3,365;2,9;7,277;3 )
	ORTSDavis_A ( 633.11 )
	ORTSDavis_B ( 12.69 )
	ORTSDavis_C ( 5.62 )
	ORTSAntislip ( 0 )
	DerailRailHeight ( 4cm )
	DerailRailForce ( 105kN )
	DerailBufferForce ( 400kN )
