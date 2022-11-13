
Comment ( Standard ORTS Diesel Engine for CP 1400 English Electric )
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
			450	23669
			850	32530
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
