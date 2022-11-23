
Comment ( *************** Brakes - Wagon Section - General ********************** )
	BrakeEquipmentType( "Triple_valve, Auxilary_reservoir, Emergency_brake_reservoir" )
	BrakeSystemType( "Air_single_pipe" )
	MaxBrakeForce ( 15kN )
	MaxHandbrakeForce 					( 6kN )

	TripleValveRatio						( 2.83 )
	MaxReleaseRate						( 0.44bar/s ) Comment ( UIC standard locomotive Air_twin_pipe – Passenger Braking Mode )
	MaxApplicationRate					( 1.9bar/s ) Comment ( UIC standard locomotive Air_twin_pipe – Passenger Braking Mode )
	MaxAuxilaryChargingRate					( 1.38bar/s )
	
	BrakeCylinderPressureForMaxBrakeBrakeForce 	( 3.0bar )
	BrakePipeVolume 						( 0.33ft^3 ) #( calculado em coalstonewcastle.com.au )
	ORTSNumberBrakeCylinders 				( 12 )
	ORTSBrakeCylinderSize 					( 8in )

	EmergencyResCapacity					( 75l )
	EmergencyResChargingRate				( 1.38bar/s )
	EmergencyResVolumeMultiplier 				( 1 )
	EmergencyBrakeResMaxPressure				( 5bar )

      Comment ( == cast iron brake shoes == )
	ORTSBrakeShoeFriction (
		0 0.31
		1 0.30
		2 0.28
		3 0.27
		4 0.26 
		5 0.25
		7 0.24
		8 0.23
		9 0.22
		12 0.21
		14 0.20
		17 0.19
		20 0.18
		24 0.17 
		29 0.16 
		34 0.15
		40 0.14
		47 0.13
		55 0.12
		66 0.11
		84 0.10
		115 0.09
		160 0.09
	) 
