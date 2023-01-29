
Comment ( Standard ORTS Diesel Engine for CP 1500 Alco )
Comment ( Performance Ratings == Gross HP 2185 == Traction HP 1730 == CTE 21000kg @ 21kph==81%eff. == STE 17000kg )
Comment ( Performance Ratings == Gross HP 2185 == Traction HP 1730 == CTE 46297lb @ 13mph==81%eff. == STE 37479lb )
Comment ( Mass 244713lbs = 111t == metric, Adhesion Factor = 22% )

Comment ( *** Diesel Engine *** )
	Type					( Diesel )
	MaxPower				( 1273kW ) #(* 1730cv comprovado em ficha técnica nº8 ed1987*)
	MaxForce				( 166713.05 ) #(* 17 tf comprovado em ficha técnica nº8 ed1987*)
	MaxContinuousForce		( 205939.65 ) #(* 21tf comprovado em ficha técnica nº8 ed1987*)
	MaxVelocity				( 120kmh )
	MaxDieselLevel			( 2976l )
	DieselEngineSpeedOfMaxTractiveEffort ( 21kmh )
	DieselEngineType 			( electric )


Comment ( *** General *** )
	WheelRadius			( 0.508m ) #(* comprovado em ficha técnica nº8 ed1987*)
	Sanding			( 25mph )
	ORTSNumberDriveAxles 	( 4 )
	DoesHornTriggerBell	( 0 )
	ORTSDriveWheelWeight	( 78t ) #(* comprovado em ficha técnica nº8 ed1987*)

Comment ( *** Electric Motor *** )
	MaxCurrent 			( 1500A )
	ORTSElectricTrainSupply ( Mode ( Unfitted ))

Comment ( * ALCO 251-C V12 * )
ORTSDieselEngines ( 1		
	Diesel(		
		IdleRPM			( 350 ) #(* comprovado em manual de conducao*)
		MaxRPM			( 1025 ) #(* comprovado em ficha técnica nº8 ed1987*)
		StartingRPM			( 250 )
		StartingConfirmRPM	( 400 )
		ChangeUpRPMpS		( 81 )
		ChangeDownRPMpS		( 51 )
		RateOfChangeUpRPMpSS	( 34 )
		RateOfChangeDownRPMpSS	( 23 )
		MaximalPower		( 1290061W )
		IdleExhaust 		( 4.375 ) #( 4-stroke = rpm / 80 )
		MaxExhaust 			( 12.813 ) #( 4-stroke = rpm / 80 )
		ExhaustDynamics		( 1.6 )
		ExhaustDynamicsDown	( 0.8 )
		ExhaustColor		( 20161819 )
		ExhaustTransientColor	( 40212324 )
		DieselPowerTab (		
			0	0
			431	460646
			512	575178
			593	689711
			674	804243
			755	918775
			836	1033307
			917	1147839
			1025	1290061
		)
		Comment (* Consumo comprovado e calculado a partir de dados do INTF e dados da CP de 1983 *)		
		DieselConsumptionTab (		
			0	0
			350	25
			1025	372
		)		
		ThrottleRPMTab (		
			0	350
			12.5	431
			25	512
			37.5	598
			50	684
			62.5	765
			75	856
			87.5	937
			100	1025
		)		
		DieselTorqueTab (		
			0	0
			350	25959.9
			1025	8864.4
		)
		MinOilPressure	( 17.068 ) #(* 1,2 kg.cm2 comprovado em manual de conducao*)
		MaxOilPressure	( 71.116 ) #(* 5 kg.cm2 comprovado em manual de conducao*)
		MaxTemperature	( 85degC ) #(* comprovado em manual de conducao*)
		Cooling		( 3 ) #( 0=No cooling, 1=Mechanical, 2= Hysteresis, 3=Proportional )
		TempTimeConstant	( 720 )
		OptTemperature	( 71degC ) #(* comprovado em manual de conducao*)
		IdleTemperature	( 55 )
	)		
)
