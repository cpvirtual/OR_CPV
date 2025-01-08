
Comment ( *************** Brakes - Wagon Section - General ********************** )
	BrakeEquipmentType				( Distributor, Auxilary_reservoir, Handbrake )
	BrakeSystemType					( Air_twin_pipe )
	MaxBrakeForce					( 21kN )  Comment (* Braked at 75% tare mass, coefficient of friction 0.20 *)
	MaxHandbrakeForce 				( 9kN )

	TripleValveRatio				( 2.83 )
	MaxReleaseRate					( 0.51bar/s )   #( 0.39-0.51 )
	MaxApplicationRate				( 2bar/s )  #( 1.59-2.34 )
	MaxAuxilaryChargingRate				( 1.38bar/s )

	BrakeCylinderPressureForMaxBrakeBrakeForce	( 3.8bar ) #( verificado em manual de conducao )
	BrakePipeVolume 				( 11l ) #( calculado em coalstonewcastle.com.au )

	EmergencyResCapacity				( 60l )
	EmergencyResChargingRate			( 1.38bar/s )
	EmergencyResVolumeMultiplier 			( 1 )
	EmergencyBrakeResMaxPressure			( 5bar )
	