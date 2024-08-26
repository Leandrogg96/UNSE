Algoritmo busqueda_ejercicio_1
	Leer N
	Leer M
	Dimension P[N,M]
	i <- 0
	Mientras (i < N) Hacer
		j <- 0
		Mientras (j < M) Hacer
			Leer P[i,j]
			j <- j + 1
		FinMientras
		i <- i + 1		
	FinMientras
	i <- 0
	Mientras (i < N) Hacer
		j <- 0
		Mientras (j < M) Hacer
			x <- 1
			c <- 0
			Mientras (x<=P[i,j]) Hacer
				Si (P[i,j] MOD (x) = 0) Entonces
					c <- c + 1		
				FinSi
				x <- x + 1
			FinMientras
			Si (c = 2) Entonces
				Escribir "El numero " P[i,j] " es primo"
			FinSi
			j <- j + 1
		FinMientras
		i <- i + 1		
	FinMientras
FinAlgoritmo
