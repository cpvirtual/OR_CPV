
Comment ( *************** Brakes - Wagon Section - General ********************** )
	BrakeEquipmentType( "Handbrake, Triple_valve, Auxilary_reservoir" )
	BrakeSystemType								( "Air_single_pipe" ) comment ( Vacuum_piped )
	MaxBrakeForce								( 470.7kN )
	MaxHandbrakeForce 							( 88.3kN )
	BrakePipeVolume 							( 0.33ft^3 )
	TripleValveRatio							( 2.27 )
	MaxReleaseRate								( 3.06 )
	MaxApplicationRate							( 29.008 )
	MaxAuxilaryChargingRate							( 15.0 )

	BrakeCylinderPressureForMaxBrakeBrakeForce 				( 55.114 )
	BrakeDistributorTrainPipeAuxResPressureDifferenceForApplication 	( 1 )
	BrakeDistributorEmergencyApplicationPressure 				( 0 )
	BrakeDistributorEmergencyApplicationRate 				( 20 )
	BrakeDistributorFullServicePressure 					( 51.4 )
	BrakeDistributorMaxAuxilaryResPressure 					( 72.5 )
	BrakeDistributorEmergencyResPressure 					( 72.5 )
	BrakeDistributorReleaseRate 						( 50 )
	BrakeDistributorApplicationRate 					( 20 )
	BrakeDistributorTrainPipeControlRatio 					( 2.27 )
	BrakeDistributorNormalFullReleasePressure 				( 72.5 )

	EmergencyResCapacity							( 0.883ft^3 )
	EmergencyResChargingRate						( 20.0 )
	EmergencyResVolumeMultiplier 						( 1.0 )
	EmergencyBrakeResMaxPressure 						( 90 )
	EmergencyBrakeTriggerRate						( 16 )
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
	)
