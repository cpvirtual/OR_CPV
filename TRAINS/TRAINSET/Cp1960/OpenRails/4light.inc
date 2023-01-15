
	Sound ( "1960eng.sms" )
	Lights ( 11
		Light (
			comment ( Sphere of light )
			Type ( 1 )
			Conditions (
				Headlight ( 3 )
				Unit ( 2 )
			)
			Cycle ( 0 )
			FadeIn	( 0.5 )
			FadeOut	( 0.5 )
			States ( 1
				State (
					Duration ( 0 )
					LightColour ( ffffffff )
					Position ( 0 3.776 9.471 )
					Transition ( 0 )
					Radius ( 400 )
					Angle ( 15 )
				)
			)
		)
		Light (
			comment ( Principal Branca )
			Type ( 0 )
			Conditions (
				Headlight ( 3 )
				Unit ( 2 )
			)
			FadeIn ( 0.5 )
			FadeOut ( 0.5 )
			Cycle ( 0 )
			States ( 1
				State (
					Duration ( 0 )
					LightColour ( ffffffff )
					Position ( 0 3.776 9.471 )
					Azimuth ( 0 0 0 )
					Transition ( 0 )
					Radius ( 2.5 )
				)
			)
		)
		Light (
			comment ( Frente Branca Esquerda )
			Type ( 0 )
			Conditions (
				Headlight ( 4 )
				Unit ( 2 )
			)
			FadeIn ( 0.5 )
			FadeOut ( 0.5 )
			Cycle ( 0 )
			States ( 1
				State (
					Duration ( 0 )
					LightColour ( ffffffff)
					Position ( -0.899 1.92 9.55 )
					Transition ( 0 )
					Radius ( 0.8 )
				)
			)
		)
		Light (
			comment ( Frente Branca Direita )
			Type ( 0 )
			Conditions (
				Headlight ( 4 )
				Unit ( 2 )
			)
			FadeIn ( 0.5 )
			FadeOut ( 0.5 )
			Cycle ( 0 )
			States ( 1
				State (
					Duration ( 0 )
					LightColour ( ffffffff )
					Position ( 0.899 1.92 9.55 )
					Transition ( 0 )
					Radius ( 0.8 )
				)
			)
		)
		Light (
			comment ( Frente Vermelha Esquerda )
			Type ( 0 )
			Conditions (
				Headlight ( 4 )
				Unit ( 4 )
			)
			FadeIn	( 0.5 )
			FadeOut	( 0.5 )
			Cycle ( 0 )
			States ( 1
				State (
					Duration ( 0 )
					LightColour ( aaff0000)
					Position ( -0.603 1.85 9.55 )
					Azimuth ( 0 0 0 )
					Transition ( 0 )
					Radius ( 0.4 )
				)
			)
		)
		Light (
			comment ( Frente Vermelha Direita )
			Type ( 0 )
			Conditions (
				Headlight ( 4 )
				Unit ( 4 )
			)
			FadeIn	( 0.5 )
			FadeOut	( 0.5 )
			Cycle ( 0 )
			States ( 1
				State (
					Duration ( 0 )
					LightColour ( aaff0000)
					Position ( 0.603 1.85 9.55 )
					Azimuth ( 0 0 0 )
					Transition ( 0 )
					Radius ( 0.4 )
				)
			)
		)
		Light (
			comment ( Principal Branca Traseira )
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
					LightColour ( ffffffff )
					Position ( 0 3.776 -9.471 )
					Azimuth ( -180 -180 -180 )
					Transition ( 0 )
					Radius ( 2.2 )
				)
			)
		)
		Light (
			comment ( Branca Esquerda Traseira )
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
					LightColour ( ffffffff)
					Position ( -0.899 1.92 -9.57 )
					Azimuth ( -180 -180 -180 )
					Transition ( 0 )
					Radius ( 0.8 )
				)
			)
		)
		Light (
			comment ( Branca Direita Traseira )
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
					LightColour ( ffffffff )
					Position ( 0.899 1.92 -9.57 )
					Azimuth ( -180 -180 -180 )
					Transition ( 0 )
					Radius ( 0.8 )
				)
			)
		)
		Light (
			comment ( Cauda Vermelha Esquerda )
			Type ( 0 )
			Conditions (
				Headlight ( 4 )
				Unit ( 3 )
			)
			FadeIn	( 0.5 )
			FadeOut	( 0.5 )
			Cycle ( 0 )
			States ( 1
				State (
					Duration ( 0 )
					LightColour ( aaff0000 )
					Position ( -0.603 1.85 -9.57 )
					Azimuth ( -180 -180 -180 )
					Transition ( 0 )
					Radius ( 0.4 )
					Elevation ( 0 0 0 )
				)
			)
		)
		Light (
			comment ( Cauda Vermelha Direita )
			Type ( 0 )
			Conditions (
				Headlight ( 4 )
				Unit ( 3 )
			)
			FadeIn	( 0.5 )
			FadeOut	( 0.5 )
			Cycle ( 0 )
			States ( 1
				State (
					Duration ( 0 )
					LightColour ( aaff0000 )
					Position ( 0.603 1.85 -9.57 )
					Azimuth ( 180 180 180 )
					Transition ( 0 )
					Radius ( 0.4 )
				)
			)
		)
	)
	