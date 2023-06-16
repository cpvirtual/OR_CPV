
Comment ( *************** CP2550 Brakes - Wagon Section - General ********************** )
	BrakeEquipmentType					( Distributing_valve, Handbrake )
	BrakeSystemType						( Air_Twin_Pipe )
	MaxBrakeForce						( 103.734kN )
	MaxHandbrakeForce 					( 27.662kN )

	TripleValveRatio					( 2.83 )
	MaxReleaseRate						( 6.362 )   #( 5.6-7.4 )
	MaxApplicationRate					( 29.008 )  #( 23-34 )
	MaxAuxilaryChargingRate					( 15.0 )

	BrakeCylinderPressureForMaxBrakeBrakeForce		( 3.8bar )
	BrakePipeVolume 					( 0.43ft^3 )

	EmergencyResCapacity					( 25l )
	EmergencyResChargingRate				( 1.38bar/s )
	EmergencyResVolumeMultiplier 				( 1 )
	EmergencyBrakeResMaxPressure				( 5bar )

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
