Algoritmo actualizacion_ejercicio_2
	Escribir "Numero de vendedores"
	Leer N
	Escribir "Productos vendidos del vendedor"
	Leer M
	Dimension P[N + 5 ,M + 5]
	i <- 0
	Mientras (i < N) Hacer
		j <- 0
		b <- 0
		Escribir "Vendedor " i + 1 ": "
		Mientras (j < M - 1 & b = 0) Hacer
			Escribir "Precio del producto vendido (0 si no vendio mas)"
			Leer P[i,j]
			Si (P[i,j] = 0) Entonces
				b <- 1
			SiNo
				j <- j + 1
			FinSi
		FinMientras
		i <- i + 1
	FinMientras
	// a)
	i <- 0
	Mientras (i < N) Hacer
		j <- 0
		prom <- 0
		sum <- 0
		Mientras (j < M - 1) Hacer
			sum <- sum + P[i,j]
			j <- j + 1
		FinMientras
		prom <- sum / M - 1
		Escribir prom
		P[i,M - 1] <- prom
		// b)
		Si(prom < 50000) Entonces
			Escribir "Estas despedido"
			j <- i
			Mientras (j < N) Hacer
				k <- 0
				Mientras (k < M) Hacer
					P[j,k] <- P[j + 1,k]
					k <- k + 1
				FinMientras
				j <- j + 1
			FinMientras
			N <- N - 1
		SiNo
			i <- i + 1
		FinSi
	FinMientras
	// c)
	i <- N
	N <- N + 3
	Mientras (i < N) Hacer
		j <- 0		
		b <- 0
		Escribir "Vendedor " i + 1 ": "
		Mientras (j < M - 1 & b = 0) Hacer
			Escribir "Precio del producto vendido (0 si no vendio mas)"
			Leer P[i,j]
			Si (P[i,j] = 0) Entonces
				b <- 1
			SiNo
				j <- j + 1
			FinSi
		FinMientras
		i <- i + 1
	FinMientras
	i <- 0
	Mientras (i < N) Hacer
		j <- 0		
		Mientras (j < M) Hacer
			Escribir P[i,j] ' ' Sin Saltar		
			j <- j + 1
		FinMientras
		Escribir ''
		i <- i + 1
	FinMientras
FinAlgoritmo
