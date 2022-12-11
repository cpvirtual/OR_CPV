
    	Sound (	"..\\sound\\pt_sound\\genptwag2.sms" )
	Lights	( 2			
		Light	(
			comment( Rear red light )
			Type		( 0 )
			Conditions	(
				Service ( 2 )
				Headlight ( 4 )
				Control ( 0 )
				Weather ( 0 )
				Coupling ( 0 )
				TimeOfDay ( 2 )
				Unit ( 3 )
			)
			FadeIn	( 0.5 )
			FadeOut	( 0.5 )
			Cycle		( 0 )
			States	(	1
				State	(
					Duration ( 0.0 )
					LightColour ( 80ff0000 )
					Position ( -0.543 1.372 -9.44 )
					Azimuth ( -180 -180 -180 )
					Transition ( 0 )
					Radius ( 0.3 )
				)
			)
		)
		Light	(
			comment( Front red light )
			Type		( 0 )
			Conditions	(
				Service ( 2 )
				Headlight ( 4 )
				Control ( 0 )
				Weather ( 0 )
				Coupling ( 0 )
				TimeOfDay ( 2 )
				Unit ( 2 )
			)
			FadeIn	( 0.5 )
			FadeOut	( 0.5 )
			Cycle		( 0 )
			States	(	1
				State	(
					Duration ( 0.0 )
					LightColour ( 80ff0000 )
					Position ( 0.543 1.372 9.44 )
					Azimuth ( 0 0 0 )
					Transition ( 0 )
					Radius ( 0.3 )
				)
			)
		)
	)
	