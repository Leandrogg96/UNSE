Algoritmo actualizacion_ejercicio_1
	Leer N
	Dimension COSTO[N]
	cv <- 0
	Mientras (cv < N) Hacer
		Leer COSTO[cv]
		cv <- cv + 1
	FinMientras
	cv <- 0
	Mientras (cv < N) Hacer
		Si (COSTO[cv] < 100) Entonces
			COSTO[cv] <- COSTO[cv] + COSTO[cv] * 0.1
		FinSi
		cv <- cv + 1
	FinMientras
	cv <- 0
	Mientras (cv < N) Hacer
		Escribir "COSTO[",cv,"]: ", COSTO[cv]
		cv <- cv + 1
	FinMientras
FinAlgoritmo
