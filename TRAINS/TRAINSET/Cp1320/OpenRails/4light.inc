
	Sound (	"CP1320Eng.sms" )
	Lights	(	11
		Light	(
			comment( Sphere of light )
			Type		( 1 )
			Conditions	(
				Headlight ( 2 )
				Unit ( 2 )
				)
			Cycle	( 0 )
			FadeIn	( 0.5 )
			FadeOut	( 0.5 )
			States	(	1
				State	(
					Duration ( 0.0 )
					LightColour ( ffffffff )
					Position ( 0.0 3.5 18 )
					Transition ( 0 )
					Radius ( 400.0 )
					Angle ( 15.0 )
					)
				)
			)

		Light	(
			comment( Head light left dim )
			Type		( 0 )
			Conditions	(
				Headlight ( 2 )
				Unit ( 2 )
				)
			FadeIn	( 0.5 )
			FadeOut	( 0.5 )
			Cycle	( 0 )
			States	(	1
				State	(
					Duration ( 0.0 )
					LightColour ( 80ffffff )
					Position ( -0.7 1.73 7.95 )
					Azimuth ( 0.0 -5.0 5.0 )
					Transition ( 0 )
					Radius ( 0.5 )
					)
				)
			)
		Light	(
			comment( Head light right dim )
			Type		( 0 )
			Conditions	(
				Headlight ( 2 )
				Unit ( 2 )
				)
			FadeIn	( 0.5 )
			FadeOut	( 0.5 )
			Cycle	( 0 )
			States	(	1
				State	(
					Duration ( 0.0 )
					LightColour ( 80ffffff )
					Position ( 0.7 1.73 7.95 )
					Azimuth ( 0.0 -5.0 5.0 )
					Transition ( 0 )
					Radius ( 0.5 )
					)
				)
			)
		Light	(
			comment( Head light top bright )
			Type		( 0 )
			Conditions	(
				Headlight ( 2 )
				Unit ( 2 )
				)
			FadeIn	( 0.5 )
			FadeOut	( 0.5 )
			Cycle	( 0 )
			States	(	1
				State	(
					Duration ( 0.0 )
					LightColour ( ffffffff )
					Position ( 0.01 3.6 7.50 )
					Azimuth ( 0.0 -5.0 5.0 )
					Transition ( 0 )
					Radius ( 0.5 )
					)
				)
			)
		Light	(
			comment( Rear red left light )
			Type		( 0 )
			Conditions	(
				Headlight ( 2 )
				Unit ( 2 )
				)
			FadeIn	( 0.5 )
			FadeOut	( 0.5 )
			Cycle	( 0 )
			States	(	1
				State	(
					Duration ( 0.0 )
					LightColour ( 80ff0000 )
					Position ( -0.7 1.73 -7.95 )
					Azimuth ( -180 -180 -180 )
					Transition ( 0 )
					Radius ( 1.0 )
					)
				)
			)
		Light	(
			comment( Rear red right light )
			Type		( 0 )
			Conditions	(
				Headlight ( 2 )
				Unit ( 2 )
				)
			FadeIn	( 0.5 )
			FadeOut	( 0.5 )
			Cycle	( 0 )
			States	(	1
				State	(
					Duration ( 0.0 )
					LightColour ( 80ff0000 )
					Position ( 0.7 1.73 -7.95 )
					Azimuth ( -180 -180 -180 )
					Transition ( 0 )
					Radius ( 1.0 )
					)
				)
			)
		Light	(
			comment( Back light left dim )
			Type		( 0 )
			Conditions	(
				Headlight ( 3 )
				Unit ( 2 )
				)
			FadeIn	( 0.5 )
			FadeOut	( 0.5 )
			Cycle	( 0 )
			States	(	1
				State	(
					Duration ( 0.0 )
					LightColour ( 80ffffff )
					Position ( -0.7 1.73 -7.95 )
					Azimuth ( -180 -180 -180 )
					Transition ( 0 )
					Radius ( 0.5 )
					)
				)
			)
		Light	(
			comment( Back light right dim )
			Type		( 0 )
			Conditions	(
				Headlight ( 3 )
				Unit ( 2 )
				)
			FadeIn	( 0.5 )
			FadeOut	( 0.5 )
			Cycle	( 0 )
			States	(	1
				State	(
					Duration ( 0.0 )
					LightColour ( 80ffffff )
					Position ( 0.7 1.73 -7.95 )
					Azimuth ( -180 -180 -180 )
					Transition ( 0 )
					Radius ( 0.5 )
					)
				)
			)
		Light	(
			comment( Back light top bright )
			Type		( 0 )
			Conditions	(
				Headlight ( 3 )
				Unit ( 2 )
				)
			FadeIn	( 0.5 )
			FadeOut	( 0.5 )
			Cycle	( 0 )
			States	(	1
				State	(
					Duration ( 0.0 )
					LightColour ( ffffffff )
					Position ( 0.01 3.6 -7.55 )
					Azimuth ( -180 -180 -180 )
					Transition ( 0 )
					Radius ( 0.5 )
					)
				)
			)
		Light	(
			comment( Front red left light )
			Type		( 0 )
			Conditions	(
				Headlight ( 3 )
				Unit ( 2 )
				)
			FadeIn	( 0.5 )
			FadeOut	( 0.5 )
			Cycle	( 0 )
			States	(	1
				State	(
					Duration ( 0.0 )
					LightColour ( 80ff0000 )
					Position ( -0.7 1.73 7.95 )
					Azimuth ( 0.0 -5.0 -5.0 )
					Transition ( 0 )
					Radius ( 1.0 )
					)
				)
			)
		Light	(
			comment( Front red right light )
			Type		( 0 )
			Conditions	(
				Headlight ( 3 )
				Unit ( 2 )
				)
			FadeIn	( 0.5 )
			FadeOut	( 0.5 )
			Cycle	( 0 )
			States	(	1
				State	(
					Duration ( 0.0 )
					LightColour ( 80ff0000 )
					Position ( 0.7 1.73 7.95 )
					Azimuth ( 0.0 -5.0 -5.0 )
					Transition ( 0 )
					Radius ( 1.0 )
					)
				)
			)
		)
		