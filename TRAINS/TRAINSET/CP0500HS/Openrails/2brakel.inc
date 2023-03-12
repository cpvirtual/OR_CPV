
Comment ( *** Vaccum Brakes - Wagon Section *** )
	BrakeEquipmentType				( Vacuum_brake, Auxilary_reservoir )
	BrakeSystemType					( Vacuum_single_pipe )
	MaxBrakeForce					( 213kN ) Comment (* Braked at 70% tare mass, coefficient of friction 0.50 *)
	BrakeCylinderPressureForMaxBrakeBrakeForce 	( 21.0inHg ) Comment (* not yet functional *)

	ORTSNumberBrakeCylinders 			( 1 )
	ORTSBrakeCylinderSize 				( 24in )
	ORTSAuxilaryResCapacity 			( 4.25ft^3 )
	BrakePipePolume 					( 0.67ft^3 )
	
	MaxReleaseRate 					( 2.5inHg/s ) 
	MaxApplicationRate 				( 1.3inHg/s )
	MaxAuxilaryChargingRate				( 20.0 )  

	ORTSBrakeShoeFriction (
		0   0.31
		1   0.30 
		2   0.28 
		3   0.27 
		4   0.26
		5   0.25
		7   0.24
		8   0.23
		9   0.22
		12  0.21
		14  0.20
		17  0.19
		20  0.18
		24  0.17
		29  0.16
		34  0.15
		40  0.14
		47  0.13
		55  0.12
		66  0.11
		84  0.10
		115 0.09 
		160 0.09
	)
	Comment (* Cast Iron Brakeshoes *)


