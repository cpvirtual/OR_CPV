
Comment ( *************** Brakes - Wagon Section - General ********************** )
	BrakeEquipmentType ( "triple_valve,auxilary_reservoir,emergency_brake_reservoir, distributor ,handbrake" )
	BrakeSystemType								( "Air_twin_pipe" ) comment ( Vacuum_piped )
	MaxBrakeForce								( 274.6kN )
	MaxHandbrakeForce 							( 88.3kN )
	BrakePipeVolume 							( 0.27ft^3 )

	TripleValveRatio							( 1.875 )
	MaxApplicationRate							( 1.78bar/s )  #( 1.59-2.34 )
	MaxReleaseRate								( 0.39bar/s )   #( 0.39-0.51 )
	MaxAuxilaryChargingRate							( 1.03bar/s )

	BrakeCylinderPressureForMaxBrakeBrakeForce 				( 3.5bar )

	BrakeDistributorReleaseRate 						( 8 )
	BrakeDistributorApplicationRate 					( 4 )
	BrakeDistributorNormalFullReleasePressure 				( 72.5 )  #MSTSonly
	BrakeDistributorFullServicePressure 					( 55.114 ) #MSTSonly
	BrakeDistributorMaxAuxilaryResPressure 					( 72.5 ) #MSTSonly
	BrakeDistributorEmergencyApplicationRate 				( 20 ) #MSTSonly
	BrakeDistributorEmergencyApplicationPressure 				( 0 ) #MSTSonly
 	BrakeDistributorEmergencyResPressure 					( 72.5 ) #MSTSonly
	BrakeDistributorTrainPipeControlRatio 					( 2.27 ) #MSTSonly
	BrakeDistributorTrainPipeAuxResPressureDifferenceForApplication 	( 1 ) #MSTSonly

	EmergencyResCapacity							( 60l )
	EmergencyResChargingRate						( 1.38bar/s )
	EmergencyResVolumeMultiplier 						( 1.0 )

	ORTSBrakeShoeFriction ( 0.0 0.49 8.0 0.436 16.1 0.4 24.1 0.371 32.2 0.35 40.2 0.336 48.3 0.325 56.3 0.318 64.4 0.309 72.2 0.304 80.5 0.298 88.5 0.295 96.6 0.289 104.6 0.288 )
