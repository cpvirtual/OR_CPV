
Comment ( Ver2 Standard ORTS Diesel Engine for Alco RS3 )
Comment ( Alco Operating Manual TP401 for Model RS-3 1600-HP Road Switcher )
Comment ( Derek Morton Train physics )
Comment ( Power Ratings == Gross HP 1705 == Traction HP 1600 == Rail HP 1312 )
Comment ( Continuous Tractive Effort 43425lb @ 11.18mph==82%eff. == Starting Tractive Effort 61750lb )
Comment ( Mass 250000lbs = 113.398t == metric, Adhesion Factor = 24.7% )
Comment ( Mass×Adhesion Factor = Starting Tractive Effort )
Comment ( Brake HP -- bhp = Power-at-the-shaft = Gross HP or MaximalPower )
Comment ( Gross HP per technical specs or lacking good data == add 130hp to 150hp to Traction HP )
Comment ( include ( "..\\..\\Common.inc\\Locomotives\\Std_Eng_RS3_113-4t.inc" ) )

ORTSDieselEngines ( 1			
	Diesel (		
	IdleRPM ( 275 )		
	MaxRPM ( 1000 )
	StartingRPM ( 150 )
	StartingConfirmRPM ( 325 )		
	ChangeUpRPMps ( 93 )		
	ChangeDownRPMps ( 59 )		
	RateOfChangeUpRPMpSS ( 14 )		
	RateOfChangeDownRPMpSS ( 9 )		
	MaximalPower ( 1271419W )		
	IdleExhaust ( 1.2 )		
	MaxExhaust ( 2.2 )
	ExhaustDynamics ( 1.6 )		
	ExhaustDynamicsDown ( 0.8 )		
	ExhaustColor ( 20161819 )		
	ExhaustTransientColor ( 40212324 )		
	DieselPowerTab (		
		0	0
		350	158834
		443	317668
		536	476502
		629	636082
		722	794916
		815	953750
		908	1112584
		1000 1271419
	)		
	DieselConsumptionTab (		
		0	0
		275	17.8
		1000 343.0
	)		
	ThrottleRPMTab (		
		0	275
		12.5	350
		25	443
		37.5	536
		50	629
		62.5	722
		75	815
		87.5	908
		100	1000
	)		
	DieselTorqueTab (		
		0	0
		350	34687
		443	27405
		536	22650
		629	19301
		722	16815
		815	14896
		908	13371
		1000 12141
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

MaxForce ( 274369N )
MaxContinuousForce ( 193164N )
ORTSMaxTractiveForceCurves (					
		0 (			
			0	0	
			3.52	0	
			4.65	0	
			6.04	0	
			7.71	0	
			9.83	0	
			12.52	0	
			16.09	0	
			20.56	0	
			25.03	0	
			29.06	0	)
	0.125 (				
			0	34297	
			3.52	34297	
			4.65	25967	
			6.04	20004	
			7.71	15655	
			9.83	12275	
			12.52	9645	
			16.09	7502	
			20.56	5871	
			25.03	4823	
			29.06	4155	)
	0.25 (				
			0	68593	
			3.52	68593	
			4.65	51933	
			6.04	40008	
			7.71	31310	
			9.83	24550	
			12.52	19290	
			16.09	15003	
			20.56	11742	
			25.03	9645	
			29.06	8310	)
	0.375 (				
			0	102889	
			3.52	102889	
			4.65	77899	
			6.04	60011	
			7.71	46965	
			9.83	36825	
			12.52	28934	
			16.09	22504	
			20.56	17612	
			25.03	14467	
			29.06	12464	)
	0.50 (				
			0	137185	
			3.52	137185	
			4.65	103865	
			6.04	80015	
			7.71	62620	
			9.83	49100	
			12.52	38579	
			16.09	30006	
			20.56	23483	
			25.03	19290	
			29.06	16619	)
	0.625 (				
			0	171481	
			3.52	171481	
			4.65	129831	
			6.04	100018	
			7.71	78275	
			9.83	61375	
			12.52	48223	
			16.09	37507	
			20.56	29354	
			25.03	24112	
			29.06	20773	)
	0.75 (				
			0	205777	
			3.52	205777	
			4.65	155797	
			6.04	120022	
			7.71	93930	
			9.83	73650	
			12.52	57868	
			16.09	45008	
			20.56	35224	
			25.03	28934	
			29.06	24928	)
	0.875 (				
			0	240073	
			3.52	240073	
			4.65	181764	
			6.04	140025	
			7.71	109585	
			9.83	85925	
			12.52	67512	
			16.09	52510	
			20.56	41095	
			25.03	33756	
			29.06	29083	)
	1.0 (				
			0	274369	
			3.52	274369	
			4.65	207730	
			6.04	160029	
			7.71	125240	
			9.83	98200	
			12.52	77157	
			16.09	60011	
			20.56	46965	
			25.03	38579	
			29.06	33237	)
		)			
