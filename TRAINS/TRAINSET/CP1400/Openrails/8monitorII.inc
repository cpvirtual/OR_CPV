
	EmergencyStopMonitor(
		MonitoringDeviceMonitorTimeLimit( 0 )
		MonitoringDeviceAlarmTimeLimit( 0 )
		MonitoringDevicePenaltyTimeLimit( 0 )
		MonitoringDeviceCriticalLevel( 0 )
		MonitoringDeviceResetLevel( 0 )
		MonitoringDeviceAppliesFullBrake( 1 )
		MonitoringDeviceAppliesEmergencyBrake( 1 )
		MonitoringDeviceAppliesCutsPower( 1 )
		MonitoringDeviceAppliesShutsDownEngine( 1 )
	)
	AWSMonitor(
		MonitoringDeviceMonitorTimeLimit( -1 )
		MonitoringDeviceAlarmTimeLimit( 5 )
		MonitoringDevicePenaltyTimeLimit( 0 )
		MonitoringDeviceCriticalLevel( 0 )
		MonitoringDeviceResetLevel( 0 )
		MonitoringDeviceAppliesFullBrake( 0 )
		MonitoringDeviceAppliesEmergencyBrake( 1 )
		MonitoringDeviceAppliesCutsPower( 0 )
		MonitoringDeviceAppliesShutsDownEngine( 0 )
	)		
	VigilanceMonitor(
		MonitoringDeviceMonitorTimeLimit( 45 )
		MonitoringDeviceAlarmTimeLimit( 37 )
		MonitoringDevicePenaltyTimeLimit( 0 )
		MonitoringDeviceCriticalLevel( 0 )
		MonitoringDeviceResetLevel( 0 )
		MonitoringDeviceAppliesFullBrake( 1 )
		MonitoringDeviceAppliesEmergencyBrake( 1 )
		MonitoringDeviceAppliesCutsPower( 1 )
		MonitoringDeviceAppliesShutsDownEngine( 0 )
		MonitoringDeviceResetOnZeroSpeed( 1 )
		MonitoringDeviceResetOnResetButton( 1 )
	)		
	OverspeedMonitor(
		MonitoringDeviceMonitorTimeLimit( 0 )
		MonitoringDeviceAlarmTimeLimit( 5 )
		MonitoringDevicePenaltyTimeLimit( 0 )
		MonitoringDeviceCriticalLevel( 72 )
		MonitoringDeviceResetLevel( 0 )
		MonitoringDeviceAppliesFullBrake( 1 )
		MonitoringDeviceAppliesEmergencyBrake( 1 )
		MonitoringDeviceAppliesCutsPower( 1 )
		MonitoringDeviceAppliesShutsDownEngine( 0 )
		MonitoringDeviceTriggerOnTrackOverspeed( 1 )
		MonitoringDeviceTriggerOnTrackOverspeedMargin( 2 )
		MonitoringDeviceResetOnZeroSpeed( 1 )
		MonitoringDeviceResetOnResetButton( 1 )
	)