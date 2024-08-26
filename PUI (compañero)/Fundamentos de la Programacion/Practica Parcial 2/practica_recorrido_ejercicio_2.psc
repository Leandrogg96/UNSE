Algoritmo practica_recorrido_ejercicio_2
	Leer Q
	Leer A
	Dimension W[Q,A]
	i <- 0
	Mientras (i < Q) Hacer
		j <- 0
		Mientras (j < A) Hacer
			Leer W[i,j]
			j <- j + 1
		FinMientras
		i <- i + 1
	FinMientras
	i <- 0
	sum <- 0
	Mientras (i < Q) Hacer
		j <- 0
		sumcp <- 0
		Mientras (j < A) Hacer
			sum <- sum + W[i,j]
			Si(j mod 2 = 0) Entonces
				sumcp <- sumcp + W[i,j]
			FinSi
			j <- j + 1
		FinMientras
		Escribir "Suma de las columnas pares: " sumcp
		i <- i + 1
	FinMientras
	Escribir "Suma de todos los elementos de la matriz: " sum
	
FinAlgoritmo
