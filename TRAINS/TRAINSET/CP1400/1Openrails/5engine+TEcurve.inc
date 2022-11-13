
Comment ( Standard ORTS Diesel Engine for CP 1400 English Electric )
Comment ( *** Diesel Engine *** )
	Type 				( Diesel )
	MaxPower 			( 713kW ) Comment (* 970cv comprovado em manual de conducao de 1969*)
	MaxVelocity 			( 105kmh ) Comment (* comprovado em ficha técnica nº7 ed1987*)
	MaxForce 			( 161kN ) Comment (* comprovado em ficha técnica nº7 ed1987*)
	MaxContinuousForce 		( 142kN ) Comment (* comprovado em ficha técnica nº7 ed1987*)
	ORTSContinuousForceTimeFactor 	( 3600 )
	MaxDieselLevel 			( 2250l ) Comment (* comprovado em manual de conducao*)
	DieselEngineSpeedOfMaxTractiveEffort( 11.806mph ) Comment (* comprovado em ficha técnica nº7 ed1987*)
	DieselEngineType 		( electric )

ORTSDieselEngines ( 1
	Diesel(
		IdleRPM 		( 450 ) Comment (* comprovado em manual de conducao de 1969*)
		MaxRPM 			( 850 ) Comment (* comprovado em manual de conducao de 1969*)
		StartingRPM		( 350 )
		StartingConfirmRPM	( 490 )
		ChangeUpRPMpS 		( 75 )
		ChangeDownRPMpS 	( 35 )
		RateOfChangeUpRPMpSS 	( 25 )
		RateOfChangeDownRPMpSS 	( 21 )
		MaximalPower 		( 978213W ) Comment (* 1330cv comprovado em ficha técnica nº7 ed1987*)
		IdleExhaust 		( 1.2 )
		MaxExhaust 		( 2.3 )
		ExhaustDynamics 	( 2.2 )
		ExhaustDynamicsDown 	( 0.8 )
		ExhaustColor 		( 11464650 )
		ExhaustTransientColor 	( 11141418 )
		DieselPowerTab (
                        0	0
                        450	517877
                        500	575419
                        550	632961
                        600	690503
                        650     748045
                        700     805587
                        750     863129
                        800     920671
                        850	978213
		)
		Comment (* Consumo comprovado e calculado a partir de dados da CP de 1983 *)
		DieselConsumptionTab (
                        0	0
                        450	23
                        850	273
		)
		ThrottleRPMTab (
			0	450
			12.5	500
			25	580
			47.5	660
			50	710
			62.5	760
			75	800
			87.5	830
			100	850
		)
		DieselTorqueTab (		
			0	0
			450	23669.51
			850	12530.92
		)
		MinOilPressure		( 49.781psi ) Comment (* 3,5 kg.cm2 comprovado em manual de conducao*)
		MaxOilPressure 		( 59.738psi ) Comment (* 4,2 kg.cm2 comprovado em manual de conducao*)
		MaxTemperature 		( 93.3degC ) Comment (* comprovado em manual de conducao*)
		Cooling			( 1 ) Comment ( 0=No cooling, 1=Mechanical, 2= Hysteresis, 3=Proportional )
		TempTimeConstant	( 720 )
		OptTemperature		( 70degC )
		IdleTemperature		( 54.5degC ) Comment (* comprovado em manual de conducao*)
	)
)

Comment (* Tractive Force Curves for Class 52 with 3 speed Voith L 630rV transmission *)
ORTSMaxTractiveForceCurves(
	0 ( 0 0 33 0 )
        0.06 (
        	0	11213
        	6	4780
        	18	4538
        	27	3103
        	30	2983
        	33	2078
	)
        0.22 (
        	0	44853
        	6	19120
        	18	18151
        	27	12413
        	30	11934
        	33	8311
	)
        0.33 (
        	0	67279
        	6	28680
        	18	27226
        	27	18619
        	30	17901
        	33	12466
	)
        0.44 (
        	0	89706
        	6	38240
        	18	36302
        	27	24826
        	30	23868
        	33	16622
	)
        0.56 (
        	0	112132
        	6	47800
        	18	45377
        	27	31032
        	30	29835
        	33	20777
	)
        0.67 (
        	0	134559
        	6	57360
        	18	54453
        	27	37238
        	30	35802
        	33	24932
	)
        0.78 (
        	0	156985
        	6	66920
        	18	63528
        	27	43445
        	30	41768
        	33	29088
	)
        0.89 (
        	0	179412
        	6	76480
        	18	72604
        	27	49651
        	30	47735
        	33	33243
	)
        1.0 (
        	0	186245
        	6	62082
        	18	41388
        	37	55857
        	30	53702
        	33	37398
	)
)

Comment ( *** General *** )
	WheelRadius 			( 0.475m ) Comment (* comprovado em ficha técnica nº7 ed1987*)
	Sanding 			( 25mph )
	NumWheels 			( 4 )
	DoesHornTriggerBell 		( 0 )
	ORTSDriveWheelWeight 		( 64.4t ) Comment (* comprovado em ficha técnica nº7 ed1987*)

Comment ( *** Electric Motor *** )
	MaxCurrent 			( 1000A ) Comment (* comprovado em manual de conducao*)
	