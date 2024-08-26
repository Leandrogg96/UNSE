Algoritmo busqueda_ejercicio_5
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
	Escribir "Codigo de autor a buscar: "
	Leer W
	i <- 0
	Mientras (i < N) Hacer
		j <- 0
		Si(W = UNSE[i,1]) Entonces			
			Mientras (j < 4) Hacer
				Escribir UNSE[i,j]
				j <- j + 1
			FinMientras
		FinSi		
		i <- i + 1
	FinMientras	
FinAlgoritmo
