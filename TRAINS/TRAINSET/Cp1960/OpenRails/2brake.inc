
Comment ( *************** Brakes - Wagon Section - General ********************** )
	BrakeEquipmentType ( "Triple_Valve,Distributor,auxilary_reservoir,emergency_brake_reservoir,handbrake" )
	BrakeSystemType								( "Air_twin_pipe" )
	MaxBrakeForce								( 167.693kN )
	MaxHandbrakeForce 							( 44.718kN )

	TripleValveRatio							( 2.5 )
	MaxApplicationRate							( 1.8bar/s )  #( 1.59-2.34 )
	MaxReleaseRate								( 0.40bar/s )   #( 0.39-0.51 )
	MaxAuxilaryChargingRate							( 1.03bar/s )

	BrakeCylinderPressureForMaxBrakeBrakeForce 				( 3.8bar )
	BrakePipeVolume 							( 0.48ft^3 )

	BrakeDistributorApplicationRate 					( 8 )
	BrakeDistributorReleaseRate 						( 4 )
	BrakeDistributorNormalFullReleasePressure 				( 72.5 ) #(5bar - MSTS only )
	BrakeDistributorFullServicePressure 					( 46.412 ) #(3.2bar - MSTS only )
	BrakeDistributorMaxAuxilaryResPressure 					( 72.5 ) #( 5bar - MSTS only )
	BrakeDistributorEmergencyApplicationRate 				( 25  ) #(1.72bar/s #MSTSonly )
	BrakeDistributorEmergencyApplicationPressure 				( 7.252 ) #(0.5bar não verificado em manual de conducao - MSTS only )
	BrakeDistributorEmergencyResPressure 					( 72.5 ) #( 3.2bar - MSTS only )
	BrakeDistributorTrainPipeControlRatio 					( 2.27 ) #MSTSonly
	BrakeDistributorTrainPipeAuxResPressureDifferenceForApplication 	( 1 ) #MSTSonly

	EmergencyResCapacity							( 3.604ft^3 )
	EmergencyResChargingRate						( 1.38bar/s )
	EmergencyResVolumeMultiplier 						( 1.0 )

	ORTSBrakeShoeFriction ( 0.0 0.49 8.0 0.436 16.1 0.4 24.1 0.371 32.2 0.35 40.2 0.336 48.3 0.325 56.3 0.318 64.4 0.309 72.2 0.304 80.5 0.298 88.5 0.295 96.6 0.289 104.6 0.288 )
        Comment ( == COBRA Brakeshoes == )
        