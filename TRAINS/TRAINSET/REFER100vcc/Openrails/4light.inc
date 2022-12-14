
    	Sound ( "klveng.sms" )
Comment (********************** Lights  **********************)
	Lights ( 11
		Light (
			comment( Sphere of light )
			Type	( 1 )
			Conditions	(
				Headlight ( 3 )
				Unit ( 2 )
				Control ( 2 )
				)
			Cycle		( 0 )
			FadeIn	( 0.5 )
			FadeOut	( 0.5 )
			States	(	1
				State	(
					Duration ( 0.0 )
					LightColour ( ffffffff )
					Position ( 0.001 3.41791 5.98509 )
					Transition ( 0 )
					Radius ( 400.0 )
					Angle ( 15.0 )
				)
			)
		)
		Light (
			comment ( Head light top bright )
			Type ( 0 )
			Conditions (
				Headlight ( 3 )
				Unit ( 2 )
				Control ( 2 )
			)
			FadeIn ( 0.5 )
			FadeOut ( 0.5 )
			Cycle ( 0 )
			States ( 1
				State (
					Duration ( 0 )
					LightColour ( FFFFFFFF )
					Position ( 0 3.3885 2.90297 )
					Azimuth ( 0 0 0 )
					Transition ( 0 )
					Radius ( 0.5 )
				)
			)
		)
		Light (
			comment ( Front right light )
			Type ( 0 )
			Conditions (
				Headlight ( 4 )
				Unit ( 2 )
				Control ( 2 )
			)
			FadeIn ( 0.5 )
			FadeOut ( 0.5 )
			Cycle ( 0 )
			States ( 1
				State (
					Duration ( 0 )
					LightColour ( FFFFFFFF )
					Position ( -0.82453 1.79912 3.03695 )
					Azimuth ( 0 0 0 )
					Transition ( 0 )
					Radius ( 0.5 )
				)
			)
		)
		Light (
			comment ( Front left light )
			Type ( 0 )
			Conditions (
				Headlight ( 4 )
				Unit ( 2 )
				Control ( 2 )
			)
			FadeIn ( 0.5 )
			FadeOut ( 0.5 )
			Cycle ( 0 )
			States ( 1
				State (
					Duration ( 0 )
					LightColour ( FFFFFFFF )
					Position ( 0.82453 1.79912 3.03695 )
					Azimuth ( 0 0 0 )
					Transition ( 0 )
					Radius ( 0.5 )
				)
			)
		)
		Light (
			comment ( Front right red light )
			Type ( 0 )
			Conditions (
				Headlight ( 4 )
				Unit ( 4 )
				Control ( 2 )
			)
			FadeIn ( 0.5 )
			FadeOut ( 0.5 )
			Cycle ( 0 )
			States ( 1
				State (
					Duration ( 0 )
					LightColour ( ffff0000 )
					Position ( -0.82453 1.99912 3.03695 )
					Azimuth ( 0 0 0 )
					Transition ( 0 )
					Radius ( 0.4 )
				)
			)
		)
		Light (
			comment ( Front left red light )
			Type ( 0 )
			Conditions (
				Headlight ( 4 )
				Unit ( 4 )
			)
			FadeIn ( 0.5 )
			FadeOut ( 0.5 )
			Cycle ( 0 )
			States ( 1
				State (
					Duration ( 0 )
					LightColour ( ffff0000 )
					Position ( 0.82453 1.99912 3.03695 )
					Azimuth ( 0 0 0 )
					Transition ( 0 )
					Radius ( 0.4 )
				)
			)
		)
		Light (
			comment ( rear right red light )
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
					LightColour ( ffff0000 )
					Position ( -0.93 1.67 -5.06 )
					Azimuth ( -180 -180 -180 )
					Transition ( 0 )
					Radius ( 0.4 )
				)
			)
		)
		Light (
			comment ( rear left red light )
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
					LightColour ( ffff0000 )
					Position ( 0.93 1.67 -5.06 )
					Azimuth ( -180 -180 -180 )
					Transition ( 0 )
					Radius ( 0.4 )
				)
			)
		)
		Light (
			comment ( rear Head light top bright )
			Type ( 0 )
			Conditions (
				Headlight ( 3 )
				Unit ( 5 )
			)
			FadeIn ( 0.5 )
			FadeOut ( 0.5 )
			Cycle ( 0 )
			States ( 1
				State (
					Duration ( 0 )
					LightColour ( FFFFFFFF )
					Position ( 0 3.3885 -1.43 )
					Azimuth ( -180 -180 -180 )
					Transition ( 0 )
					Radius ( 0.5 )
				)
			)
		)
		Light (
			comment ( rear white right light )
			Type ( 0 )
			Conditions (
				Headlight ( 4 )
				Unit ( 5 )
			)
			FadeIn ( 0.5 )
			FadeOut ( 0.5 )
			Cycle ( 0 )
			States ( 1
				State (
					Duration ( 0 )
					LightColour ( FFFFFFFF )
					Position ( -0.99453 1.82912 -3.09695 )
					Azimuth ( -180 -180 -180 )
					Transition ( 0 )
					Radius ( 0.5 )
				)
			)
		)
		Light (
			comment ( rear white left light )
			Type ( 0 )
			Conditions (
				Headlight ( 4 )
				Unit ( 5 )
			)
			FadeIn ( 0.5 )
			FadeOut ( 0.5 )
			Cycle ( 0 )
			States ( 1
				State (
					Duration ( 0 )
					LightColour ( FFFFFFFF )
					Position ( 0.99453 1.82912 -3.09695 )
					Azimuth ( -180 -180 -180 )
					Transition ( 0 )
					Radius ( 0.5 )
				)
			)
		)
	)