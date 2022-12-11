
	Lights	( 2
		Light	(
			comment( red light back )
			Type		( 0 )
			Conditions	(
				Unit ( 3 )
				Service ( 2 )
			)
			FadeIn	( 0.5 )
			FadeOut	( 0.5 )
			Cycle		( 0 )
			States	(	1
				State	(
					Duration ( 0.0 )
					LightColour ( 80ff0000 )
					Position ( -1.15 2.15 -6.36 )
					Azimuth ( -180 -180 -180 )
					Transition ( 0 )
					Radius ( 1.0 )
					)
				)
			)
		Light	(
			comment( red light front )
			Type		( 0 )
			Conditions	(
				Unit ( 2 )
				Service ( 2 )
			)
			FadeIn	( 0.5 )
			FadeOut	( 0.5 )
			Cycle		( 0 )
			States	(	1
				State	(
					Duration ( 0.0 )
					LightColour ( 80ff0000 )
					Position ( 1.15 2.15 6.36 )
					Azimuth ( 0 0 0 )
					Transition ( 0 )
					Radius ( 1.0 )
					)
				)
			)
		)
		