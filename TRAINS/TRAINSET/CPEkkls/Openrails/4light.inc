
    	Sound (	"..\\..\\sound\\pt_sound\\genptwag1.sms" )
	Lights	( 2			
		Light	(
			comment( Rear red light )
			Type		( 0 )
			Conditions	(
				Service ( 2 )
				Unit ( 3 )
			)
			FadeIn	( 0.5 )
			FadeOut	( 0.5 )
			Cycle		( 0 )
			States	(	1
				State	(
					Duration ( 0.0 )
					LightColour ( 80ff0000 )
					Position ( -1 2 -4.56 )
					Azimuth ( -180 -180 -180 )
					Transition ( 0 )
					Radius ( 1.0 )
				)
			)
		)
		Light	(
			comment( Front red light )
			Type		( 0 )
			Conditions	(
				Service ( 2 )
				Unit ( 2 )
			)
			FadeIn	( 0.5 )
			FadeOut	( 0.5 )
			Cycle		( 0 )
			States	(	1
				State	(
					Duration ( 0.0 )
					LightColour ( 80ff0000 )
					Position ( 1 2 4.56 )
					Azimuth ( 0 0 0 )
					Transition ( 0 )
					Radius ( 1.0 )
				)
			)
		)
	)
	