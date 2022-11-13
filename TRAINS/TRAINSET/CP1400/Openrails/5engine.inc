
Comment ( Standard ORTS Diesel Engine for CP 1400 English Electric )
Comment ( *** Diesel Engine *** )
	Type 				( Diesel )
	MaxPower 			( 713kW ) Comment (* 970cv comprovado em manual de conducao de 1969*)
	MaxForce 			( 161kN ) Comment (* comprovado em ficha técnica nº7 ed1987*)
	MaxContinuousForce 		( 142kN ) Comment (* comprovado em ficha técnica nº7 ed1987*)
	MaxVelocity 			( 105kmh ) Comment (* comprovado em ficha técnica nº7 ed1987*)
	ORTSContinuousForceTimeFactor 	( 3600 )
	MaxTemperature 		       ( 93.3degC ) Comment (* comprovado em manual de conducao*)
	MaxOilPressure 		       ( 59.738psi ) Comment (* 4,2 kg.cm2 comprovado em manual de conducao*)

	MaxDieselLevel 			( 2250l ) Comment (* comprovado em manual de conducao*)
	DieselEngineSpeedOfMaxTractiveEffort( 11.806mph ) Comment (* comprovado em ficha técnica nº7 ed1987*)
	DieselEngineType 		( electric )

Comment ( *** General *** )
	WheelRadius 		( 0.475m ) Comment (* comprovado em ficha técnica nº7 ed1987*)
	Sanding 			( 25mph )
	NumWheels 			( 4 )
	ORTSNumberDriveAxles 	( 4 )
	DoesHornTriggerBell 	( 0 )
	ORTSDriveWheelWeight 	( 64.4t ) Comment (* comprovado em ficha técnica nº7 ed1987*)

Comment ( *** Electric Motor *** )
	MaxCurrent 			( 1000A ) Comment (* comprovado em manual de conducao*)
	ORTSElectricTrainSupply ( Mode ( Unfitted ) )
	
Comment ( * English Electric 8 SVT * )
ORTSDieselEngines ( 1
	Diesel(
		IdleRPM 		( 450 ) Comment (* comprovado em manual de conducao de 1969*)
		MaxRPM 			( 850 ) Comment (* comprovado em manual de conducao de 1969*)
		StartingRPM		( 360 )
		StartingConfirmRPM	( 460 )
		ChangeUpRPMpS 		( 50 )
		ChangeDownRPMpS 	( 40 )
		RateOfChangeUpRPMpSS 	( 10 )
		RateOfChangeDownRPMpSS 	( 10 )
		MaximalPower 		( 978213W ) Comment (* 1330cv comprovado em ficha técnica nº7 ed1987*)
		IdleExhaust ( 5.62 ) Comment ( 4-stroke = rpm / 80 )
		MaxExhaust ( 10.6 ) Comment ( 4-stroke = rpm / 80 )
		ExhaustDynamics 	( 5 )
		ExhaustDynamicsDown 	( 0.5 )
		ExhaustColor 		( 11464650 )
		ExhaustTransientColor 	( 11141418 )
		DieselPowerTab (
			450	50000
			452	249809
			550	383290
			650	518261
			750	643539
			850	745700
		)
		Comment (* Consumo comprovado e calculado a partir de dados da CP de 1983 *)
		DieselConsumptionTab (
			0	0
			450	14
			452	64
			550	98
			650	145
			750	194	
			850	273
		)
		ThrottleRPMTab (
			0	450
			20    452
			25	475
			50	600
			75	725
			100	850
		)
		DieselTorqueTab (		
			0	0
			450	1060
			452	5273
			550	6648
			650	7606
			750	8186
			850	8369
		)
		MinOilPressure		( 49.781psi ) Comment (* 3,5 kg.cm2 comprovado em manual de conducao*)
		MaxOilPressure 		( 59.738psi ) Comment (* 4,2 kg.cm2 comprovado em manual de conducao*)
		MaxTemperature 		( 93.3degC ) Comment (* comprovado em manual de conducao*)
		Cooling			( 3 ) Comment ( 0=No cooling, 1=Mechanical, 2= Hysteresis, 3=Proportional )
		TempTimeConstant	( 720 )
		OptTemperature		( 70degC )
		IdleTemperature		( 54.5degC ) Comment (* comprovado em manual de conducao*)
	)
)


Comment ( based on BR class 20 )
ORTSMaxTractiveForceCurves (
	
0.00 (
0.00	0
35.76	0
 )
0.10 (
0.00	79234
2.24	35030
4.47	9174
6.71	0
8.94	0
11.18	0
13.41	0
15.65	0
17.88	0
20.12	0
22.35	0
24.59	0
26.82	0
29.06	0
31.29	0
33.53	0
35.76	0
 )
0.20 (
0.00	136783
2.24	68391
4.47	38366
6.71	25577
8.94	18766
11.18	14346
13.41	11955
15.65	10247
17.88	8966
20.12	7414
22.35	6172
24.59	5459
26.82	4726
29.06	4363
31.29	3813
33.53	3114
35.76	2085
 )
0.25 (
0.00	186825
2.24	101753
4.47	60051
6.71	41146
8.94	30860
11.18	24688
13.41	19739
15.65	17157
17.88	15013
20.12	12603
22.35	10843
24.59	10312
26.82	9174
29.06	8469
31.29	7626
33.53	6672
35.76	5421
 )
1.00 (
0.00	186825
2.24	186825
4.47	122604
6.71	86407
8.94	65055
11.18	51377
13.41	42814
15.65	36460
17.88	31902
20.12	28172
22.35	25188
24.59	22747
26.82	20573
29.06	18862
31.29	17396
33.53	15680
35.76	13657
 )
)