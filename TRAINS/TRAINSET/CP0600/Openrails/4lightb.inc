
	Sound ( "K31Eng.sms" )
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
			comment ( White rear top light)
			Type( 0 )
			Conditions (
				Headlight ( 3 )
				Unit ( 5 )
				)
			FadeIn	( 0.6 )
			FadeOut	( 0.6 )
			Cycle	( 0 )
			States	( 1
				State	(
					Duration ( 0.0 )
					LightColour ( 80ffffc0 )
					Position ( 0.0 3.729 -12.934 )
					Azimuth ( -180 -180 -180 )
					Transition ( 0 )
					Radius ( 2.0 )
					)
				)
			)
		Light	(
			comment( White rear light left )
			Type( 0 )
			Conditions (
				Headlight ( 4 )
				Unit ( 5 )
				)
			FadeIn	( 0.5 )
			FadeOut	( 0.5 )
			Cycle	( 0 )
			States	( 1
				State	(
					Duration ( 0.0 )
					LightColour ( 80ffffc0 )
					Position ( -1.199 1.585 -12.844 )
					Azimuth ( -180 -180 -180 )
					Transition ( 0 )
					Radius ( 0.75 )
					)
				)
			)
		Light	(
			comment( White rear light right )
			Type( 0 )
			Conditions (
				Headlight ( 4 )
				Unit ( 5 )
				)
			FadeIn	( 0.5 )
			FadeOut	( 0.5 )
			Cycle	( 0 )
			States	( 1
				State	(
					Duration ( 0.0 )
					LightColour ( 80ffffc0 )
					Position ( 1.199 1.585 -12.844 )
					Azimuth ( -180 -180 -180 )
					Transition ( 0 )
					Radius ( 0.75 )
					)
				)
			)
		Light	(
			comment( red rear light right )
			Type		( 0 )
			Conditions	(
				Headlight ( 4 )
				Unit ( 3 )
				)
			FadeIn	( 0.5 )
			FadeOut	( 0.5 )
			Cycle	( 0 )
			States	( 1
				State	(
					Duration ( 0.0 )
					LightColour ( ffff0000 )
					Position ( 0.931 1.585 -12.844 )
					Azimuth ( -180 -180 -180 )
					Transition ( 0 )
					Radius ( 0.50 )
					)
				)
			)
		Light	(
			comment( red rear light left )
			Type		( 0 )
			Conditions	(
				Headlight ( 4 )
				Unit ( 3 )
				)
			FadeIn	( 0.5 )
			FadeOut	( 0.5 )
			Cycle	( 0 )
			States	(	1
				State	(
					Duration ( 0.0 )
					LightColour ( ffff0000 )
					Position ( -0.931 1.585 -12.844 )
					Azimuth ( -180 -180 -180 )
					Transition ( 0 )
					Radius ( 0.50 )
					)
				)
			)
		)
	