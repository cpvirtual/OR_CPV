
	Lights	(	5
		Light	(
			comment( Sphere of light )
			Type	( 1 )
			Conditions (
				Headlight ( 3 )
				Unit ( 2 )
				)
			Cycle	( 0 )
			FadeIn	( 0.5 )
			FadeOut	( 0.5 )
			States	( 1
				State	(
					Duration ( 0.0 )
					LightColour ( ffffffff )
					Position ( 0.0 3.1683 10.5318 )
					Transition ( 0 )
					Radius ( 300.0 )
					Angle ( 25.0 )
					)
				)
			)
	

		Light	(
			comment( Head light top bright )
			Type( 0 )
			Conditions(
				Headlight ( 3 )
				Unit ( 0 )
				)
			FadeIn	( 0.5 )
			FadeOut	( 0.5 )
			Cycle	( 0 )
			States	( 1
				State	(											
					Duration ( 0.0 )
					LightColour ( ffffffff )
					Position ( 0.0 3.1683 10.5318 )
					Azimuth ( 0.0 0.0 0.0 )
					Transition ( 0 )
					Radius ( 0.8 )
					Elevation ( 0.0 0.0 0.0 )
					)
				)
			)
			
					Light	(
			comment( Head light dim )
			Type( 0 )
			Conditions (
				Headlight ( 4 )
				Unit ( 0 )
				)
			FadeIn	( 0.5 )
			FadeOut	( 0.5 )
			Cycle	( 0 )
			States	( 1
				State	(
					Duration ( 0.0 )
					LightColour ( 80ffffff )
					Position ( 1.1046 1.4471 10.5339 )
					Azimuth ( 0.0 0.0 0.0 )
					Transition ( 0 )
					Radius ( 0.75 )
					Elevation ( 0.0 0.0 0.0 )
					)
				)
			)
			
							Light	(
			comment( Head light dim )
			Type( 0 )
			Conditions (
				Headlight ( 4 )
				Unit ( 0 )
				)
			FadeIn	( 0.5 )
			FadeOut	( 0.5 )
			Cycle	( 0 )
			States	( 1
				State	(
					Duration ( 0.0 )
					LightColour ( 80ffffff )
					Position ( -1.1046 1.4471 10.5339 )
					Azimuth ( 0.0 0.0 0.0 )
					Transition ( 0 )
					Radius ( 0.75 )
					Elevation ( 0.0 0.0 0.0 )
					)
				)
			)
			
		Light	(
			comment( Back Red light right )
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
			Cycle	( 0 )
			States	( 1
				State	(
					Duration ( 0.0 )
					LightColour ( ffff0000 )
					Position ( 1.1046 1.4471 -10.5339 )
					Azimuth ( -180 -180 -180 )
					Transition ( 0 )
					Radius ( 0.50 )
					Elevation ( 0.0 0.0 0.0 )
					)
				)
			)
			
		Light	(
			comment( Back Red light left )
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
			Cycle	( 0 )
			States	(	1
				State	(
					Duration ( 0.0 )
					LightColour ( ffff0000 )
					Position ( -1.1046 1.4471 -10.5339 )
					Azimuth ( -180 -180 -180 )
					Transition ( 0 )
					Radius ( 0.50 )
					Elevation ( 0.0 0.0 0.0 )
					)
				)
			)
		)
		