
	Type ( Engine )
      Size ( 3.301 4.1 8.5m )
	InertiaTensor ( Box( 3 4 8m ) )
	WheelRadius ( 0.475m )
      IntakePoint ( -4 0.4 FuelDiesel )

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
	