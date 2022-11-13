
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

	Comment ( Cast Iron Brakeshoes )
	ORTSBrakeShoeFriction (
		0.0   0.500
		8.0   0.288
		16.1  0.241
		24.1  0.211
		32.2  0.187
		40.2  0.173
		48.3  0.161
		56.3  0.150
		64.4  0.142
		72.2  0.139
		80.5  0.134
		88.5  0.129
		96.6  0.125
		104.6 0.123
		112.7 0.121
	)

	