
	DoesBrakeCutPower( 1 )
	DoesHornTriggerBell( 0 )
	RunUpTimeToMaxForce ( 30 )

Comment( **************************** Script TCS ***************************** )
	#( ORTSTrainControlSystem			( EBICAB.cs ) )
	#( ORTSTrainBrakeController			( PBL2BrakeController.cs )  )

Comment( **************************** Script Power *************************** )
	ORTSCircuitBreaker				( CircuitBreaker_IT )
	ORTSCircuitBreakerClosingDelay		( 2s )
	ORTSPowerOnDelay					( 1s )
	ORTSAuxPowerOnDelay				( 3s )

 	ORTS (
		ORTSWheelSlipCausesThrottleDown	( 1 )
		ORTSEmergencyCausesPowerDown		( 0 )
		ORTSEmergencyCausesThrottleDown	( 1 )
	)

	HeadOut						( -1.7 3 6.75 )
	Sound ( CP2500cab.sms )
