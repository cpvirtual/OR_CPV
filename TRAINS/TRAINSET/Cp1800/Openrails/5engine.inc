
Comment (* Standard ORTS Diesel Engine for CP 1800 English Electric *)
Comment ( *** Traction Characteristics *** )
	Type 						( Diesel )
	MaxPower 					( 1512kW ) Comment (* 2028cv comprovado em manual de conducao de 1969*)
	MaxVelocity 				( 140kmh ) Comment (* comprovado em ficha técnica nº11 ed1987*)
	MaxForce 					( 254.97kN ) Comment (* comprovado em ficha técnica nº11 ed1987*)
	MaxContinuousForce 			( 174.07kN ) Comment (* comprovado em ficha técnica nº11 ed1987*)
	ORTSContinuousForceTimeFactor 	( 3600 )
	MaxDieselLevel 				( 4550l ) Comment (* comprovado em manual de conducao*)
	DieselEngineSpeedOfMaxTractiveEffort( 31kph ) Comment (* comprovado em ficha técnica nº11 ed1987*)
	DieselEngineType 				( electric )

Comment ( *** General *** )
	WheelRadius 				( 0.55m ) Comment (* comprovado em ficha técnica nº11 ed1987*)
	Sanding 					( 25mph )
	NumWheels 					( 6 )  Comment (* 6 eixos motores *)
	ORTSDriveWheelWeight 			( 110.3t ) Comment (* comprovado em ficha técnica nº11 ed1987*)


Comment ( * English Electric 16CSVT rated 2700bhp @ 850rpm * )

ORTSDieselEngines ( 1
	Diesel(
		IdleRPM 			( 450 )
		MaxRPM 			( 850 )
		StartingRPM 		( 350 )
		StartingConfirmRPM 	( 460 )
		ChangeUpRPMpS 		( 50 )
		ChangeDownRPMpS 		( 40 )
		RateOfChangeUpRPMpSS 	( 10 )
		RateOfChangeDownRPMpSS 	( 10 )
		MaximalPower 		( 2700hp )
		IdleExhaust 		( 5.62 ) Comment ( 4-stroke = rpm / 80 )
		MaxExhaust 			( 10.6 ) Comment ( 4-stroke = rpm / 80 )
		ExhaustDynamics 		( 1.2 )
		ExhaustDynamicsDown 	( 0.5 )
		ExhaustColor 		( 00999792 )
		ExhaustTransientColor 	( FF5B5851 )
Comment ( boa cor para a 1320
		ExhaustColor 		( 113c3c46 )
		ExhaustTransientColor 	( 11141418 )
)
		DieselPowerTab (
			0	0
			450	270396
			455	540791
			550	853099
			650	1210899
			750	1598499
			850	2015899
		)
		DieselConsumptionTab (
			0	0
			450	73
			455	146
			550	346
			850	536
		)
		ThrottleRPMTab (
			0	450
			10	451
			20	455
			40	550
			100	850
		)
		DieselTorqueTab (
			0	0
			450	5732
			455	11339
			550	14797
			650	17772
			750	20333
			850	22626
		)
		MinOilPressure ( 40 )
		MaxOilPressure ( 90 )
		MaxTemperature ( 120 )
		Cooling	( 3 )
		TempTimeConstant ( 720 )
		OptTemperature ( 90 )
		IdleTemperature	( 70 )
	)
)

Comment ( *** Electric Motor *** )
	MaxCurrent 					( 1000A ) Comment (* comprovado em manual de conducao*)
	MaxForce ( 48500lbf ) Comment ( * actual max force is 48500lbf this number is to give correct ammeter reading in OR with full throttle at 23.5mph * )

ORTSMaxTractiveForceCurves (	
0.00 (	
0.0	0
51.4	0
 )	
0.10 (	
0.0	64054
2.2	54046
4.5	20017
6.7	6672
9.8	0
51.4	0
 )	
0.20 (	
0.0	230852
2.2	182191
4.5	97323
6.7	65397
9.8	50552
12.8	33221
15.8	26222
18.9	21992
21.9	18434
25.0	15628
28.0	13728
31.1	11981
34.1	10707
37.2	7934
40.2	5923
42.5	4306
44.7	2229
46.9	0
51.4	0
 )	
0.40 (	
0.0	341827
2.2	263071
4.5	157511
6.7	108156
9.8	74357
12.8	56653
15.8	43760
18.9	37261
21.9	32086
25.0	26483
28.0	22475
31.1	21290
34.1	18771
37.2	17232
40.2	15402
42.5	13597
44.7	9996
46.9	6738
49.2	3776
51.4	1072
 )	
1.00 (	
0.0	523831
2.2	357813
4.5	332036
6.7	229040
9.8	158773
12.8	120506
15.8	97816
18.9	81500
21.9	70292
25.0	61435
28.0	54438
31.1	49168
34.1	44703
37.2	40913
40.2	37897
42.5	35387
44.7	32642
46.9	28072
49.2	23682
51.4	19675
 )	
)
