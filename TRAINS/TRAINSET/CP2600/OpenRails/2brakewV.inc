
Comment ( *** CP2600 Vaccum Brakes - Wagon Section *** )
	BrakeEquipmentType				( "Vacuum_brake, auxiliary_reservoir, Handbrake" )
	BrakeSystemType					( "Vacuum_single_pipe" )
	MaxBrakeForce					( 114.737kN ) Comment (* Braked at 70% tare mass, coefficient of friction 0.20 *)
	MaxHandbrakeForce					( 66kN )

	MaxReleaseRate 					( 4.0inHg/s ) Comment (* vacuum braked passenger mode *)
	MaxApplicationRate 				( 3.4inHg/s ) Comment (* vacuum braked passenger mode *)
	BrakePipeVolume 					( 1.35ft^3 ) Comment (* based on length of carriage plus 30 feet for bends, branches, standards and hoses *)
	ORTSDirectAdmissionValve 			( 0 )
	ORTSAuxilaryResCapacity 			( 5.76ft^3 )
	ORTSNumberBrakeCylinders 			( 4 )
	ORTSBrakeCylinderSize 				( 12in )
	BrakeCylinderPressureForMaxBrakeBrakeForce 	( 21inHg )

	Comment ( == COBRA Brakeshoes == )
	ORTSBrakeShoeFriction (
		0.0   0.490
		8.0   0.436
		16.1  0.400
		24.1  0.371
		32.2  0.350
		40.2  0.336
		48.3  0.325
		56.3  0.318
		64.4  0.309
		72.2  0.304
		80.5  0.298
		88.5  0.295
		96.6  0.289
		104.6 0.288
	)
	