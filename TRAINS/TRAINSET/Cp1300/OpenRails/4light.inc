
    	Sound ( "1300Eng.sms" )
	Lights	(	3
		Light	(
			comment( Sphere of light )
			Type		( 1 )
			Conditions	(
				Headlight ( 3 )
				Unit ( 2 )
				)
			Cycle	( 0 )
			FadeIn	( 0.5 )
			FadeOut	( 0.5 )
			States	(	1
				State	(
					Duration ( 0.0 )
					LightColour ( ffffffff )
					Position ( 0.0 3.5 18 )
					Transition ( 0 )
					Radius ( 450.0 )
					Angle ( 15.0 )
					)
				)
			)
		Light	(
			comment( Head light dim )
			Type		( 0 )
			Conditions	(
				Headlight ( 2 )
				Unit ( 2 )
				)
			FadeIn	( 0.5 )
			FadeOut	( 0.5 )
			Cycle	( 0 )
			States	(	1
				State	(
					Duration ( 0.0 )
					LightColour ( 80ffffff )
					Position ( 0.00 3.41 7.84 )
					Azimuth ( 0.0 0.0 0.0 )
					Transition ( 0 )
					Radius ( 1.0 )
					)
				)
			)
		Light	(
			comment( Head light bright )
			Type		( 0 )
			Conditions	(
				Headlight ( 3 )
				Unit ( 2 )
				)
			FadeIn	( 0.5 )
			FadeOut	( 0.5 )
			Cycle	( 0 )
			States	(	1
				State	(
					Duration ( 0.0 )
					LightColour ( ffffffff )
					Position ( 0.00 3.41 7.84 )
					Azimuth ( 0.0 0.0 0.0 )
					Transition ( 0 )
					Radius ( 1.3 )
				)
			)
		)
	)
	