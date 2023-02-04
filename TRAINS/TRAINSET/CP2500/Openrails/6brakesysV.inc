
Comment (*** Brake Systems ***)
 	BrakesTrainBrakeType ( "Vacuum_single_pipe_eq" )
	BrakesEngineBrakeType ( "Vacuum_single_pipe"  )
	BrakesEngineControllers ( "Hand, Train, Engine" )

	VacuumBrakesMinBoilerPressureMaxVacuum			( 110 )
	ORTSBrakePipeChargingRate 				( 38InHg/s )
	TrainPipeLeakRate 					( 0.06 ) Comment ( 0.03 and 0.06 for passenger trains and 0.06 and 0.12 for freight trains)
	ORTSBrakePipeTimeFactor 				( 0.36 ) Comment ( 0.35 and 0.45 - lower values for passenger trains higher values for freight trains)
	ORTSBrakeServiceTimeFactor 				( 20.09 )
	ORTSBrakeEmergencyTimeFactor 				( 0.1 )
	ORTSBrakePipeDischargeTimeMult 				( 1.5 )

	VacuumBrakesHasVacuumPump				( 0 )
	ORTSVacuumBrakesMainResVolume 				( 200 )
	ORTSVacuumBrakesMainResMaxVacuum 			( 23 )
	ORTSVacuumBrakesMainResChargingRate 			( 0.2 )

Comment ( == Automatic Brake valve - Train == )
	TrainBrakesControllerMaxSystemPressure 			( 21 )
	TrainBrakesControllerMinSystemPressure			( 0 )
	TrainBrakesControllerFullServicePressureDrop 		( 25 )

Comment ( == Independent Brake valve - Engine == )
	EngineBrakesControllerMaxSystemPressure			( 21 )
	EngineBrakesControllerMinSystemPressure			( 0 )
	EngineBrakesControllerFullServicePressureDrop 		( 25 )
 	EngineBrakesControllerHasProportionalBrake		( 1 )
 	EngineBrakesProportionalBrakeLag			( 0.9 )
 	