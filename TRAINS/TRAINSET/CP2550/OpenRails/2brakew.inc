
Comment ( *************** CP2500 Brakes - Wagon Section - General ********************** )
	BrakeEquipmentType				( Distributor, Auxilary_reservoir, Handbrake )
	BrakeSystemType					( Air_twin_pipe )
	MaxBrakeForce					( 105.911kN )
	MaxHandbrakeForce 				( 28.243kN )

	TripleValveRatio				( 2.83 )
	MaxReleaseRate					( 0.51bar/s )   #( 0.39-0.51 )
	MaxApplicationRate				( 2bar/s )  #( 1.59-2.34 )
	MaxAuxilaryChargingRate				( 1.38bar/s )

	BrakeCylinderPressureForMaxBrakeBrakeForce	( 3.8bar ) #( verificado em manual de conducao )
	BrakePipeVolume 				( 0.43ft^3 )

 	EmergencyResCapacity				( 75l )
	EmergencyResChargingRate			( 1.38bar/s )
	EmergencyResVolumeMultiplier 			( 1 )
	EmergencyBrakeResMaxPressure			( 5bar )
	#( ORTSEmergencyValveActuationRate			( ) )	 
	ORTSMainResPipeAuxResCharging				( False )
	ORTSEPBrakeControlsBrakePipe				( 1 )

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
	Comment ( == COBRA Brakeshoes == )
