Algoritmo actualizacion_ejercicio_1
	Leer N
	Dimension UNSE[N + 4,5]
	Dimension B[N+4]
	i <- 0
	Mientras (i < N) Hacer
		j <- 0
		Mientras (j < 5) Hacer
			Leer UNSE[i,j]
			j <- j + 1
		FinMientras
		i <- i + 1
	FinMientras
	// a)
	Escribir "Ingrese los datos de los libros comprados por la Biblioteca"
	i <- N
	N <- N + 4
	Mientras (i < N) Hacer
		j <- 0
		Mientras (j < 5) Hacer
			Leer UNSE[i,j]
			j <- j + 1
		FinMientras
		i <- i + 1
	FinMientras
	i <- 0
	Mientras (i < N) Hacer
		j <- 0
		Mientras (j < 5) Hacer
			Escribir  UNSE[i,j] ' ' Sin Saltar
			j <- j + 1
		FinMientras
		Escribir ' '
		i <- i + 1
	FinMientras
	// b)	
	Escribir "Libros Borrados"
	i <- 0
	Mientras (i < N) Hacer
		Si(UNSE[i,3] = 1995) Entonces
			k <- i
			Mientras (k < N - 1) Hacer
				j <- 0
				Mientras (j < 5) Hacer
					UNSE[k,j] <- UNSE[k + 1, j]
					j <- j + 1
				FinMientras
				k <- k + 1
			FinMientras
			N <- N - 1
		SiNo
			i <- i + 1
		FinSi		
	FinMientras
	i <- 0
	Mientras (i < N) Hacer
		j <- 0
		Mientras (j < 5) Hacer
			Escribir  UNSE[i,j] ' ' Sin Saltar
			j <- j + 1
		FinMientras
		Escribir ' '
		i <- i + 1
	FinMientras
	// c)
	i <- 0
	j <- 0
	Mientras (i < N) Hacer		
		Si(UNSE[i,4]  < 2500) Entonces
			B[j] <- UNSE[i,0]
			j <- j + 1
		FinSi
		i <- i + 1
	FinMientras
	Escribir "Vector B con los libros cuyo precio es menor a 2500"
	i <- 0
	Mientras (i < j) Hacer
		Escribir B[i] ' ' Sin Saltar
		i <- i + 1
	FinMientras
FinAlgoritmo
