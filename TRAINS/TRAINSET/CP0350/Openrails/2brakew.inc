
Comment ( *************** Brakes - Wagon Section - General ********************** )
    	BrakeEquipmentType                                    ( "Distributor, Auxiliary_reservoir, emergency_brake_reservoir, EP_Brake, Handbrake" )
	BrakeSystemType							( "EP" )
	MaxBrakeForce							( 84kN )  		#(* Braked at 75% tare mass, coefficient of friction 0.20 *)
	MaxHandbrakeForce 						( 22kN )

	TripleValveRatio							( 2.83 )
	MaxReleaseRate							( 0.51bar/s )   	#( 0.39-0.51 )
	MaxApplicationRate						( 2bar/s )  	#( 1.59-2.34 )
	MaxAuxilaryChargingRate						( 1.38bar/s )

	BrakeCylinderPressureForMaxBrakeBrakeForce 		( 3.8bar ) 		#( verificado em manual de conducao )
	BrakePipeVolume 							( 18.7l ) 		#( calculado em coalstonewcastle.com.au )

        BrakeDistributorReleaseRate					( 15 )
        BrakeDistributorApplicationRate				( 20 )

	EmergencyResCapacity						( 75l ) 		#( 2.064ft^3 )
	EmergencyResChargingRate					( 1.38bar/s )
	EmergencyResVolumeMultiplier 					( 1.0 )
	EmergencyBrakeResMaxPressure                          ( 5bar )

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
