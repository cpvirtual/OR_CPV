
Comment ( *************** Brakes - Wagon Section - General ********************** )
	BrakeEquipmentType ( "Triple_valve, Auxilary_reservoir, Emergency_brake_reservoir, Handbrake" )
	BrakeSystemType ( "Air_single_pipe" )
	MaxBrakeForce					( 30kN )
	MaxHandbrakeForce 				( 12kN )

	TripleValveRatio					( 2.5 )
	MaxReleaseRate					( 6 )
	MaxApplicationRate				( 6 )
	MaxAuxilaryChargingRate				( 35 )

	BrakeCylinderPressureForMaxBrakeBrakeForce 	( 70 ) Comment (* not yet functional *)
	BrakePipeVolume 					( 0.76ft^3 )

	EmergencyResCapacity				( 10 )
	EmergencyResChargingRate			( 30 )
	EmergencyBrakeResMaxPressure			( 110 )

	ORTSNumberBrakeCylinders 			( 2 )
	ORTSBrakeCylinderSize 				( 18in )
	ORTSAuxilaryResCapacity 			( 3.24ft^3 )
	ORTSDirectAdmissionValve 			( 0 )

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
