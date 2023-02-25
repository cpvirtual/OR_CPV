
	DoesBrakeCutPower					( 1 )
	DoesHornTriggerBell				( 0 )
	RunUpTimeToMaxForce				( 30 )

	ORTSCircuitBreaker				( CircuitBreaker_IT )
	ORTSCircuitBreakerClosingDelay		( 2s )
	ORTSPowerOnDelay					( 1s )
	ORTSAuxPowerOnDelay				( 3s )

 	ORTS (
		ORTSWheelSlipCausesThrottleDown	( 0 )
		ORTSEmergencyCausesPowerDown 		( 0 )
		ORTSEmergencyCausesThrottleDown	( 1 )
	)

 	ORTS ( ORTSWheelSlipCausesThrottleDown ( 1 ) )
 	ORTS ( ORTSEmergencyCausesThrottleDown ( 1 ) )

	CabView ( cp2000.cvf )
	HeadOut ( -1.7 3.0 7.75 )
