
Comment ( *************** Brakes - Wagon Section - General ********************** )
	BrakeEquipmentType				( Handbrake, Vacuum_brake, Auxilary_reservoir )
	BrakeSystemType					( Vacuum_single_pipe )
	MaxBrakeForce					( 54.917kN ) Comment (* Braked at 70% tare mass, coefficient of friction 0.50 *)
	MaxHandbrakeForce					( 13.729kN )
	BrakePipePolume 					( 1.33ft^3 ) Comment (* based on length of carriage plus 30 feet for bends, branches, standards and hoses *)

	MaxReleaseRate 					( 50 )
	MaxApplicationRate 				( 10 )
	ORTSDirectAdmissionValve 			( 0 )
	ORTSAuxilaryResCapacity 			( 5.76ft^3 )
	ORTSNumberBrakeCylinders 			( 1 )
	ORTSBrakeCylinderSize 				( 15in )

	BrakeCylinderPressureForMaxBrakeBrakeForce 	( 21inHg ) Comment (* not yet functional *)

	ORTSBrakeShoeFriction (
		0.0   0.500
		8.0   0.288
		16.1  0.241
		24.1  0.211
		32.2  0.187
		40.2  0.173
		48.3  0.161
		56.3  0.150
		64.4  0.142
		72.2  0.139
		80.5  0.134
		88.5  0.129
		96.6  0.125
		104.6 0.123
		112.7 0.121
	)
	Comment ( Cast Iron Brakeshoes )
