
Comment ( === Brake Systems === )
	BrakesTrainBrakeType 					( "Vacuum_single_pipe_eq" ) Comment (* Dual *)
	BrakesEngineBrakeType 					( "Vacuum_single_pipe"  ) Comment (* air brake *)
	BrakesEngineControllers 				( "Hand, Train, Engine" )

	TrainPipeLeakRate 					( 0.06inHg/s ) Comment ( 0.03 and 0.06 for passenger trains and 0.06 and 0.12 for freight trains)
	ORTSBrakePipeTimeFactor 				( 0.36inHg/s ) Comment ( 0.35 and 0.45 - lower values for passenger trains higher values for freight trains)
	ORTSBrakeServiceTimeFactor 				( 10s)
	ORTSBrakeEmergencyTimeFactor 				( 5s )
Comment (
 	ORTSDoesVacuumBrakeCutPower				( 0 )
 	ORTSBrakeCutsPowerAtBrakePipePressure		( 12.5inHg )
 	ORTSBrakeRestoresPowerAtBrakePipePressure		( 16inHg )
)
 	MaxSteamHeatingPressure					( 60psi )

Comment ( === Exhausters === )
 	ORTSBrakePipeChargingRate				( 0.55inHg/s )

Comment ( == Automatic Brake valve - Train == )
	TrainBrakesControllerMaxSystemPressure 		( 21InHg )

Comment ( == Independent Brake valve - Engine == )
	EngineBrakesControllerMaxSystemPressure		( 21InHg )
	EngineBrakesControllerMaxReleaseRate		( 10 )
	EngineBrakesControllerMaxApplicationRate		( 10 )
 	EngineBrakesControllerMinPressureReduction	( 2inHg )
 	