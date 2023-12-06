
Comment ( *************** Brakes - Wagon Section - General ********************** )
	BrakeEquipmentType ( "Distributor, Auxilary_reservoir, Handbrake" )
	BrakeSystemType								( "Air_twin_pipe" )
	ORTSMaxBrakeShoeForce 							( 167.693kN )
	ORTSNumberCarBrakeShoes 						( 24 )
	ORTSBrakeShoeType 							( "High_Friction_Composite" )

	MaxHandbrakeForce 							( 44.718kN )
	NumberOfHandbrakeLeverSteps						( 100 )

	TripleValveRatio							( 2.5 )
	ORTSBrakeCylinderVolume 						( 3050.0in^3 )
	ORTSCylinderSpringPressure 						( 5.0psi )
	MaxApplicationRate							( 1.8bar/s )  #( 1.59-2.34 )
	MaxReleaseRate								( 0.40bar/s )   #( 0.39-0.51 )
	MaxAuxilaryChargingRate							( 1.03bar/s )

    ORTSEmergencyDumpValveRate                      ( 80.0psi/s )
    ORTSEmergencyValveActuationRate                 ( 20.0psi/s )
    ORTSQuickServiceApplicationRate                 ( 16.0psi/s )
    ORTSQuickServiceLimit                           ( 15.0psi )
    ORTSQuickServiceVentRate                        ( 2.5psi/s )
    ORTSAcceleratedApplicationFactor                ( 0.5 )
    ORTSAcceleratedApplicationMaxVentRate           ( 1.0psi/s )
    ORTSUniformChargingThreshold                    ( 3.0psi )
    ORTSUniformChargingRatio                        ( 2 )
    ORTSEmergencyResQuickRelease                    ( 1 )

	BrakePipeVolume 							( 0.48ft^3 )

    ORTSBrakeRelayValveRatio ( 1.0 )
    ORTSEngineBrakeRelayValveRatio ( 1.6 )
    ORTSBrakeRelayValveApplicationRate ( 24.0psi/s )
    ORTSBrakeRelayValveReleaseRate ( 32.0psi/s )

    ORTSMaxTripleValveCylinderPressure ( 100.0psi )
    BrakeCylinderPressureForMaxBrakeBrakeForce ( 77.0psi )


comment (
	BrakeCylinderPressureForMaxBrakeBrakeForce 				( 3.8bar )

	BrakeDistributorApplicationRate 					( 8 )
	BrakeDistributorReleaseRate 						( 4 )
	BrakeDistributorNormalFullReleasePressure 				( 72.5 ) #(5bar - MSTS only )
	BrakeDistributorFullServicePressure 					( 46.412 ) #(3.2bar - MSTS only )
	BrakeDistributorMaxAuxilaryResPressure 					( 72.5 ) #( 5bar - MSTS only )
	BrakeDistributorEmergencyApplicationRate 				( 25  ) #(1.72bar/s #MSTSonly )
	BrakeDistributorEmergencyApplicationPressure 				( 7.252 ) #(0.5bar n o verificado em manual de conducao - MSTS only )
	BrakeDistributorEmergencyResPressure 					( 72.5 ) #( 3.2bar - MSTS only )
	BrakeDistributorTrainPipeControlRatio 					( 2.27 ) #MSTSonly
	BrakeDistributorTrainPipeAuxResPressureDifferenceForApplication 	( 1 ) #MSTSonly

	EmergencyResCapacity							( 3.604ft^3 )
	EmergencyResChargingRate						( 1.38bar/s )
	EmergencyResVolumeMultiplier 						( 1.0 )

	ORTSBrakeShoeFriction ( 0.0 0.49 8.0 0.436 16.1 0.4 24.1 0.371 32.2 0.35 40.2 0.336 48.3 0.325 56.3 0.318 64.4 0.309 72.2 0.304 80.5 0.298 88.5 0.295 96.6 0.289 104.6 0.288 )
        Comment ( == COBRA Brakeshoes == )
)