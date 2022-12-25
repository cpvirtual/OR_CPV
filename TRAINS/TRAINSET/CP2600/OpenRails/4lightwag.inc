
	Sound (	"2600eng.sms" )
	Lights	(	4
		Light	(
			comment( FRONT left red light)
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
					LightColour ( 80ff0000 )
					Position ( -0.577 1.573 8.39 )
					Azimuth ( 0 0 0 )
					Transition ( 0 )
					Radius ( 0.3 )
					)
				)
			)
		Light	(
			comment( FRONT right red light)
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
					LightColour ( 80ff0000 )
					Position ( 0.577 1.573 8.39 )
					Azimuth ( 0 0 0 )
					Transition ( 0 )
					Radius ( 0.3 )
					)
				)
			)
		Light	(
			comment ( REAR left red light )
			Type ( 0 )
			Conditions (
				Headlight ( 4 )
				Unit ( 3 )
			)
			FadeIn ( 0.5 )
			FadeOut ( 0.5 )
			Cycle ( 0 )
			States ( 1
				State (
					Duration ( 0 )
					LightColour ( FFFF0000 )
					Position ( -0.577 1.573 -8.39 )
					Azimuth ( -180 -180 -180 )
					Elevation ( 0 0 0 )
					Transition ( 0 )
					Radius ( 0.5 )
					)
				)
			)
            Light	(
			comment ( REAR right red light  )
			Type ( 0 )
			Conditions (
				Headlight ( 4 )
				Unit ( 3 )
			)
			FadeIn ( 0.5 )
			FadeOut ( 0.5 )
			Cycle ( 0 )
			States ( 1
				State (
					Duration ( 0 )
					LightColour ( FFFF0000 )
					Position ( 0.577 1.573 -8.39 )
					Azimuth ( -180 -180 -180 )
					Elevation ( 0 0 0 )
					Transition ( 0 )
					Radius ( 0.5 )
                              )
                        )
		)
	)
	