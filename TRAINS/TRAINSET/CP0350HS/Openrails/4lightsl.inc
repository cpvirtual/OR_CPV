
	Sound ( BA_Black5eng.sms )
Comment ( *** Lights *** )
      Lights ( 8
		Light	(
		comment( Head Sphere of light)
			Type( 1 )
			Conditions(
				Headlight ( 3 )
				Unit ( 2 )
				)
			Cycle	( 0 )
			FadeIn	( 0.5 )
			FadeOut	( 0.5 )
			States	( 1
				State	(
					Duration ( 0 )
					LightColour ( d0ffffd5 )
					Position ( 0 3.71 4.15 )
					Transition ( 0 )
					Radius ( 100 )
					Angle ( 25 )
				)
			)
		)
		Light	(	
		comment( Head light main )
			Type( 0 )
			Conditions (
				Headlight ( 3 )
				Unit ( 2 )
				)
			FadeIn	( 0.5 )
			FadeOut	( 0.5 )
			Cycle	( 0 )
			States	( 1
				State	(
					Duration ( 0 )
					LightColour ( ffffffb5 )
					Position ( 0 3.71 4.15 )
					Azimuth ( 0 0 0 )
					Transition ( 0 )
					Radius ( 0.7 )
				)
			)
		)
		Light	(
		comment( Head light rigth )
			Type( 0 )
			Conditions (
				Headlight ( 3 )
				Unit ( 2 )
				)
			FadeIn	( 0.5 )
			FadeOut	( 0.5 )
			Cycle	( 0 )
			States	( 1
				State	(
					Duration ( 0 )
					LightColour ( cdffff85 )
					Position ( 1.1 1.8 5.14 )
					Azimuth ( 0 0 0 )
					Transition ( 0 )
					Radius ( 0.5 )
				)
			)
		)
		Light	(
		comment( Head light left )
			Type( 0 )
			Conditions (
				Headlight ( 3 )
				Unit ( 2 )
				)
			FadeIn	( 0.5 )
			FadeOut	( 0.5 )
			Cycle	( 0 )
			States	( 1
				State	(
					Duration ( 0 )
					LightColour ( cdffff85 )
					Position ( -1.1 1.8 5.14 )
					Azimuth ( 0 0 0 )
					Transition ( 0 )
					Radius ( 0.5 )
					)
				)
			)
		Light	(
		Comment( Firelight )
			Type ( 0 )
			Conditions (
				Control ( 2 )
				Service ( 2 )
			      )
			FadeIn	( 0.5 )
			FadeOut	( 0.5 )
			Cycle	( 0 )
			States	(	3
				State	(
					Duration ( 1 )
					LightColour ( 80ff7200 )
					Position ( 0 2.04 -4.58 )
					Azimuth ( -180 -180 -180 )
					Transition ( 1 )
					Radius ( 1.2 )
					)
				State	(
					Duration ( 2 )
					LightColour ( 80ffe610 )
					Position ( 0 2.17 -4.58 )
					Azimuth ( -180 -180 -180 )
					Transition ( 1 )
					Radius ( 1.2 )
					)
				State	(
					Duration ( 1 )
					LightColour ( 80ff7830 )
					Position ( 0 2.17 -4.58 )
					Azimuth ( -180 -180 -180 )
					Transition ( 1 )
					Radius ( 1.2 )
				)
			)
		)
	comment ( seguem-se luzes para trafego AI )
		Light	(	
		comment( Head light main )
			Type( 0 )
			Conditions (
				Headlight ( 0 )
				Unit ( 2 )
				Control ( 1 )
				Service ( 2 )
				TimeOfDay ( 2 )
				)
			FadeIn	( 0.5 )
			FadeOut	( 0.5 )
			Cycle	( 0 )
			States	( 1
				State	(
					Duration ( 0 )
					LightColour ( ffffffb5 )
					Position ( 0 3.7 4.15 )
					Azimuth ( 0 0 0 )
					Transition ( 0 )
					Radius ( 0.7 )
				)
			)
		)
		Light	(
		comment( Head light rigth )
			Type( 0 )
			Conditions (
				Headlight ( 0 )
				Unit ( 2 )
				Control ( 1 )
				Service ( 2 )
				TimeOfDay ( 2 )
				)
			FadeIn	( 0.5 )
			FadeOut	( 0.5 )
			Cycle	( 0 )
			States	( 1
				State	(
					Duration ( 0 )
					LightColour ( cdffff85 )
					Position ( 1.1 1.8 5.14 )
					Azimuth ( 0 0 0 )
					Transition ( 0 )
					Radius ( 0.5 )
				)
			)
		)
		Light	(
		comment( Head light left )
			Type( 0 )
			Conditions (
				Headlight ( 0 )
				Unit ( 2 )
				Control ( 1 )
				Service ( 2 )
				TimeOfDay ( 2 )
				)
			FadeIn	( 0.5 )
			FadeOut	( 0.5 )
			Cycle	( 0 )
			States	( 1
				State	(
					Duration ( 0 )
					LightColour ( cdffff85 )
					Position ( -1.1 1.8 5.14 )
					Azimuth ( 0 0 0 )
					Transition ( 0 )
					Radius ( 0.5 )
				)
			)
		)
	)
