
	Sound ("CP501eng.sms" )
	Lights ( 3
		Light (
			comment( Head Sphere of light)
			Type ( 1 )
			Conditions(
				Headlight ( 3 )
				Unit ( 2 )
				)
			Cycle	( 0 )
			FadeIn	( 0.5 )
			FadeOut	( 0.5 )
			States	( 1
				State	(
					Duration ( 0.0 )
					LightColour ( d0ffffd5 )
					Position ( 0 3.999 5.431 )
					Transition ( 0 )
					Radius ( 100.0 )
					Angle ( 25.0 )
				)
			)
		)
		Light (
			comment( Head light main )
			Type ( 0 )
			Conditions (
				Headlight ( 3 )
				Unit ( 2 )
				)
			FadeIn	( 0.5 )
			FadeOut	( 0.5 )
			Cycle	( 0 )
			States	( 1
				State	(
					Duration ( 0.0 )
					LightColour ( ffffffb5 )
					Position ( 0 3.999 5.443 )
					Azimuth ( 0.0 0.0 5.0 )
					Transition ( 0 )
					Radius ( 1.0 )
				)
			)
		)
		Light (
			Comment( light_3 )
			Type ( 0 )
			Conditions (
				Headlight ( 0 )
                        Unit ( 0 )
			      )
			FadeIn	( 0.5 )
			FadeOut	( 0.5 )
			Cycle	( 0 )
			States	(	3
				State	(
					Duration ( 0.05 )
					LightColour ( 80ff7200 )
					Position ( 0.128 2.013 -4.89 )
					Azimuth ( -180 -180 -180 )
					Transition ( 0 )
					Radius ( 1.2 )
					)
				State	(
					Duration ( 0.05 )
					LightColour ( 80ffe610 )
					Position ( 0.128 2.013 -4.89 )
					Azimuth ( -180 -180 -180 )
					Transition ( 0 )
					Radius ( 1.2 )
					)
				State	(
					Duration ( 0.05 )
					LightColour ( 80ff7830 )
					Position ( 0.128 2.013 -4.89 )
					Azimuth ( -180 -180 -180 )
					Transition ( 0 )
					Radius ( 1.2 )
				)
			)
		)
	)