
	Sound ("CP0500eng.sms")
	Lights	( 9
		Light (
			comment( Sphere of light )
			Type	( 1 )
			Conditions	(
				Headlight ( 3 )
				Unit ( 2 )
				)
			Cycle		( 0 )
			FadeIn	( 0.5 )
			FadeOut	( 0.5 )
			States	(	1
				State	(
					Duration ( 0.0 )
					LightColour ( ffffffff )
					Position ( 0 3.604 12.862 )
					Transition ( 0 )
					Radius ( 200.0 )
					Angle ( 15.0 )
				)
			)
		)
		Light	(
			comment( white central bright )
			Type		( 0 )
			Conditions	(
				Headlight ( 3 )
				Unit ( 2 )
				)
			FadeIn	( 0.6 )
			FadeOut	( 0.6 )
			Cycle	( 0 )
			States	(	1
				State	(
					Duration ( 0.0 )
					LightColour ( ffffffff )
					Position ( 0.002 3.509 12.776 )
					Azimuth ( 0.0 0.0 0.0 )
					Transition ( 0 )
					Radius ( 0.6 )
				)
			)
		)
           Light	(
			comment( front right )
			Type		( 0 )
			Conditions	(
				Headlight ( 4 )
				Unit ( 2 )
				)
			FadeIn	( 0.5 )
			FadeOut	( 0.5 )
			Cycle	( 0 )
			States	(	1
				State	(
					Duration ( 0.0 )
					LightColour ( ffbbffff )
					Position ( 1.002 1.518 13.239 )
					Azimuth ( 45 0 0 )
					Transition ( 0 )
					Radius ( 0.3 )
				)
			)
		)
          Light	(
			comment( front left )
			Type		( 0 )
			Conditions	(
				Headlight ( 4 )
				Unit ( 2 )
				)
			FadeIn	( 0.5 )
			FadeOut	( 0.5 )
			Cycle	( 0 )
			States	(	1
				State	(
					Duration ( 0.0 )
					LightColour ( ffbbffff )
					Position ( -1 1.518 13.239 )
					Azimuth ( 45 0 0 )
					Transition ( 0 )
					Radius ( 0.3 )
				)
			)
		)
           Light	(
			comment( front right sup )
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
					LightColour ( ffaaaa99 )
					Position ( 1.036 3.313 12.649 )
					Azimuth ( 0 0 0 )
					Transition ( 0 )
					Radius ( 0.2 )
				)
			)
		)
          Light	(
			comment( front left sup )
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
					LightColour ( ffaaaa99 )
					Position ( -1.009 3.313 12.649 )
					Azimuth ( 0 0 0 )
					Transition ( 0 )
					Radius ( 0.2 )
				)
			)
		)
 		Light	(
			comment( red right )
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
					Position ( 0.852 3.313 12.649 )
					Azimuth ( 0 0 0 )
					Transition ( 0 )
					Radius ( 0.2 )
				)
			)
		)
 		Light	(
			comment( red left )
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
					Position ( -0.824 3.313 12.649 )
					Azimuth ( 0 0 0 )
					Transition ( 0 )
					Radius ( 0.2 )
				)
			)
		)
           Light	(
			comment( red central )
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
					Position ( 0 1.518 13.44 )
					Azimuth ( 0.0 0.0 0.0 )
					Transition ( 0 )
					Radius ( 0.4 )
				)
			)
		)
	)
