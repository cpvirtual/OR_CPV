
	Sound ( "cp600eng.sms" )
	Lights	(	6
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
					Position ( 0.0 3.5 18 )
					Transition ( 0 )
					Radius ( 300.0 )
					Angle ( 25.0 )
					)
				)
			)
		Light	(
			comment ( White Head top light)
			Type( 0 )
			Conditions (
				Headlight ( 3 )
				Unit ( 2 )
				)
			FadeIn	( 0.6 )
			FadeOut	( 0.6 )
			Cycle	( 0 )
			States	( 1
				State	(
					Duration ( 0.0 )
					LightColour ( 80ffffc0 )
					Position ( 0.0 3.729 12.79 )
					Azimuth ( 0 0 0 )
					Transition ( 0 )
					Radius ( 2.0 )
					)
				)
			)
		Light	(
			comment( White Front light left )
			Type( 0 )
			Conditions (
				Headlight ( 4 )
				Unit ( 2 )
				)
			FadeIn	( 0.5 )
			FadeOut	( 0.5 )
			Cycle	( 0 )
			States	( 1
				State	(
					Duration ( 0.0 )
					LightColour ( 80ffffc0 )
					Position ( -1.199 1.585 12.7 )
					Azimuth ( 0 0 0 )
					Transition ( 0 )
					Radius ( 0.75 )
					)
				)
			)
		Light	(
			comment( White Front light right )
			Type( 0 )
			Conditions (
				Headlight ( 4 )
				Unit ( 2 )
				)
			FadeIn	( 0.5 )
			FadeOut	( 0.5 )
			Cycle	( 0 )
			States	( 1
				State	(
					Duration ( 0.0 )
					LightColour ( 80ffffc0 )
					Position ( 1.199 1.585 12.7 )
					Azimuth ( 0 0 0 )
					Transition ( 0 )
					Radius ( 0.75 )
					)
				)
			)
		Light	(
			comment( red head light right )
			Type		( 0 )
			Conditions	(
				Headlight ( 4 )
				Unit ( 4 )
				)
			FadeIn	( 0.5 )
			FadeOut	( 0.5 )
			Cycle	( 0 )
			States	( 1
				State	(
					Duration ( 0.0 )
					LightColour ( ffff0000 )
					Position ( 0.931 1.585 12.7 )
					Azimuth ( 0 0 0 )
					Transition ( 0 )
					Radius ( 0.50 )
					)
				)
			)
		Light	(
			comment( red head light left )
			Type		( 0 )
			Conditions	(
				Headlight ( 4 )
				Unit ( 4 )
				)
			FadeIn	( 0.5 )
			FadeOut	( 0.5 )
			Cycle	( 0 )
			States	(	1
				State	(
					Duration ( 0.0 )
					LightColour ( ffff0000 )
					Position ( -0.931 1.585 12.7 )
					Azimuth ( 0 0 0 )
					Transition ( 0 )
					Radius ( 0.50 )
					)
				)
			)
		)
                	