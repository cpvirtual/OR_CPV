
Comment ( Standard ORTS Diesel Engine for Whitcomb CP1300 Locomotive. two Superior 40 B-Lx diesel engines per unit )
Comment ( AAR Wheel Configuration == A1A-A1A )
Comment ( Specifications per "ficha nº7 CP. edicao 1980" )
Comment ( Power Ratings == Gross HP 1500 == Traction HP 1350 == Rail HP 1020 ) 
Comment ( Continuous Tractive Effort 11140kg @ 27kph==81.5%eff. == Starting Tractive Effort 15900k )
Comment ( Unit Mass lbs == 96.4t == metric )
Comment ( Weight on Drivers lbs == 63.6t == metric. Adhesion Factor = 25% )
Comment ( Mass×Adhesion Factor = Starting Tractive Effort )
Comment ( Brake HP -- bhp = Power-at-the-shaft = Gross HP or MaximalPower )
Comment ( Gross HP per technical specs or lacking good data == add 130hp to 150hp to Traction HP )

ORTSDieselEngines ( 2			
	Diesel (
	IdleRPM ( 350 )
	MaxRPM ( 1100 )		
	StartingRPM ( 275 )		
	StartingConfirmRPM ( 400 )		
	ChangeUpRPMps ( 75 )		
	ChangeDownRPMps ( 47 )		
	RateOfChangeUpRPMpSS ( 11 )		
	RateOfChangeDownRPMpSS ( 8 )		
	MaximalPower ( 496462W )		
	IdleExhaust ( 1.2 )
	MaxExhaust ( 2.2 )		
	ExhaustDynamics ( 1.6 )		
	ExhaustDynamicsDown ( 0.8 )		
	ExhaustColor ( 20161819 )		
	ExhaustTransientColor ( 40212324 )		
	DieselPowerTab (		
		0	0
		350	99924
		450	200593
		525	300517
		600	401187
		775	501110
		850	601034
		925	701704
		1100	801628
	)		
	DieselConsumptionTab (		
		0	0
		350	4.5
		1100	372
	)		
	ThrottleRPMTab (		
		0	350
		12.5	350
		25	550
		37.5	625
		50	700
		62.5	775
		75	850
		87.5	925
		100	1100
	)		
	DieselTorqueTab (		
		0	0
		350	27835
		450	21870
		525	18011
		600	15309
		775	13312
		850	11776
		925	10558
		1100	9568
	)		
	MinOilPressure ( 20psi )		
	MaxOilPressure ( 70psi )		
	MaxTemperature ( 120degc )		
	Cooling ( 3 )		
	TempTimeConstant ( 720 )		
	OptTemperature ( 75degc )		
	IdleTemperature ( 55degc )		
	)		
	Diesel (		
	IdleRPM ( 350 )
	MaxRPM ( 1100 )		
	StartingRPM ( 275 )		
	StartingConfirmRPM ( 400 )		
	ChangeUpRPMps ( 75 )		
	ChangeDownRPMps ( 47 )		
	RateOfChangeUpRPMpSS ( 11 )		
	RateOfChangeDownRPMpSS ( 8 )		
	MaximalPower ( 496462W )		
	IdleExhaust ( 1.2 )
	MaxExhaust ( 2.2 )		
	ExhaustDynamics ( 1.6 )		
	ExhaustDynamicsDown ( 0.8 )		
	ExhaustColor ( 20161819 )		
	ExhaustTransientColor ( 40212324 )		
	DieselPowerTab (		
		0	0
		350	99924
		450	200593
		525	300517
		600	401187
		775	501110
		850	601034
		925	701704
		1100	801628
	)		
	DieselConsumptionTab (		
		0	0
		350	4.5
		1100	372
	)		
	ThrottleRPMTab (		
		0	350
		12.5	350
		25	550
		37.5	625
		50	700
		62.5	775
		75	850
		87.5	925
		100	1100
	)		
	DieselTorqueTab (		
		0	0
		350	27835
		450	21870
		525	18011
		600	15309
		775	13312
		850	11776
		925	10558
		1100	9568
	)		
	MinOilPressure ( 20psi )		
	MaxOilPressure ( 70psi )		
	MaxTemperature ( 120degc )		
	Cooling ( 3 )		
	TempTimeConstant ( 720 )		
	OptTemperature ( 75degc )		
	IdleTemperature ( 55degc )		
	)		
)
ORTSEmergencyCausesThrottleDown ( 0 )
	ORTSWheelSlipCausesThrottleDown ( 0 )
	ORTSMainResChargingRate ( 0.4psi/s )
	ORTSBrakePipeChargingRate ( 200psi/s )
	ORTSEngineBrakeReleaseRate ( 38psi/s )
	ORTSEngineBrakeApplicationRate ( 34psi/s )
	ORTSBrakePipeTimeFactor ( 0.003 )
	ORTSBrakeEmergencyTimeFactor ( 0.1 )
	ORTSBrakeServiceTimeFactor ( 1.009 )
	ORTSAirBrakeMainResVolume ( 28.35ft^3 )
	TrainPipeLeakRate ( 0.0833psi/s )
	TrainBrakesControllerMaxReleaseRate ( 10psi/s )

MaxForce ( 155926N ) #( comprovado )
MaxContinuousForce ( 109246N ) #( comprovado )
ORTSMaxTractiveForceCurves (					
		 0 (		
			0.00	0
			1.39	0
			2.78	0
			7.50	0
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
			0.00	109246
			1.39	56225
			2.78	28112
			7.50	10412
			8.33	9371
			11.11	7028
			13.89	5622
			16.67	4685
			19.44	4016
			22.22	3514
			25.00	3124
			27.78	2811
			30.56	2556
			33.33	2343
		)		
		 0.25 (		
			0.00	109246
			1.39	109246
			2.78	56225
			7.50	20824
			8.33	18742
			11.11	14056
			13.89	11245
			16.67	9371
			19.44	8032
			22.22	7028
			25.00	6247
			27.78	5622
			30.56	5111
			33.33	4685
		)		
		 0.375 (		
			0.00	109246
			1.39	109246
			2.78	84337
			7.50	31236
			8.33	28112
			11.11	21084
			13.89	16867
			16.67	14056
			19.44	12048
			22.22	10542
			25.00	9371
			27.78	8434
			30.56	7667
			33.33	7028
		)		
		 0.5 (		
			0.00	109246
			1.39	109246
			2.78	109246
			7.50	41648
			8.33	37483
			11.11	28112
			13.89	22490
			16.67	18742
			19.44	16064
			22.22	14056
			25.00	12494
			27.78	11245
			30.56	10223
			33.33	9371
		)		
		 0.625 (		
			0.00	109246
			1.39	109246
			2.78	109246
			7.50	52060
			8.33	46854
			11.11	35140
			13.89	28112
			16.67	23427
			19.44	20080
			22.22	17570
			25.00	15618
			27.78	14056
			30.56	12778
			33.33	11713
		)		
		 0.75 (		
			0.00	109246
			1.39	109246
			2.78	109246
			7.50	62472
			8.33	56225
			11.11	42168
			13.89	33735
			16.67	28112
			19.44	24096
			22.22	21084
			25.00	18742
			27.78	16867
			30.56	15334
			33.33	14056
		)		
		 0.875 (		
			0.00	109246
			1.39	109246
			2.78	109246
			7.50	72884
			8.33	65595
			11.11	49197
			13.89	39357
			16.67	32798
			19.44	28112
			22.22	24598
			25.00	21865
			27.78	19679
			30.56	17890
			33.33	16399
		)		
		 1 (		
			0.00	109246
			1.39	109246
			2.78	109246
			7.50	83296
			8.33	74966
			11.11	56225
			13.89	44980
			16.67	37483
			19.44	32128
			22.22	28112
			25.00	24989
			27.78	22490
			30.56	20445
			33.33	17652
		)	
	)			
