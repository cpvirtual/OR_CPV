
        Sound ( "rapido_exterior.sms" )
Lights	(	11

comment(               luces traseras             )

		Light	(
			comment( cola lfm pleno derecha )
			Type		( 0 )
			Conditions	(
				Service ( 2 )
				Unit ( 3 )
			)
			FadeIn	( 0.5 )
			FadeOut	( 0.5 )
			Cycle		( 0 )
			States	(	1
				State	(
					Duration ( 0.0 )
					LightColour ( 80ff0000 )
					Position ( 0.99 2.940 -13.08  )
					Azimuth ( -180 -180 -180 )
					Transition ( 0 )
					Radius ( 0.45 )
				)
			)
		)
		Light	(
			comment( cola lfm pleno izquierda )
			Type		( 0 )
			Conditions	(
				Service ( 2 )
				Unit ( 3 )
			)
			FadeIn	( 0.5 )
			FadeOut	( 0.5 )
			Cycle		( 0 )
			States	(	1
				State	(
					Duration ( 0.0 )
					LightColour ( 80ff0000 )
					Position ( -0.99 2.940 -13.08  )
					Azimuth ( -180 -180 -180 )
					Transition ( 0 )
					Radius ( 0.45 )
				)
			)
		)
		Light	(
			comment( cola lfm pleno inferior )
			Type		( 0 )
			Conditions	(
				Service ( 2 )
				Unit ( 3 )
			)
			FadeIn	( 0.5 )
			FadeOut	( 0.5 )
			Cycle		( 0 )
			States	(	1
				State	(
					Duration ( 0.0 )
					LightColour ( 80ff0000 )
					Position ( 0.99 1.39 -13.10 )
					Azimuth ( -180 -180 -180 )
					Transition ( 0 )
					Radius ( 0.9 )
				)
			)
		)

comment(               luces delanteras             )

		Light	(
			comment( cola lofm pleno derecha )
			Type		( 0 )
			Conditions	(
				Service ( 2 )
				Unit ( 4 )
			)
			FadeIn	( 0.5 )
			FadeOut	( 0.5 )
			Cycle		( 0 )
			States	(	1
				State	(
					Duration ( 0.0 )
					LightColour ( 80ff0000 )
					Position ( 0.99 2.940 13.08  )
					Azimuth ( 0 0 0 )
					Transition ( 0 )
					Radius ( 0.45 )
				)
			)
		)
		Light	(
			comment( cola lofm pleno izquierda )
			Type		( 0 )
			Conditions	(
				Service ( 2 )
				Unit ( 4 )
			)
			FadeIn	( 0.5 )
			FadeOut	( 0.5 )
			Cycle		( 0 )
			States	(	1
				State	(
					Duration ( 0.0 )
					LightColour ( 80ff0000 )
					Position ( -0.99 2.940 13.08  )
					Azimuth ( 0 0 0 )
					Transition ( 0 )
					Radius ( 0.45 )
				)
			)
		)
		Light	(
			comment( cola lofm pleno inferior )
			Type		( 0 )
			Conditions	(
				Service ( 2 )
				Unit ( 4 )
			)
			FadeIn	( 0.5 )
			FadeOut	( 0.5 )
			Cycle		( 0 )
			States	(	1
				State	(
					Duration ( 0.0 )
					LightColour ( 80ff0000 )
					Position ( -0.99 1.39 13.10  )
					Azimuth ( 0 0 0 )
					Transition ( 0 )
					Radius ( 0.9 )
				)
			)
		)

comment(               luces delanteras IA             )

		Light	(
			comment( cola lofm pleno derecha )
			Type		( 0 )
			Conditions	(
				Control ( 1 )
				Unit ( 3 )
				Service ( 2 )
				TimeOfDay ( 0 )
			)
			FadeIn	( 0.5 )
			FadeOut	( 0.5 )
			Cycle		( 0 )
			States	(	1
				State	(
					Duration ( 0.0 )
					LightColour ( 80ff0000 )
					Position ( 0.99 2.940 13.08 )
					Azimuth ( 0 0 0 )
					Transition ( 0 )
					Radius ( 0.45 )
				)
			)
		)
		Light	(
			comment( cola lofm pleno izquierda )
			Type		( 0 )
			Conditions	(
				Control ( 1 )
				Unit ( 3 )
				Service ( 2 )
				TimeOfDay ( 0 )
			)
			FadeIn	( 0.5 )
			FadeOut	( 0.5 )
			Cycle		( 0 )
			States	(	1
				State	(
					Duration ( 0.0 )
					LightColour ( 80ff0000 )
					Position ( -0.99 2.940 13.08 )
					Azimuth ( 0 0 0 )
					Transition ( 0 )
					Radius ( 0.45 )
				)
			)
		)
		Light	(
			comment( cola lofm pleno inferior )
			Type		( 0 )
			Conditions	(
				Control ( 1 )
				Unit ( 3 )
				Service ( 2 )
				TimeOfDay ( 0 )
			)
			FadeIn	( 0.5 )
			FadeOut	( 0.5 )
			Cycle		( 0 )
			States	(	1
				State	(
					Duration ( 0.0 )
					LightColour ( 80ff0000 )
					Position ( -0.99 1.39 13.10 )
					Azimuth ( 0 0 0 )
					Transition ( 0 )
					Radius ( 0.9 )
				)
			)
		)	

		Light	(
			comment( alarma lfm derecha )
			Type		( 0 )
			Conditions	(
				Unit ( 1 )
				Penalty ( 2 )
			)
			FadeIn	( 0.5 )
			FadeOut	( 0.5 )
			Cycle		( 0 )
			States	(	1
				State	(
					Duration ( 0.0 )
					LightColour ( eeff6a00 )
					Position ( 1.43 3.00 -12.84 )
					Azimuth ( 90 90 90 )
					Transition ( 0 )
					Radius ( 0.45 )
				)
			)
		)
		Light	(
			comment( alarma lfm izquierda )
			Type		( 0 )
			Conditions	(
				Unit ( 1 )
				Penalty ( 2 )
			)
			FadeIn	( 0.5 )
			FadeOut	( 0.5 )
			Cycle		( 0 )
			States	(	1
				State	(
					Duration ( 0.0 )
					LightColour ( eeff6a00 )
					Position ( -1.43 3.00 -12.84 )
					Azimuth ( -90 -90 -90 )
					Transition ( 0 )
					Radius ( 0.45 )
				)
			) 
		)
	)
	