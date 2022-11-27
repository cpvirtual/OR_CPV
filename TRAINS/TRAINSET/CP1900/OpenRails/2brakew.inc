
Comment ( *************** Brakes - Wagon Section - General ********************** )
	BrakeEquipmentType					( Distributor, Auxiliary_reservoir, Handbrake )
	BrakeSystemType						( Air_Twin_Pipe )
	MaxBrakeForce						( 367.693kN )
	MaxHandbrakeForce 					( 30kN )

	TripleValveRatio						( 2.83 )
	MaxReleaseRate						( 0.62bar/s ) 	#( valores de ref 0.39-0.51 )
	MaxApplicationRate					( 1.38bar/s )	#( valores de ref1.59-2.34 )
	MaxAuxilaryChargingRate					( 1.38bar/s )

	BrakeCylinderPressureForMaxBrakeBrakeForce	( 3.8bar )		#( verificado em manual de conducao )
	BrakePipeVolume 						( 14l )		#( calculado em coalstonewcastle.com.au )
	ORTSNumberBrakeCylinders 				( 12 )
	ORTSBrakeCylinderSize 					( 8in )

	EmergencyResCapacity					( 25l )
	EmergencyResChargingRate				( 1.38bar/s )
	EmergencyResVolumeMultiplier 				( 1 )
	EmergencyBrakeResMaxPressure				( 5bar )

	Comment ( == COBRA Brakeshoes == )
	ORTSBrakeShoeFriction (
		0.0 0.49
		8.0 0.436
		16.1 0.4
		24.1 0.371
		32.2 0.35
		40.2 0.336
		48.3 0.325
		56.3 0.318
		64.4 0.309
		72.2 0.304
		80.5 0.298
		88.5 0.295
		96.6 0.289
		104.6 0.288
		112.7 0.286
	)
        