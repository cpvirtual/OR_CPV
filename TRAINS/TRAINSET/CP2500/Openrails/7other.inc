
	DoesBrakeCutPower( 1 )
	DoesHornTriggerBell( 0 )
	RunUpTimeToMaxForce ( 30 )
	MaxSandingTime( 1200 )

Comment( ****************** Script TCS ******************* )
	#( ORTSTrainControlSystem( EBICAB.cs ) )


Comment( ****************** Script Power ******************* )
	ORTSCircuitBreaker( CircuitBreaker_IT )
	ORTSCircuitBreakerClosingDelay( 2s )
	ORTSPowerOnDelay( 1s )
	ORTSAuxPowerOnDelay( 1s )

 	ORTS (
		ORTSWheelSlipCausesThrottleDown ( 1 )
		ORTSEmergencyCausesPowerDown    ( 0 )
		ORTSEmergencyCausesThrottleDown ( 1 )
	)
	
	HeadOut ( -1.7 3.0 6.75 )
	Sound ( CP2500cab.sms )
	