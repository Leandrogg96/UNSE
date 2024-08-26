Algoritmo ordenamiento_ejercicio_3
	Leer N
	Dimension UNSE[N,4]
	i <- 0
	Mientras (i < N) Hacer
		j <- 0
		Mientras (j < 4) Hacer
			Leer UNSE[i,j]
			j <- j + 1
		FinMientras
		i <- i + 1
	FinMientras
	Repetir
	b <- 0
	i <- 0
	Mientras (i < N - 1) Hacer
		Si(UNSE[i + 1,0] < UNSE[i,0] & UNSE[i + 1,1] < UNSE[i,1]) Entonces
			k <- 0
			Mientras (k < 4) Hacer
				x <- UNSE[i,k]
				UNSE[i,k] <- UNSE[i + 1,k]
				UNSE[i + 1,k] <- x
				k <- k + 1
			FinMientras
			b <- 1
		FinSi
		i <- i + 1
	FinMientras
	Hasta Que b = 0
	i <- 0
	Mientras (i < N) Hacer
		j <- 0
		Mientras (j < 4) Hacer
			Escribir  UNSE[i,j] ' ' Sin Saltar
			j <- j + 1
		FinMientras
		Escribir ''
		i <- i + 1
	FinMientras
FinAlgoritmo
