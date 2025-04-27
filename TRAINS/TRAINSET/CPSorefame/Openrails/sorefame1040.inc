
Comment ( *** Carruagens de 1ª classe 10-40 001 a 003 - ficha 49 ***)
	Size 			( 3.016m 3.935m 26.62m )
	InertiaTensor 		( Box (3m 3.5m 26m) )
	Mass 			( 44t ) Comment (* tara 42.5t *)
	WheelRadius 		( 0.425m )

	MaxBrakeForce		( 500kN ) Comment (* 51tf *)
	MaxHandbrakeForce 	( 166kN ) Comment (* 17tf *)
	BrakePipeVolume 	( 0.74ft^3 )
	ORTSBrakeCylinderSize 	( 12in )
	ORTSMaxBrakeShoeForce	( 3.1875 )
	ORTSLengthBogieCentre 	( 19.0m )
	ORTSLengthCarBody 	( 25.320m )
	ORTSLengthCouplerFace 	( 26.620m )
	PassengerCapacity 	( 64 )

	Comment (Friction Calculator - Passenger Carriage - European UIC 1960+ - 44;3,016;3,935;25,98;4 )
	ORTSDavis_A 		( 448.89 )
	ORTSDavis_B 		( 15.53 )
	ORTSDavis_C 		( 1.05 )
	DerailRailForce 	( 220kN )

	ORTSFreightAnims (
                WagonEmptyWeight ( 44t )
		LoadingAreaLength ( 25.32 )
            	Offset ( 0 0 0 )
            	IntakePoint ( 0 6.0 Container )
	)

