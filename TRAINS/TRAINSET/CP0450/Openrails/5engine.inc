 
Comment ( *** Diesel Engine *** )
	Type ( Diesel )
	MaxPower ( 494kW ) Comment (* comprovado a partir ficha técnica *)
	MaxForce ( 64kN )
	MaxContinuousForce ( 21.38kN )
	MaxVelocity ( 120kmh )

	MaxTemperature ( 85 )
	MaxOilPressure ( 71.12 )
	MaxDieselLevel ( 1100 ) Comment (* comprovado a partir ficha técnica de 1983 *)
	DieselUsedPerHourAtMaxPower ( 165 ) Comment (* calculado a partir ficha técnica de 1983 *)
	DieselUsedPerHourAtIdle ( 10 ) Comment (* calculado partir ficha técnica de 1983 *)

	DieselEngineIdleRPM ( 950 )
	DieselEngineMaxRPM ( 1900 ) Comment (* comprovado em ficha técnica*)
	DieselEngineMaxRPMChangeRate ( 140 )
	DieselEngineSpeedOfMaxTractiveEffort( 33kmh )

	ORTSContinuousForceTimeFactor ( 3600 )
	ORTSSpeedOfMaxContinuousForce ( 12.39kph )																				
	ORTSTractionCharacteristics (	14	6
		throttle (		0	0.25		0.50		1.75		1	)
		table (						
			0km/h		0.0N	63743N	127486N	191229N	254972N
			4km/h		0.0N	50692N	101384N	152076N	202768N
			8km/h		0.0N	25346N	50692N	76038N	101384N
			19km/h	0.0N	10695N	21389N	32084N	42778N
			24km/h	0.0N	8449N		16897N	25346N	33795N
			32km/h	0.0N	6336N		12673N	19009N	25346N
			40km/h	0.0N	5069N		10138N	15208N	20277N
			56km/h	0.0N	3621N		7242N		10863N	14483N
			72km/h	0.0N	2816N		5632N		8449N		11265N
			88km/h	0.0N	2304N		4608N		6913N		9217N
			104km/h	0.0N	1950N		3899N		5849N		7799N
			120km/h	0.0N	1690N		3379N		5069N		6759N
			110km/h	0.0N	1491N		2982N		4473N		5964N
			136km/h	0.0N	1334N		2668N		4002N		5336N
		)					
	)



Comment ( *** General *** )
	WheelRadius ( 0.425m )
	Sanding ( 15kph )
	NumWheels ( 4 )
	ORTSDriveWheelWeight ( 33.058t )
