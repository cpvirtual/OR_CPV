
Comment ( *** Vaccum Brakes - Wagon Section *** )
	BrakeEquipmentType 				( Vacuum_brake, Handbrake, Auxilary_reservoir )
	BrakeSystemType 					( Vacuum_single_pipe )
	MaxBrakeForce					( 42kN ) Comment (* Braked at 70% tare mass, coefficient of friction 0.20 *)
	MaxHandbrakeForce					( 12kN )
	
	BrakeCylinderPressureForMaxBrakeBrakeForce 	( 21inHg )
	BrakePipeVolume 					( 0.58ft^3 ) Comment (* based on length of carriage plus 30 feet for bends, branches, standards and hoses *)
	ORTSNumberBrakeCylinders 			( 1 )
	ORTSBrakeCylinderSize 				( 18in )
	ORTSAuxilaryResCapacity 			( 2.24ft^3 )
	MaxReleaseRate 					( 50 )
	MaxApplicationRate 				( 10 )
	ORTSDirectAdmissionValve 			( 0 )

	ORTSBrakeShoeFriction (
		0.0 0.50
		8.0 0.288
		16.1 0.241
		24.1 0.211
		32.2 0.187
		40.2 0.173
		48.3 0.161
		56.3 0.150
		64.4 0.142
		72.2 0.139
		80.5 0.134
		88.5 0.129
		96.6 0.125
		104.6 0.123
		112.7 0.121
	)
 Comment (* Cast Iron Brakeshoes *)
 