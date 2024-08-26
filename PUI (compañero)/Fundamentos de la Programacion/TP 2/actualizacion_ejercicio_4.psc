Algoritmo actualizacion_ejercicio_4
	Leer N
	Dimension W[N + 10]
	cv <- 0
	b <- 0
	Mientras (cv < N) Hacer
		Leer W[cv]
		cv <- cv + 1
	FinMientras
	cv <- 0
	Escribir "Ingrese el numero a añadir"
	Leer Num
	Mientras (cv < N & b = 0) Hacer
		Si(Num > W[cv] ) Entonces	
			k <- N - 1
			Mientras (k <= cv) Hacer
				W[k + 1] <- W [k]
				k <- k - 1
			FinMientras
			W[cv] <- Num
			N <- N + 1
			b <- 1
		SiNo
			cv <- cv + 1
		FinSi		
	FinMientras
	cv <- 0
	Mientras (cv < N) Hacer
		Escribir W[cv]
		cv <- cv + 1
	FinMientras
	
FinAlgoritmo
