
Comment ( *** General *** )
	Type ( Tender )
	Size ( 3.1m 3.47m 7.70m )
	InertiaTensor ( Box (3m 3m 7m) )

Comment( ****************** Coupler Information ******************* )
	Coupling (
		Type ( Chain )
		Spring (
			Stiffness ( 1e4N/m 4.5e6N/m )
			Damping ( 1e6N/m/s 1e6N/m/s )
			Break ( 1200kN 1200kN )
			r0 ( 10cm 10cm )
		)
		Velocity ( 0.12m/s )
	)
	Coupling (
		Type ( Bar )
		Spring (
			Stiffness ( 1e4N/m 4.5e6N/m )
			Break ( 1200kN 1200kN )
			r0 ( 0cm 5cm )
		)
		CouplingHasRigidConnection (1)
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

Comment ( *** Outros *** )
	ORTSTenderWagonWaterMass ( 22931kg )
	ORTSTenderWagonCoalMass ( 6000kg )
	IntakePoint ( -2.84 0.5 FuelWater )
	IntakePoint ( 0.89 2.73 FuelCoal )
    	Sound ( "..\\sound\\pt_sound\\genptwag1.sms" )
    	