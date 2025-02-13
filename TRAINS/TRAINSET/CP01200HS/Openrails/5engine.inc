
Comment ( *** General 350HS ENGINE *** )
	Type 						( Steam )
	ORTSSteamLocomotiveType 		( Simple )
	WheelRadius 				( 0.675m )
	ORTSNumberDriveAxles 			( 4 )
	ORTSDriveWheelWeight 			( 60t  )
	Sanding 					( 15kph )
	IsTenderRequired 				( 0 )
	MaxForce 					( 106.7kN )

Comment ( *** Boiler *** )
	ORTSSteamBoilerType 			( Superheated )
	BoilerVolume 				( 7.80m^3 )
	ORTSEvaporationArea 			( 154.4m^2 )
	MaxBoilerPressure 			( 170.68psi )
	ORTSSuperheatArea 			( 54.97m^2 )
	MaxSteamHeatingPressure 		( 50psi )
	ORTSBoilerSurfaceArea 			( 23.17m^2 )
	ORTSFractionBoilerInsulated 		( 0.86 )
	ORTSHeatCoefficientInsulation 	( 0.8 )

Comment ( *** Fuel *** )
	MaxTenderCoalMass 			( 4000kg )
	MaxTenderWaterMass 			( 9970kg )

Comment ( *** Fire *** ) 
	ORTSGrateArea 				( 3.02m^2 )
	ORTSFuelCalorific 			( 12800btu/lb ) Comment ( Blidworth Coal )
	ORTSSteamFiremanMaxPossibleFiringRate ( 1360 ) 
	SteamFiremanIsMechanicalStoker 	( 0 )
	ShovelCoalMass 				( 10lb )

Comment ( *** Cylinders *** )
	NumCylinders 				( 2 )
	CylinderStroke 				( 660mm )
	CylinderDiameter 				( 530mm )




Comment ( *** Advanced Parameters *** )
	ORTSBoilerEvaporationRate 		( 10.47 ) comment ( 0.204816098 x "relação entre a superficie do aquecimento total e a da grelha" )
	ORTSMaxIndicatedHorsepower 		( 51.31hp ) comment ( https://calculator.academy/steam-engine-power-calculator/#:~:text=To%20calculate%20steam%20engine%20power,7%2C%20then%20divide%20by%2033%2C000. )
	ORTSMaxSuperheatTemperature 		( 249 )
	ORTSSuperheatCutoffPressureFactor 	( 40 )
	ORTSCylinderPortOpening 		( 0.05 )
	ORTSBoilerEfficiency 			( 0 0.91	140 0.58	170 0.50 )
	ORTSBurnRate 				( 0 120  8000 1000  12000 1600  16000 2300  18000 2800  19600 3250  21100 4350  21140 5070 )
	#ORTSCylinderInitialPressureDrop 	( x y )
	#ORTSCylinderBackPressure 		( x y )
