Algoritmo ordenacion_ejercicio_1
	Leer N
	Leer M
	Dimension LEG[N,M]
	Dimension V[N*M]
	i <- 0
	Mientras (i < N) Hacer
		j <- 0
		Mientras (j < M) Hacer
			Leer LEG[i,j]
			j <- j + 1
		FinMientras
		i <- i + 1
	FinMientras
	// a)
	i <- 0
	Mientras (i < N) Hacer
		p <- i
		j <- i + 1
		Mientras (j < N) Hacer
			Si (LEG[j,j] > LEG[p,p]) Entonces
				p <- j
			FinSi
			j <- j +1
		FinMientras
		W <- LEG[p,p]
		LEG[p,p] <- LEG[i,i]
		LEG[i,i] <- W
		i <- i + 1
	FinMientras
	// Matriz despues de ordenar la diagonal Principal
	Escribir "Matriz despues de ordenar la diagonal Principal"
	i <- 0
	Mientras (i < N) Hacer
		j <- 0
		Mientras (j < M) Hacer
			Escribir LEG[i,j] ' ' Sin Saltar
			j <- j + 1
		FinMientras
		Escribir ''
		i <- i + 1
	FinMientras
	// b)
	i <- 0
	k <- 0
	Mientras (i < N) Hacer
		j <- i + 1
		Mientras (j < M) Hacer
			
				V[k] <- LEG[i,j]
				k <- k + 1
			
			j <- j + 1
		FinMientras
		i <- i + 1
	FinMientras
	i <- 0
	Mientras (i < k) Hacer
		Escribir V[i] ' ' Sin Saltar
		i <- i + 1
	FinMientras
	
	Repetir
		b <- 0
		i <- 0
		Mientras (i < k - 1) Hacer
			Si(V[i] > V[i + 1]) Entonces
				W <- V[i]
				V[i] <- V[i + 1]
				V[i + 1] <- W
				b <- 1
			FinSi
			i <- i + 1
		FinMientras
	Hasta Que b = 0
	i <- 0
	Escribir ''
	Escribir 'Vector resultante de la triangular superior despues de ordenar: '
	Mientras (i < k) Hacer
		Escribir V[i] ' ' Sin Saltar
		i <- i + 1
	FinMientras
	i <- 0
	k <- 0
	Escribir ''
	Mientras (i < N) Hacer
		j <- i + 1		
		Mientras (j < M) Hacer
			LEG[i,j] <- V[k]
			k <- k + 1			
			j <- j + 1
		FinMientras
		i <- i + 1
	FinMientras
	// Matriz despues de ordenar la triangular superior
	Escribir "Matriz despues de ordenar la triangular superior"
	i <- 0
	Mientras (i < N) Hacer
		j <- 0
		Mientras (j < M) Hacer
			Escribir LEG[i,j] ' ' Sin Saltar
			j <- j + 1
		FinMientras
		Escribir ''
		i <- i + 1
	FinMientras
FinAlgoritmo
