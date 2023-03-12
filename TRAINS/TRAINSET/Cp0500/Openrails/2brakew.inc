
Comment ( *************** Brakes - Wagon Section - General ********************** )
	BrakeEquipmentType					( Distributor, Auxiliary_reservoir, Handbrake )
	BrakeSystemType						( Air_Twin_Pipe )
	MaxBrakeForce						( 170kN )  		#(* Braked at 75% tare mass, coefficient of friction 0.20 *)
	MaxHandbrakeForce 					( 52.9kN )

	TripleValveRatio						( 2.83 )
	MaxReleaseRate						( 0.62bar/s ) 	#( valores de ref 0.39-0.51 )
	MaxApplicationRate					( 1.38bar/s )	#( valores de ref1.59-2.34 )
	MaxAuxilaryChargingRate					( 1.38bar/s )

	BrakeCylinderPressureForMaxBrakeBrakeForce	( 3.8bar )		#( verificado em manual de conducao )
	BrakePipeVolume 						( 0.76ft^3 )		#( calculado em coalstonewcastle.com.au )

	EmergencyResCapacity					( 25l )
	EmergencyResChargingRate				( 1.38bar/s )
	EmergencyResVolumeMultiplier 				( 1 )
	EmergencyBrakeResMaxPressure				( 5bar )

	ORTSBrakeShoeFriction (
		0   0.31
		1   0.30 
		2   0.28 
		3   0.27 
		4   0.26
		5   0.25
		7   0.24
		8   0.23
		9   0.22
		12  0.21
		14  0.20
		17  0.19
		20  0.18
		24  0.17
		29  0.16
		34  0.15
		40  0.14
		47  0.13
		55  0.12
		66  0.11
		84  0.10
		115 0.09 
		160 0.09
	)
	Comment ( Cast Iron Brakeshoes )
