Algoritmo practica_actualizacion_2
	Leer A
	Leer L
	Dimension P[A,L]
	i <- 0
	Mientras (i < A) Hacer
		j <- 0
		Mientras (j < L) Hacer
			Leer P[i,j]
			j <- j + 1
		FinMientras
		i <- i + 1
	FinMientras
	i <- 0
	Mientras (i < A) Hacer
		j <- 0
		Mientras (j < L) Hacer
			Si (P[i,j] = 50) Entonces
				k <- 0
				Mientras (k < A) Hacer
					z <- j
					Mientras (z < L - 1) Hacer
						P[k,z] <- P[k, z + 1]
						z <- z + 1
					FinMientras
					k <- k + 1					
				FinMientras
				L <- L - 1
			FinSi
			j <- j + 1
		FinMientras
		i <- i + 1
	FinMientras
	i <- 0
	Mientras (i < A) Hacer
		j <- 0
		Mientras (j < L) Hacer
			Escribir P[i,j] ' ' Sin Saltar
			j <- j + 1
		FinMientras
		Escribir ''
		i <- i + 1
	FinMientras
FinAlgoritmo
