
	Sound (	"..\\sound\\pt_sound\\genptcar2.sms" )
Comment( ****************** Lights ******************* )
	Lights ( 2
		Light (
			Comment( Luz Cauda Rectaguarda )
			Type		( 0 )
			Conditions	(
				Service ( 2 )
				Headlight ( 4 )
				Control ( 0 )
				Weather ( 0 )
				Coupling ( 0 )
				TimeOfDay ( 2 )
				Unit ( 3 )
			)
			FadeIn	( 0.5 )
			FadeOut	( 0.5 )
			Cycle		( 0 )
			States	(	1
				State	(
					Duration ( 0.0 )
					LightColour ( 80ff0000 )
					Position ( -1.077 1.6 -8.57 )
					Azimuth ( -180 -180 -180 )
					Transition ( 0 )
					Radius ( 0.5 )
				)
			)
		)
		Light (
			Comment( Luz Cauda Frente )
			Type		( 0 )
			Conditions	(
				Service ( 2 )
				Headlight ( 4 )
				Control ( 0 )
				Weather ( 0 )
				Coupling ( 0 )
				TimeOfDay ( 2 )
				Unit ( 2 )
			)
			FadeIn	( 0.5 )
			FadeOut	( 0.5 )
			Cycle		( 0 )
			States	(	1
				State	(
					Duration ( 0.0 )
					LightColour ( 80ff0000 )
					Position ( -1.077 1.6 8.57 )
					Azimuth ( 0 0 0 )
					Transition ( 0 )
					Radius ( 0.5 )
				)
			)
		)
	)
	