Algoritmo actualizacion_ejercicio_2
	Dimension NOTAS[250]
	NOTAS[0] <- 7 ; NOTAS[1] <- 8; NOTAS[2] <- 4; NOTAS[3] <- 7; NOTAS[4] <- 3
	cv <- 0
	Mientras (cv < 250) Hacer
		Si(NOTAS[cv] < 6)
			j <- cv
			Mientras (j < 249) Hacer
				NOTAS[j] <- NOTAS[j + 1]
				j <- j + 1
			FinMientras			
		FinSi
		cv <- cv + 1
	FinMientras
	cv <- 0
	Mientras (cv < 250) Hacer
		Escribir NOTAS[cv]
		cv <- cv + 1
	FinMientras
FinAlgoritmo
