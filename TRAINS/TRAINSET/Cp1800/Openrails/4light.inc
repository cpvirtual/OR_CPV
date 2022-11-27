
    	Sound (	"1800eng.sms" )
Comment (********************** Lights  **********************)
	Lights ( 5
		Light (
			comment( Sphere of light )
			Type		( 1 )
			Conditions	(
				Headlight ( 3 )
				Unit ( 2 )
				)
			Cycle	( 0 )
			FadeIn	( 0.5 )
			FadeOut	( 0.5 )
			States	(	1
				State	(
					Duration ( 0.0 )
					LightColour ( ffffffff )
					Position ( 0 4.097 8.745 )
					Transition ( 0 )
					Radius ( 400.0 )
					Angle ( 15.0 )
				)
			)
		)
		Light (
			comment( Head light dim )
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
					Position ( 0 4.097 8.763 )
					Azimuth ( 0.0 -5.0 5.0 )
					Transition ( 0 )
					Radius ( 0.5 )
				)
			)
		)
		Light (
			comment( Head light bright )
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
					Position ( 0 4.097 8.781 )
					Azimuth ( 0.0 -5.0 5.0 )
					Transition ( 0 )
					Radius ( 0.5 )
				)
			)
		)
		Light (
			comment( Rear red light left)
			Type		( 0 )
			Conditions	(
				Headlight ( 3 )
				Unit ( 3 )
				)
			FadeIn	( 0.5 )
			FadeOut	( 0.5 )
			Cycle	( 0 )
			States	(	1
				State	(
					Duration ( 0.0 )
					LightColour ( 80ff0000 )
					Position ( -1.053 2.0 -8.98 )
					Azimuth ( -180 -180 -180 )
					Transition ( 0 )
					Radius ( 0.3 )
				)
			)
		)
		Light (
			comment( Rear red light right)
			Type		( 0 )
			Conditions	(
				Headlight ( 3 )
				Unit ( 3 )
				)
			FadeIn	( 0.5 )
			FadeOut	( 0.5 )
			Cycle	( 0 )
			States	(	1
				State	(
					Duration ( 0.0 )
					LightColour ( 80ff0000 )
					Position ( 1.052 2.0 -8.98 )
					Azimuth ( -180 -180 -180 )
					Transition ( 0 )
					Radius ( 0.3 )
				)
			)
		)
	)
	