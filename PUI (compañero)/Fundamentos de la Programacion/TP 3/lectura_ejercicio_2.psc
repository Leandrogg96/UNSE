Algoritmo lectura_ejercicio_2
	// T[mes,dia] = T[12,30]
	Dimension T[12,30]
	i<-0
	Mientras (i < 12) Hacer
		j <- 0
		Mientras (j<30) Hacer
			Escribir "Temperatura del dia: ", j + 1
			Leer T[i,j]
			j <- j + 1
		FinMientras
		i <- i + 1
	FinMientras
FinAlgoritmo
