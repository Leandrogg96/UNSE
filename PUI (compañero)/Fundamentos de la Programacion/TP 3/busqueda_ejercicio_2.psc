Algoritmo busqueda_ejercicio_2
	Leer N
	Leer M
	Dimension NUM[N,M]
	i <- 0 
	Mientras (i < N) Hacer
		j <- 0
		Mientras (j < M) Hacer
			Leer NUM[i,j]
			j <- j + 1
		FinMientras
		i <- i + 1
	FinMientras
	i <- 0 
	c <- 0
	Mientras (i < N) Hacer
		j <- 0
		Mientras (j < M) Hacer
			Si(NUM[i,j] = 105) Entonces
				c <- c + 1
			FinSi
			j <- j + 1
		FinMientras
		i <- i + 1
	FinMientras
	Si(c > 0) Entonces
		Escribir "El valor 105 si existe y se repite: " c
	FinSi
FinAlgoritmo
