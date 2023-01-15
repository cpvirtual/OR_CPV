
Comment ( ORTS Diesel Engine for CP 1960 Bombardier - Heavy Trains )
Comment ( *** Diesel Engine *** )
	Type 					( Diesel )
	MaxPower 				( 1655kW )
	MaxForce 				( 450kN )
	MaxContinuousForce 		( 282kN )
	MaxVelocity 			( 120kmh )
	ORTSContinuousForceTimeFactor ( 1800 )
	MaxTemperature 		      ( 93.3degC )
	MaxOilPressure 		      ( 59.738psi )

	MaxDieselLevel 			( 3500l )
	DieselEngineSpeedOfMaxTractiveEffort( 17.3mph )
	DieselEngineType 			( electric )


Comment ( *** General *** )
	WheelRadius ( 0.55m )
	Sanding ( 25mph )
	NumWheels ( 6 )
	DoesHornTriggerBell ( 0 )
	ORTSDriveWheelWeight ( 121t )

Comment ( *** Electric Motor *** )
	MaxCurrent ( 1800A )
	ORTSElectricTrainSupply ( Mode ( Unfitted ))

Comment ( *  * )
ORTSDieselEngines ( 1			
	Diesel(		
		IdleRPM	( 275 )	
		MaxRPM	( 1050 )	
		StartingRPM	( 175 )	
		StartingConfirmRPM	( 325 )	
		ChangeUpRPMpS	( 98 )	
		ChangeDownRPMpS	( 62 )
		RateOfChangeUpRPMpSS	( 36 )
		RateOfChangeDownRPMpSS	( 25 )
		MaximalPower	( 1752395 )
		IdleExhaust	( 1.2 )
		MaxExhaust	( 2.2 )
		ExhaustDynamics	( 1.6 )
		ExhaustDynamicsDown	( 0.8 )
		ExhaustColor	( 20161819 )
		ExhaustTransientColor	( 40212324 )
		DieselPowerTab (		
			0	0
			373	219049
			471	438099
			569	657148
			667	876197
			765	1095247
			863	1314296
			961	1533345
			1050 1752395
		)		
		DieselConsumptionTab (		
			0	0
			275	60
			1050	780
		)		
		ThrottleRPMTab (		
			0	275
			12.5	373
			25	471
			37.5	569
			50	667
			62.5	765
			75	863
			87.5	961
			100	1050
		)
		DieselTorqueTab (		
			0	0
			275	42971.8
			1050 11148.3
		)		
	MinOilPressure	( 25 )	
	MaxOilPressure	( 71.12 )	
	MaxTemperature	( 85 )	
	Cooling	( 3 )	
	TempTimeConstant	( 720 )	
	OptTemperature	( 71 )	
	IdleTemperature	( 55 )	
	)		
)

ORTSMaxTractiveForceCurves (					
		0 (			
			0	0	
			4.31	0	
			6.71	0	
			8.94	0	
			11.18	0	
			13.41	0	
			15.65	0	
			17.88	0	
			22.35	0	
			26.82	0	
			31.29	0
	)
	0.125 (				
			0	40109	
			4.31	40109	
			6.71	25780	
			8.94	19335	
			11.18	15468	
			13.41	12890	
			15.65	11049	
			17.88	9668	
			22.35	7734
			26.82	6445	
			31.29	5524
	)
	0.25 (				
			0	80219	
			4.31	80219	
			6.71	51560	
			8.94	38670	
			11.18	30936	
			13.41	25780	
			15.65	22097	
			17.88	19335	
			22.35	15468	
			26.82	12890	
			31.29	11049
	)
	0.375 (				
			0	120328	
			4.31	120328	
			6.71	77340	
			8.94	58005	
			11.18	46404	
			13.41	38670	
			15.65	33146	
			17.88	29003	
			22.35	23202	
			26.82	19335	
			31.29	16573
	)
	0.50 (				
			0	160437	
			4.31	160437	
			6.71	103120	
			8.94	77340	
			11.18	61872	
			13.41	51560	
			15.65	44194	
			17.88	38670	
			22.35	30936	
			26.82	25780	
			31.29	22097
	)
	0.625 (				
			0	200547	
			4.31	200547	
			6.71	128901	
			8.94	96675	
			11.18	77340	
			13.41	64450	
			15.65	55243	
			17.88	48338	
			22.35	38670	
			26.82	32225	
			31.29	27622
	)
	0.75 (
			0	240656	
			4.31	240656	
			6.71	154681	
			8.94	116010	
			11.18	92808	
			13.41	77340	
			15.65	66292	
			17.88	58005	
			22.35	46404	
			26.82	38670	
			31.29	33146
	)
	0.875 (				
			0	280765	
			4.31	280765	
			6.71	180461	
			8.94	135346	
			11.18	108276	
			13.41	90230	
			15.65	77340	
			17.88	67673	
			22.35	54138	
			26.82	45115	
			31.29	38670
	)
	1.0 (				
			0	320874	
			4.31	320874	
			6.71	206241	
			8.94	154681	
			11.18	123745	
			13.41	103120	
			15.65	88389	
			17.88	77340	
			22.35	61872	
			26.82	51560	
			31.29	44194
	)
)

	