
Comment ( *************** Freio EP ********************** )
    	BrakeEquipmentType					( Distributor, Auxilary_reservoir, Ep_brake, Handbrake )
	BrakeSystemType						( EP )
	MaxBrakeForce						( 69kN )
	MaxHandbrakeForce 					( 8kN )

	TripleValveRatio						( 2.83 )
	MaxReleaseRate						( 0.62bar/s )   #( 0.39-0.51 )
	MaxApplicationRate					( 1.59bar/s )  #( 1.59-2.34 )
	MaxAuxilaryChargingRate					( 1.38bar/s )
	ORTSNumberBrakeCylinders 				( 2 )
	ORTSBrakeCylinderSize 					( 10in )

	BrakeCylinderPressureForMaxBrakeBrakeForce 	( 3.8bar ) #( verificado em manual de conducao )
	BrakePipeVolume 						( 21l ) #( calculado em coalstonewcastle.com.au )

	EmergencyResCapacity					( 60l ) #( 2.064ft^3 )
	EmergencyResChargingRate				( 1.38bar/s )
	EmergencyResVolumeMultiplier 				( 1.0 )
	EmergencyBrakeResMaxPressure                    ( 5bar )

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
	Comment ( == COBRA Brakeshoes == )
 