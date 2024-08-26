Algoritmo recorrido_ejercicio_2
	// Datos de entrada: A[NxN]
	//Datos de salida: "Es simetrica"
	// Una matriz es simetrica cuando para todo i y para todo j se verifica A[i,j] = A[j,i]
	Leer N
	Dimension A[N,N]
	Dimension B[N,N]
	Dimension Trans_B[N,N]
	Dimension V[N*N]

	i <- 0
	Mientras (i < N) Hacer
		j <- 0
		Mientras (j < N) Hacer
			Leer A[i,j]
			j <- j + 1
		FinMientras
		i <- i + 1
	FinMientras
	i <- 0
	band <- 0
	Mientras (i < N - 1 & band = 0 & band2 = 1) Hacer
		j <- i + 1
		Mientras (j < N - 1 & band = 0 & band2 = 1) Hacer
			Si (i = j & A[i,j] <> 1) Entonces
				band2 = 1 
			SiNo
				si((i < j | i > j) & A[i,j] <> 0) Entonces
					band2 = 1
				FinSi
			FinSi
			Si(A[i,j] <> A[j,i]) Entonces
				band <- 1
			FinSi
			j <- j + 1
		FinMientras
		i <- i + 1
	FinMientras
	Si(band2 = 0) Entonces
		Escribir "Es una Matriz Identidad"
	SiNo
		Escribir "No es una Matriz Identidad"
	FinSi
	Si(band = 0) Entonces
		Escribir "Es simetrica"
	SiNo
		Escribir "No es simetrica"
	FinSi
	Mientras (i < N) Hacer
		j <- 0
		Mientras (j < N) Hacer
			Leer B[i,j]
			j <- j + 1
		FinMientras
		i <- i + 1
	FinMientras
	i <- 0
	Mientras (i < N) Hacer
		j <- 0
		Mientras (j < N) Hacer
			Trans_B[j,i] <- B[i,j]
			j <- j + 1
		FinMientras
		i <- i + 1
	FinMientras
	i <- 0 
	Mientras (i < N) Hacer
		j <- 0
		Mientras (j < N) Hacer
			Escribir Trans_B[i,j] ' ' Sin Saltar
			j <- j + 1
		FinMientras
		Escribir ''
		i <- i + 1
	FinMientras
	i <- 0
	N2 <- 0
	Mientras (i < N) Hacer
		Si(A[i, N - 1 - i] mod 2 = 0) Entonces
			V[N2] <- A[i, N - 1 - i]
			N2 <- N2 + 1
		FinSi
		i <- i + 1
	FinMientras 
	i <- 0
	Mientras (i < N2) Hacer
		Escribir V[i] ' ' Sin Saltar
		i <- i + 1
	FinMientras
	
FinAlgoritmo
