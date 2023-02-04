
    	Sound (	"..\\sound\\pt_sound\\genptcar2.sms" )
	Lights	( 4
		Light	(
			comment( FRONT Red left )
			Type ( 0 )
			Conditions	(
				TimeOfDay ( 2 )
				Unit ( 3 )
				)
			FadeIn	( 0.2 )
			FadeOut	( 0.2 )
			Cycle	( 0 )
			States	(	1
				State	(
					Duration ( 0 )
					LightColour ( ffff0000 )
					Position ( -0.75 1.65 9.58 )
					Azimuth ( 0 0 0 )
					Transition ( 0 )
					Radius ( 0.4 )
					Elevation ( 0 0 0 )
					)
				)
			)
		Light	(
			comment( FRONT RED right )
			Type ( 0 )
			Conditions	(
				TimeOfDay ( 2 )
				Unit ( 3 )
				)
			FadeIn	( 0.2 )
			FadeOut	( 0.2 )
			Cycle	( 0 )
			States	(	1
				State	(
					Duration ( 0 )
					LightColour ( ffff0000 )
					Position ( 0.75 1.65 9.58 )
					Azimuth ( 0 0 0 )
					Transition ( 0 )
					Radius ( 0.4 )
					Elevation ( 0 0 0 )
					)
				)
			)
		Light	(
			comment( Tail left )
			Type ( 0 )
			Conditions	(
				Headlight ( 4 )
				Unit ( 3 )
				)
			FadeIn	( 0.2 )
			FadeOut	( 0.2 )
			Cycle	( 0 )
			States	(	1
				State	(
					Duration ( 0 )
					LightColour ( ffff0000 )
					Position ( -0.75 1.65 -9.58 )
					Azimuth ( 180 180 180 )
					Transition ( 0 )
					Radius ( 0.4 )
					)
				)
			)
		Light	(
			comment( Tail right )
			Type ( 0 )
			Conditions	(
				Headlight ( 4 )
				Unit ( 3 )
				)
			FadeIn	( 0.2 )
			FadeOut	( 0.2 )
			Cycle	( 0 )
			States	(	1
				State	(
					Duration ( 0 )
					LightColour ( ffff0000 )
					Position ( 0.75 1.65 -9.58 )
					Azimuth ( 180 180 180 )
					Transition ( 0 )
					Radius ( 0.4 )
					)
				)
			)
		)
