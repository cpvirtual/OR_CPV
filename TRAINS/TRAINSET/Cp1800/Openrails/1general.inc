
Comment( ****************** General Information ******************* )
	Size ( 3.022m 4.257m 18.677m )
	WheelRadius ( 0.550m )

Comment( ****************** Coupler Information ******************* )
	Coupling (
		Type ( Chain )
		Spring (
			Stiffness ( 1e6N/m 5e6N/m )
			Damping ( 1e6N/m/s 1e6N/m/s )
			Break ( 1200kN 1200kN )
			r0 ( -5cm 0cm )
		)
		Velocity ( 0.1m/s )
	)
	Buffers (
		Spring (
			Stiffness ( 5e6N/m 5e6N/m )
			Damping ( 1e6N/m/s 1e6N/m/s )
			r0 ( 0m 1e9 )
		)
		Centre ( 0.5m )
		Radius ( 1m )
		Angle ( 0.5deg )
	)