
	DoesBrakeCutPower					( 1 )
	DoesHornTriggerBell				( 0 )
	RunUpTimeToMaxForce				( 30 )

Comment( ****************** Script TCS ******************* )
	comment ( ORTSTrainControlSystem( EBICAB.cs ) )

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

	HeadOut 						( -1.7 3.0 7.75 )
	CabView 						( CP4700.cvf )
