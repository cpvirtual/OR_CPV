
	Size  ( 3.18m 4.39m 12.831m )
	WheelRadius ( 0.475m )
	InertiaTensor ( Box ( 3m 4m 12m ) )
	ORTSNumberAxles ( 4 )
	ORTSNumberBogies ( 2 )

Comment( ****************** Coupler Information ******************* )
	Coupling (
		Type ( chain )
			Spring (
			Stiffness ( 1e6N/m 5e6N/m )
			Break ( 1220kN 1220kN )
			r0 ( -5cm 0cm )
		)
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
	