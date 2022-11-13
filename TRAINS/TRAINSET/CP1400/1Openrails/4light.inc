
	Sound ("1400eng.sms")
 	Lights ( 7
		Light (
			comment( Sphere of light )
			Type	( 1 )
			Conditions	(
				Headlight ( 4 )
				Unit ( 2 )
				)
			Cycle		( 0 )
			FadeIn	( 0.5 )
			FadeOut	( 0.5 )
			States	(	1
				State	(
					Duration ( 0.0 )
					LightColour ( ffffffff )
					Position ( 0 3.5 6 )
					Transition ( 0 )
					Radius ( 400.0 )
					Angle ( 15.0 )
				)
			)
		)
		Light (
			comment( front top central )
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
					LightColour ( ffffffff )
					Position ( 0 3.5 5.92 )
					Azimuth ( 0 0 0 )
					Transition ( 0 )
					Radius ( 0.8 )
				)
			)
		)
		Light (
			comment( red front )
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
					Position ( 0.75 1.55 5.87 )
					Azimuth ( 0 0 0 )
					Transition ( 0 )
					Radius ( 0.4 )
				)
			)
		)
		Light (
			comment( red front )
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
					Position ( -0.75 1.55 5.87 )
					Azimuth ( 0 0 0 )
					Transition ( 0 )
					Radius ( 0.4 )
				)
			)
		)
		Light (
			comment( rear top central )
			Type		( 0 )
			Conditions	(
				Headlight ( 3 )
				Unit ( 4 )
				)
			FadeIn	( 0.5 )
			FadeOut	( 0.5 )
			Cycle	( 0 )
			States	(	1
				State	(
					Duration ( 0.0 )
					LightColour ( ffffffff )
					Position ( 0 3.45 -5.95 )
					Azimuth ( -180 -180 -180 )
					Transition ( 0 )
					Radius ( 0.8 )
				)
			)
		)
		Light (
			comment( red rear )
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
					LightColour ( 80ff0000 )
					Position ( 0.75 1.55 -5.87 )
					Azimuth ( -180 -180 -180 )
					Transition ( 0 )
					Radius ( 0.4 )
				)
			)
		)
		Light (
			comment( red rear )
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
					LightColour ( 80ff0000 )
					Position ( -0.75 1.55 -5.87 )
					Azimuth ( -180 -180 -180 )
					Transition ( 0 )
					Radius ( 0.4 )
				)
			)
		)
	)
	