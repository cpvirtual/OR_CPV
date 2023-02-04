
	DoesBrakeCutPower					( 0 )
	DoesHornTriggerBell				( 0 )
	RunUpTimeToMaxForce				( 30 )

Comment( ****************** Script TCS ******************* )



Comment( ****************** Script Power ******************* )
	ORTSCircuitBreaker				( CircuitBreaker_IT )
	ORTSCircuitBreakerClosingDelay		( 2s )
	ORTSPowerOnDelay					( 1s )
	ORTSAuxPowerOnDelay				( 3s )

 	ORTS (
		ORTSWheelSlipCausesThrottleDown	( 0 )
		ORTSEmergencyCausesPowerDown		( 0 )
		ORTSEmergencyCausesThrottleDown	( 1 )
	)

	HeadOut 						( -1.6 3 8.2 )
	CabView 						( CP5600.cvf )
