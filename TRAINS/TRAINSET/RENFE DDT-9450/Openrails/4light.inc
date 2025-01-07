
	Sound ("DDT-9450.sms")
	Lights	(	6
		Light	(
			
			Comment ( ========== Implemento luces RENFE traseras fijas 2 sup rojos + inf der rojo ========= )
			Comment ( ========== En la época de estos furgones las luces traseras eran RENFE ========== )
			Comment ( ========== Si quisieramos luces UIC: inf der rojo + inf izq rojo ========= )
					
			Comment ( Faro inferior derecho trasero - siempre encendido )
			Type (0)
			Conditions(
				Control(0) 
     				Service(2) 
				Unit(3)
			)
			FadeIn(0.5)
			FadeOut(0.5)
			Cycle(0)
			States(1
				State	(
					Duration ( 0.0 )
					LightColour ( 80FF0000 )
					Position ( 1.11 1.38 -13.14 )
					Azimuth ( -180 -180 -180 )
					Transition (0)
					Radius (0.5)
				)
			)
		)
			
		Light	(
			comment( Señal doble sup derecha trasera. Luz roja - siempre encendida )
			Type (0)
			Conditions(
				Control(0) 
     				Service(2) 
				Unit(3)
			)
			FadeIn(0.5)
			FadeOut(0.5)
			Cycle(0)
			States(1
				State	(
					Duration ( 0.0 )
					LightColour ( 80FF0000 )
					Position ( 1.11 3.1 -13.14 )
					Azimuth ( -180 -180 -180 )
					Transition (0)
					Radius (0.35)
				)
			)
		)
			
		Light	(
			comment( Señal doble sup izquierda trasera. Luz roja - siempre encendida )
			Type (0)
			Conditions(
				Control(0) 
     				Service(2) 
				Unit(3)
			)
			FadeIn(0.5)
			FadeOut(0.5)
			Cycle(0)
			States(1
				State	(
					Duration ( 0.0 )
					LightColour ( 80FF0000 )
					Position ( -1.11 3.1 -13.14 )
					Azimuth ( -180 -180 -180 )
					Transition (0)
					Radius (0.35)
				)
			)
		)
		
		Light	(
			Comment ( Faro inferior derecho delantero - siempre encendido )
			Type (0)
			Conditions(
				Control(0) 
     				Service(2) 
				Unit(2)
			)
			FadeIn(0.5)
			FadeOut(0.5)
			Cycle(0)
			States(1
				State	(
					Duration ( 0.0 )
					LightColour ( 80FF0000 )
					Position ( -1.11 1.38 13.14 )
					Azimuth ( 0 0 0 )
					Transition (0)
					Radius (0.5)
				)
			)
		)
			
		Light	(
			comment( Señal doble sup derecha delantera. Luz roja - siempre encendida )
			Type (0)
			Conditions(
				Control(0) 
     				Service(2) 
				Unit(2)
			)
			FadeIn(0.5)
			FadeOut(0.5)
			Cycle(0)
			States(1
				State	(
					Duration ( 0.0 )
					LightColour ( 80FF0000 )
					Position ( -1.11 3.1 13.14 )
					Azimuth ( 0 0 0 )
					Transition (0)
					Radius (0.35)
				)
			)
		)
			
		Light	(
			comment( Señal doble sup izquierda delantera. Luz roja - siempre encendida )
			Type (0)
			Conditions(
				Control(0) 
     				Service(2) 
				Unit(2)
			)
			FadeIn(0.5)
			FadeOut(0.5)
			Cycle(0)
			States(1
				State	(
					Duration ( 0.0 )
					LightColour ( 80FF0000 )
					Position ( 1.11 3.1 13.14 )
					Azimuth ( 0 0 0 )
					Transition (0)
					Radius (0.35)
				)
			)
		)	
	)		
