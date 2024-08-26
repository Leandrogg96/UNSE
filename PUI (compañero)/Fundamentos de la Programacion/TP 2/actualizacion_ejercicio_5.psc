Algoritmo actualizacion_ejercicio_5
	Leer N
	Dimension D[N + 10]
	cv <- 0
	b <- 0
	Mientras (cv < N) Hacer
		Leer D[cv]
		cv <- cv + 1
	FinMientras
	cv <- 0
	Escribir "Ingrese el numero a añadir"
	Leer Num
	Mientras (cv < N & b = 0) Hacer
		Si(Num < D[cv] ) Entonces	
			k <- N - 1
			Mientras (k <= cv) Hacer
				D[k + 1] <- D[k]
				k <- k - 1
			FinMientras			
			D[cv] <- Num
			N <- N + 1
			b <- 1	
		SiNo
			cv <- cv + 1
		FinSi		
	FinMientras
	cv <- 0
	Mientras (cv < N) Hacer
		Escribir D[cv]
		cv <- cv + 1
	FinMientras
	
FinAlgoritmo
