
Comment ( *** General *** )
	Type ( Tender )
	Size ( 3.09m 2.79m 5.53m )
	Mass ( 37.56t )
	WheelRadius ( 0.6235m )
	NumWheels ( 3 )

Comment( ****************** Coupler Information ******************* )
	Coupling (
		Type ( Chain )
		Spring (
			Stiffness ( 1e6N/m 2e6N/m )
			Damping ( 1e6N/m/s 1e6N/m/s )
			Break ( 1e8N 1e8N )
			r0 ( 20cm 40cm )
		)
		CouplingHasRigidConnection (1)
		Velocity (0.1m/s)
	)
	Coupling (
		Type ( Bar )
		Spring (
			Stiffness ( 1e7N/m 1e7N/m )
			Damping ( 0.2e7N/m/s 0.2e7N/m/s )
			Break ( 1e8N 1e8N )
			r0 ( 10cm 1e9 )
		)
		CouplingHasRigidConnection (1)
		Velocity (-0.1m/s)
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
	ORTSTenderWagonWaterMass ( 14955kg )
	ORTSTenderWagonCoalMass ( 4500kg )
	IntakePoint ( -1 0.4 FuelWater )
	IntakePoint ( 1 1.5 FuelCoal )
    	Sound (	"..\\sound\\pt_sound\\genptwag1.sms" )
    	