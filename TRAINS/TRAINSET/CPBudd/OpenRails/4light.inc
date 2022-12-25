
    	Sound (	"..\\sound\\pt_sound\\genptcar2.sms" )
	Lights	(	2		
		Light	(
			comment( Rear red light )
			Type		( 0 )
			Conditions	(
				Headlight ( 2 )
				Unit ( 3 )
			)
			FadeIn	( 0.5 )
			FadeOut	( 0.5 )
			Cycle		( 0 )
			States	(	1
				State	(
					Duration ( 0.0 )
					LightColour ( 80ff0000 )
					Position ( 1.150 1.825 -11.200 )
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
				Headlight ( 2 )
				Unit ( 2 )
			)
			FadeIn	( 0.5 )
			FadeOut	( 0.5 )
			Cycle		( 0 )
			States	(	1
				State	(
					Duration ( 0.0 )
					LightColour ( 80ff0000 )
					Position ( -1.150 1.825 11.200 )
					Azimuth ( 0 0 0 )
					Transition ( 0 )
					Radius ( 1.0 )
				)
			)
		)
	)
	