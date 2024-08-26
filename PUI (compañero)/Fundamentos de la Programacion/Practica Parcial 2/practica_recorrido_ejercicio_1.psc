Algoritmo practica_recorrido_ejercicio_1
	Dimension NUM[4,6]
	i <- 0
	Mientras (i < 4) Hacer
		j <- 0
		Mientras (j < 6) Hacer
			Leer NUM[i,j]
			j <- j + 1
		FinMientras
		i <- i + 1
	FinMientras	
	i <- 0 
	Mientras (i < 4) Hacer
		j <- 0
		sum <- 0
		Mientras (j < 6) Hacer
			sum <- sum + NUM[i,j]
			j <- j + 1
		FinMientras
		prom <- sum / j + 1
		Escribir "Promedio de la Fila " i ": " prom
		i <- i + 1
	FinMientras
	j <- 0
	Mientras (j < 6) Hacer
		i <- 0
		sumC <- 0
		Mientras (i < 4) Hacer
			sumC <- sumC + NUM[i,j]
			i <- i + 1			
		FinMientras
		Si (j mod 2 = 0) Entonces
			prom <- sumC / i + 1
			Escribir "Promedio de la Columna Par (" j "): " prom
		FinSi
		Escribir "Suma de la Columna " j ": " sumC
		j <- j + 1
	FinMientras	
	i <- 0
	Mientras (i < 4) Hacer
		Si(NUM[i,i] mod 2 = 0) Entonces
			Escribir NUM[i,i]
		FinSi
		i <- i + 1
	FinMientras	
FinAlgoritmo
