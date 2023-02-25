
Comment ( *** CP4700 
Braking system *** )
	BrakesEngineBrakeType						( "Air_twin_pipe"  )
	BrakesTrainBrakeType						( "Air_twin_pipe" )
	BrakesEngineControllers						( "Independent, Train, Dynamic" )
	BrakeCutsPowerAtBrakeCylinderPressure			( 4.8bar )		#( 69.618psi )
	ORTSBrakeRestoresPowerAtBrakePipePressure			( 5bar )		#( 72.518psi )
	ORTSDoesBrakeCutPower						( 1 )

Comment ( == Compressor == )
	AirBrakesMainMaxAirPressure					( 9.5bar )		#( )
	AirBrakesCompressorRestartPressure				( 7.5bar )		#( )
	AirBrakesMainResVolume						( 1000l )		#( verificado ficha tecnica preliminar de 27FEV2006 )
	ORTSBrakePipeChargingRate					( 20.8bar/s )
	ORTSMainResChargingRate						( 0.686 )		#(psi/s - calculado em coalstonewcastle.com.au )
	TrainPipeLeakRate							( 0.006bar/s )
	ORTSBrakePipeTimeFactor 					( 0.003 )
	ORTSBrakeServiceTimeFactor 					( 1.009s )
	ORTSBrakeEmergencyTimeFactor 					( 0.100s )

	ORTSBrakeCutsPowerAtBrakePipePressure			( 3.17bar )		#( 46psi )
	ORTSBrakeRestoresPowerAtBrakePipePressure			( 4.13bar )		#( 60psi )

Comment ( == Automatic Brake valve - Train == )
	TrainBrakesControllerMaxSystemPressure			( 5bar )
	TrainBrakesControllerMaxReleaseRate				( 0.215bar/s )
	TrainBrakesControllerMaxQuickReleaseRate			( 0.430bar/s )
	TrainBrakesControllerMaxApplicationRate			( 0.86bar/s )
	TrainBrakesControllerEmergencyApplicationRate		( 2.350bar/s )
	TrainBrakesControllerFullServicePressureDrop		( 1.8bar )
	TrainBrakesControllerMinPressureReduction 		( 0.2bar )
	ORTSTrainBrakesControllerMaxOverchargePressure 		( 5.4bar ) 		Comment (Maximum overcharge)
	ORTSTrainBrakesControllerOverchargeEliminationRate 	( 0.0027bar/s )	Comment (The leakage rate that drops to 5 bar in 150s.)

Comment ( == Independent Brake valve - Engine == )
	EngineBrakesControllerMaxSystemPressure			( 5.0bar )      #( 72.518psi )
	EngineBrakesControllerMaxReleaseRate			( 0.21bar/s )
	EngineBrakesControllerMaxQuickReleaseRate 		( 0.42bar/s )
	EngineBrakesControllerMaxApplicationRate			( 0.86bar/s )
	EngineBrakesControllerEmergencyApplicationRate		( 1.72bar/s )
	EngineBrakesControllerFullServicePressureDrop 		( 2.0bar )
	EngineBrakesControllerMinPressureReduction		( 0.4bar )

Comment ( == Dynamic Brake == )
	DynamicBrakesMinUsableSpeed                             ( 2 )
	DynamicBrakesMaximumEffectiveSpeed                      ( 158 )
	DynamicBrakesMaximumForce                               ( 150kN )
	DynamicBrakesResistorCurrentLimit                       ( 326A )
	DynamicBrakesCutInSpeed                                 ( 15 )
	DynamicBrakesMaxAirBrakePressure                        ( 2.9bar )
	DynamicBrakesFadingSpeed                                ( 9 )
	DynamicBrakesDelayTimeBeforeEngaging                    ( 0.4 )
	DynamicBrakesMaximumSpeedForFadeOut                     ( 110 )
	DynamicBrakesEffectAtMaximumFadeOut                     ( 1 )
	DynamicBrakesHigherSpeedCurveExponent                   ( 13.5 )
	DynamicBrakesLowerSpeedCurveExponent                    ( 0.9 )
	DynamicBrakesNumberOfControllerNotches                  ( 0 )
	DynamicBrakeHasAutoBailOff                              ( 0 )

	ORTSDynamicBlendingOverride                             ( 1 )
	ORTSDynamicBlendingForceMatch                           ( 0 )

	ORTSDynamicBrakeForceCurves (
		0.00 (
			0km/h    0kN
			200km/h  0kN
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
			150km/h	100kN
			160km/h	95kN
			180km/h	90kN
			190km/h	85kN
			200km/h	80kN

		)
	)
