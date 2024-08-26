Algoritmo lectura_ejercicio_6
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
	i <- 0
	Mientras (i < N) Hacer
		Si (UNSE[i,3] > 1500) Entonces
			Escribir "Codigo de Libro: ",UNSE[i,0], " - Codigo de Autor: ", UNSE[i,1], " - Precio: ", UNSE[i,3]  
		FinSi
		i <- i + 1
	FinMientras
FinAlgoritmo
