
Comment ( VER2 Standard ORTS Diesel Engine for Montreal Locomotive Works MX620 )
Comment ( Power Ratings == Gross HP 2142 == Traction HP 2180 == Rail HP 1700 )
Comment ( Continuous Tractive Effort 38000lb @ 15.68mph==80%eff. == Starting Tractive Effort 63267lb )
Comment ( Mass 89.7t == metric. Adhesion Factor = 27% )
Comment ( Mass×Adhesion Factor = Starting Tractive Effort )
Comment ( Brake HP -- bhp = Power-at-the-shaft = Gross HP or MaximalPower )
Comment ( Gross HP per technical specs or lacking good data == add 130hp to 150hp to Traction HP )
Comment ( include ( "..\\..\\Common.inc\\Locomotives\\Std_Eng_M420.inc" ) )

ORTSDieselEngines ( 1
	Diesel (
	IdleRPM ( 300 )		
	MaxRPM ( 1050 )		
	StartingRPM ( 175 )
	StartingConfirmRPM ( 350 )
	ChangeUpRPMps ( 85 )		
	ChangeDownRPMps ( 54 )		
	RateOfChangeUpRPMpSS ( 13 )		
	RateOfChangeDownRPMpSS ( 9 )		
	MaximalPower ( 1604289W ) Comment (* 2180cv comprovado em ficha técnica nº10 ed1987*)		
	IdleExhaust ( 1.2 )
	MaxExhaust ( 2.2 )		
	ExhaustDynamics ( 1.6 )
	ExhaustDynamicsDown ( 0.8 )		
	ExhaustColor ( 20161819 )		
	ExhaustTransientColor ( 40212324 )		
	DieselPowerTab (		
		0	0
		450	199848
		535	399695
		620	598797
		705	798645
		790	998492
		875	1198340
		960	1397442
		1050 1604289
	)
	Comment (* calculado a partir de documento técnico 1983*)		
	DieselConsumptionTab (		
		0	0
		450	30
		1050	372
	)				
	ThrottleRPMTab (		
		0	300
		12.5	450
		25	535
		37.5	620
		50	705
		62.5	790
		75	875
		87.5	960
		100	1045
	)		
	DieselTorqueTab (		
		0	0
		450	33894
		535	28509
		620	24600
		705	21634
		790	19307
		875	17431
		960	15888
		1045 14595
	)		
	MinOilPressure ( 25psi )		
	MaxOilPressure ( 70psi )		
	MaxTemperature ( 120degc )		
	Cooling ( 3 )		
	TempTimeConstant ( 720 )		
	OptTemperature ( 71degc )		
	IdleTemperature ( 55degc )		
	)		
)			

MaxForce ( 281436N )
MaxContinuousForce ( 193032N )
ORTSMaxTractiveForceCurves (					
		 0 (		
			0.00	0
			1.39	0
			2.78	0
			6.25	0
			8.33	0
			11.11	0
			13.89	0
			16.67	0
			19.44	0
			22.22	0
			25.00	0
			27.78	0
			30.56	0
			33.33	0
		)		
		 0.125 (		
			0.00	189268
			1.39	93708
			2.78	46854
			6.25	20824
			8.33	15618
			11.11	11713
			13.89	9371
			16.67	7809
			19.44	6693
			22.22	5857
			25.00	5539
			27.78	5285
			30.56	5077
			33.33	4903
		)		
		 0.25 (		
			0.00	189268
			1.39	187415
			2.78	93708
			6.25	41648
			8.33	31236
			11.11	23427
			13.89	18742
			16.67	15618
			19.44	13387
			22.22	11713
			25.00	11078
			27.78	10569
			30.56	10153
			33.33	9807
		)		
		 0.375 (		
			0.00	189268
			1.39	189268
			2.78	140561
			6.25	62472
			8.33	46854
			11.11	35140
			13.89	28112
			16.67	23427
			19.44	20080
			22.22	17570
			25.00	16617
			27.78	15854
			30.56	15230
			33.33	14710
		)		
		 0.5 (		
			0.00	189268
			1.39	189268
			2.78	187415
			6.25	83296
			8.33	62472
			11.11	46854
			13.89	37483
			16.67	31236
			19.44	26774
			22.22	23427
			25.00	22156
			27.78	21139
			30.56	20307
			33.33	19613
		)		
		 0.625 (		
			0.00	189268
			1.39	189268
			2.78	189268
			6.25	104120
			8.33	78090
			11.11	58567
			13.89	46854
			16.67	39045
			19.44	33467
			22.22	29284
			25.00	27695
			27.78	26423
			30.56	25383
			33.33	24517
		)		
		 0.75 (		
			0.00	189268
			1.39	189268
			2.78	189268
			6.25	124944
			8.33	93708
			11.11	70281
			13.89	56225
			16.67	46854
			19.44	40160
			22.22	35140
			25.00	33234
			27.78	31708
			30.56	30460
			33.33	29420
		)		
		 0.875 (		
			0.00	189268
			1.39	189268
			2.78	189268
			6.25	145767
			8.33	109326
			11.11	81994
			13.89	65595
			16.67	54663
			19.44	46854
			22.22	40997
			25.00	38772
			27.78	36993
			30.56	35537
			33.33	34323
		)		
		 1 (		
			0.00	189268
			1.39	189268
			2.78	189268
			6.25	166591
			8.33	124944
			11.11	93708
			13.89	74966
			16.67	62472
			19.44	53547
			22.22	46854
			25.00	44311
			27.78	42277
			30.56	40613
			33.33	39227
		)		
	)
