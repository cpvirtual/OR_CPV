
Comment ( *************** Brakes - Wagon Section - General ********************** )
	BrakeEquipmentType				( "Handbrake, Vacuum_brake" )
	BrakeSystemType					( "Vacuum_single_pipe" )

	MaxBrakeForce					( 31kN )
	MaxHandbrakeForce 				( 7.7kN )
	BrakePipeVolume 					( 1.37ft^3 )
	BrakeCylinderPressureForMaxBrakeBrakeForce 	( 21.0inHg ) Comment (* not yet functional *)

	MaxReleaseRate 					( 50 )
	MaxApplicationRate 				( 10 )
	ORTSDirectAdmissionValve 			( 0 )
	ORTSAuxilaryResCapacity 			( 8.82ft^3 )
	ORTSNumberBrakeCylinders 			( 1 )
	ORTSBrakeCylinderSize 				( 21in )

	ORTSBrakeShoeFriction (
		0.0 0.49
		8.0 0.436
		16.1 0.400
		24.1 0.371
		32.2 0.350
		40.2 0.336
		48.3 0.325
		56.3 0.318
		64.4 0.309 
		72.2 0.304
		80.5 0.298
		88.5 0.295
		96.6 0.289
		104.6 0.288
	)
