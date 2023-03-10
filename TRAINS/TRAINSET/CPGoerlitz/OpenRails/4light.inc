
	Lights	( 2			
		Light	(
			comment( Rear red light )
			Type		( 0 )
			Conditions	(
				Service ( 2 )
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
					Position ( -1 2.15 -7.41 )
					Azimuth ( -180 -180 -180 )
					Transition ( 0 )
					Radius ( 1 )
				)
			)
		)
		Light	(
			comment( Front red light )
			Type		( 0 )
			Conditions	(
				Service ( 2 )
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
					Position ( 1 2.15 7.41 )
					Azimuth ( 0 0 0 )
					Transition ( 0 )
					Radius ( 1 )
				)
			)
		)
	)
