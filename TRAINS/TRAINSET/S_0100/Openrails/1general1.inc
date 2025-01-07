
        Size ( 3.448m 3.508m 22.44m )
        Mass ( 36t )
	WheelRadius ( 0.35m )
	InertiaTensor ( Box ( 3m 3m 22m ) )
	NumWheels ( 4 )

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
	CentreOfGravity ( 0.0m 1.2m 0.0m )
	ORTSTrackGauge ( 1.0m 668.0mm )
	ORTSRigidWheelbase ( 2.0m 400.0mm )
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
				ORTSInertia ( 31611 ) comment ( 36*1016,0469088*0,20*0,4699^2 )
				ORTSRadius ( 0.35m )
			)
		)
	)
	ORTSBearingType ( Roller )
 	Comment (Friction Calculator - Diesel Mechanical - Modern locomotives - 35;35;3,16;3,455;21,4;4;2;1 )
	ORTSDavis_A ( 671 )
	ORTSDavis_B ( 24.5 )
	ORTSDavis_C ( 3.9 )
	ORTSWagonFrontalArea ( 11.148m^2 )
	ORTSDavisDragConstant ( 0.0015 )
	ORTSStandstillFriction ( 1300.365789 )
	ORTSMergeSpeed ( 0.270329 )
	ORTSAntislip ( 0 )
	DerailRailHeight ( 4cm )
	DerailRailForce ( 175kN )
	DerailBufferForce ( 330kN )
