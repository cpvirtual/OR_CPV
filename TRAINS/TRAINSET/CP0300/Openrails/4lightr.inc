
	Sound ( "k31eng.sms" )
	Lights	(	2
		Light	(
			comment( Red light right )
			Type		( 0 )
			Conditions	(
				TimeOfDay ( 2 )
				Unit ( 3 )
				)
			FadeIn	( 0.5 )
			FadeOut	( 0.5 )
			Cycle	( 0 )
			States	( 1
				State	(
					Duration ( 0.0 )
					LightColour ( ffff0000 )
					Position ( 0.996 1.71 -11.155 )
					Azimuth ( -180 -180 -180 )
					Transition ( 0 )
					Radius ( 0.45 )
					Elevation ( 0.0 0.0 0.0 )
				)
			)
		)
		Light	(
			comment( Red light left )
			Type		( 0 )
			Conditions	(
				TimeOfDay ( 2 )
				Unit ( 3 )
				)
			FadeIn	( 0.5 )
			FadeOut	( 0.5 )
			Cycle	( 0 )
			States	(	1
				State	(
					Duration ( 0.0 )
					LightColour ( ffff0000 )
					Position ( -0.996 1.71 -11.155 )
					Azimuth ( -180 -180 -180 )
					Transition ( 0 )
					Radius ( 0.45 )
					Elevation ( 0.0 0.0 0.0 )
				)
			)
		)
	)
