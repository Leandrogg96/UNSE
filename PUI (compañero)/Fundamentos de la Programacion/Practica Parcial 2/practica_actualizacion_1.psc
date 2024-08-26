Algoritmo practica_actualizacion_1
	Leer N
	Leer N2
	Dimension M[N,N2]
	i <- 0
	Mientras (i < N) Hacer
		j <- 0
		Mientras (j < N2) Hacer
			Leer M[i,j]
			j <- j + 1
		FinMientras
		i <- i + 1
	FinMientras
	i <- 0
	Mientras (i < N) Hacer
		j <- 0
		Mientras (j < N2) Hacer
			Escribir M[i,j] ' ' Sin Saltar
			j <- j + 1
		FinMientras
		Escribir ''
		i <- i + 1
	FinMientras
	Escribir "Numero a buscar"
	Leer W
	i <- 0
	Mientras (i < N) Hacer
		j <- 0
		Mientras (j < N2) Hacer
			Si (M[i,j] = W) Entonces
				k <- i
				Mientras (k < N - 1) Hacer
					z <- 0
					Mientras (z < N2) Hacer					
						M[k,z] <- M[k + 1, z]						
						z <- z + 1
					FinMientras
					k <- k + 1
				FinMientras
				N <- N - 1
				k <- 0
				Mientras (k < N) Hacer
					z <- j
					Mientras (z < N2 - 1) Hacer					
						M[k,z] <- M[k, z + 1]						
						z <- z + 1
					FinMientras
					k <- k + 1
				FinMientras
				N2 <- N2 - 1
			FinSi
			j <- j + 1
		FinMientras
		i <- i + 1
	FinMientras
	i <- 0
	Mientras (i < N) Hacer
		j <- 0
		Mientras (j < N2) Hacer
			Escribir M[i,j] ' ' Sin Saltar
			j <- j + 1
		FinMientras
		Escribir ''
		i <- i + 1
	FinMientras
FinAlgoritmo
