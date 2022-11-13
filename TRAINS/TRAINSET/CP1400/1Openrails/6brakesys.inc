
Comment ( *** Braking system *** )
	BrakesEngineBrakeType( "Air_twin_pipe"  )
	BrakesTrainBrakeType( "Air_twin_pipe" )
        BrakesEngineControllers( "Independent, Train, Dynamic" )
	BrakeCutsPowerAtBrakeCylinderPressure ( 69.62 )  

Comment ( == Compressor == )
	AirBrakesMainMaxAirPressure				( 123.282 )
	AirBrakesCompressorRestartPressure			( 108.778 )
	AirBrakesMainResVolume					( 17.66ft^3 )
	ORTSBrakePipeChargingRate 				( 40.0 )
	ORTSMainResChargingRate 				( 0.397 )
	TrainPipeLeakRate					( 0.0833 )
	ORTSBrakeServiceTimeFactor 				( 1.009 )
	ORTSBrakeEmergencyTimeFactor 				( 0.1 )

Comment ( == Automatic Brake valve - Train == )
	TrainBrakesControllerMaxSystemPressure			( 72.5 )
	TrainBrakesControllerMaxReleaseRate			( 3.07 )
	TrainBrakesControllerMaxQuickReleaseRate		( 6.14 )
	TrainBrakesControllerMaxApplicationRate			( 12.47 )
	TrainBrakesControllerEmergencyApplicationRate		( 24.94 )
	TrainBrakesControllerFullServicePressureDrop		( 26.11 )
	TrainBrakesControllerMinPressureReduction 		( 7.25 )

Comment ( == Independent Brake valve - Engine == )
	EngineBrakesControllerMaxSystemPressure			( 72.5 )
	EngineBrakesControllerMaxReleaseRate			( 3.07 )
	EngineBrakesControllerMaxQuickReleaseRate 		( 6.14 )
	EngineBrakesControllerMaxApplicationRate		( 12.47 )
	EngineBrakesControllerEmergencyApplicationRate		( 24.94 )
	EngineBrakesControllerFullServicePressureDrop 		( 26.11 )
	EngineBrakesControllerMinPressureReduction		( 7.25 )

Comment ( == Dynamic Brake == )
        DynamicBrakesMinUsableSpeed                             ( 2 )
        DynamicBrakesMaximumEffectiveSpeed                      ( 158 )
        DynamicBrakesMaximumForce                               ( 150kN )
        DynamicBrakesResistorCurrentLimit                       ( 326A )
        DynamicBrakesCutInSpeed                                 ( 15 )
        DynamicBrakesMaxAirBrakePressure                        ( 2.9bar )
        DynamicBrakesFadingSpeed                                ( 2 )
        DynamicBrakesDelayTimeBeforeEngaging                    ( 0.4 )
        DynamicBrakesMaximumSpeedForFadeOut                     ( 110 )
        DynamicBrakesEffectAtMaximumFadeOut                     ( 0 )
        DynamicBrakesHigherSpeedCurveExponent                   ( 13.5 )
        DynamicBrakesLowerSpeedCurveExponent                    ( 0.9 )
        DynamicBrakesNumberOfControllerNotches                  ( 11 )
        DynamicBrakeHasAutoBailOff                              ( 1 )

        ORTSDynamicBlendingOverride                             ( 1 )
        ORTSDynamicBlendingForceMatch                           ( 0 )

        ORTSDynamicBrakeForceCurves (

               0.00 (
                    0km/h    0kN
                    140km/h  0kN
               )
               1.00 (
                    0km/h    0kN
                    3km/h    65kN
                    4km/h    100kN
                    5km/h    150kN
                    6km/h    150kN
                    10km/h   150kN
                    30km/h   150kN
                    35km/h   150kN
                    39km/h   150kN
                    40km/h   150kN
                    50km/h   150kN
                    60km/h   150kN
                    70km/h   150kN
                    77km/h   150kN
                    80km/h   150kN
                    90km/h   150kN
                    98km/h   150kN
                    110km/h  150kN
		    118km/h  140kN
                    125km/h  130kN
		    130km/h  120kN
                    140km/h  105kN
               )
        )
