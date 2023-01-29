
	Sound (	"..\\sound\\pt_sound\\genptcar2.sms" ) 
	Lights	( 2
		Light	(
			comment( red light bright )
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
					Position ( -1.138 1.75 -11.55 )
					Azimuth ( -180 -180 -180 )
					Transition ( 0 )
					Radius ( 0.3 )
					)
				)
			)
		Light	(
			comment( red light bright )
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
					Position ( 1.138 1.75 11.55 )
					Azimuth ( 0 0 0 )
					Transition ( 0 )
					Radius ( 0.3 )
					)
				)
			)
		)
		