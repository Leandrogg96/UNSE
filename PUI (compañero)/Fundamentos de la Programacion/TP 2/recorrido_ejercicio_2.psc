Algoritmo recorrido_ejercicio_2
	Leer N
	Dimension ELEM[N]
	cv <- 0
	Mientras (cv < N) Hacer
		Leer ELEM[cv]
		cv <- cv + 1
	FinMientras
	cv <- 0
	Mientras (cv < N) Hacer
		ELEM[cv + 1] <- ELEM[cv]
		cv <- cv + 2
	FinMientras
	cv <- 0
	Mientras (cv < N) Hacer
		Escribir "ELEM[",cv,"]:", ELEM[cv]
		cv <- cv + 1
	FinMientras
	
FinAlgoritmo
