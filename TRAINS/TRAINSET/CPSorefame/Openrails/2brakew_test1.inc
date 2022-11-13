
Comment ( *************** Freio Ar comprimido UIC ********************** )
	BrakeEquipmentType ( "Triple_Valve,Distributor,auxilary_reservoir,ep_brake,emergency_brake_reservoir,handbrake" )
	BrakeSystemType								( "Air_Twin_Pipe" )



	TripleValveRatio								( 2.78 )
	MaxReleaseRate								( 0.39bar/s )   #( 0.39-0.51 )
	MaxApplicationRate							( 2bar/s )  #( 1.59-2.34 )
	MaxAuxilaryChargingRate							( 1.03bar/s )

	BrakeCylinderPressureForMaxBrakeBrakeForce 			( 3.5bar )

      # comment (
	BrakeDistributorTrainPipeAuxResPressureDifferenceForApplication 	( 1 )
	BrakeDistributorEmergencyApplicationPressure 			( 0 )
	BrakeDistributorEmergencyApplicationRate 				( 20 )
	BrakeDistributorFullServicePressure 				( 55.114 )
	BrakeDistributorMaxAuxilaryResPressure 				( 72.5 )
	BrakeDistributorEmergencyResPressure 				( 72.5 )
	BrakeDistributorReleaseRate 						( 15 )
	BrakeDistributorApplicationRate 					( 20 )
	BrakeDistributorTrainPipeControlRatio 				( 2.27 )
	BrakeDistributorNormalFullReleasePressure 			( 72.5 )
	)

	EmergencyResCapacity							( 60l )
	EmergencyResChargingRate						( 1.38bar/s )
	EmergencyResVolumeMultiplier 						( 1.0 )

	ORTSBrakeShoeFriction ( 0.0 0.49 8.0 0.436 16.1 0.4 24.1 0.371 32.2 0.35 40.2 0.336 48.3 0.325 56.3 0.318 64.4 0.309 72.2 0.304 80.5 0.298 88.5 0.295 96.6 0.289 104.6 0.288 )
