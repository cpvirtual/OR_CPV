
Comment ( *************** Brakes - Wagon Section - General ********************** )
	BrakeEquipmentType				( Distributor, Auxilary_reservoir, Handbrake )
	BrakeSystemType					( Air_twin_pipe )
	MaxBrakeForce					( 184kN )
	MaxHandbrakeForce 				( 30kN )

	TripleValveRatio					( 2.83 )
	MaxReleaseRate					( 0.51bar/s )   #( 0.39-0.51 )
	MaxApplicationRate				( 2bar/s )  #( 1.59-2.34 )
	MaxAuxilaryChargingRate				( 1.38bar/s )

	ORTSNumberBrakeCylinders 			( 2 )
	ORTSBrakeCylinderSize 				( 10in )
	BrakeCylinderPressureForMaxBrakeBrakeForce	( 3.8bar ) #( verificado em manual de conducao )
	BrakePipeVolume 					( 14l ) #( calculado em coalstonewcastle.com.au )



	EmergencyResCapacity				( 75l )
	EmergencyResChargingRate			( 1.38bar/s )
	EmergencyResVolumeMultiplier 			( 1 )
	EmergencyBrakeResMaxPressure			( 5bar )

      Comment ( == cast iron brake shoes == )
	ORTSBrakeShoeFriction ( 0 0.31 1 0.30 2 0.28 3 0.27 4 0.26 5 0.25 7 0.24 8 0.23 9 0.22 12 0.21 14 0.20 17 0.19 20 0.18 24 0.17 29 0.16 34 0.15 40 0.14 47 0.13 55 0.12 66 0.11 84 0.10 115 0.09 160 0.09 ) 
	