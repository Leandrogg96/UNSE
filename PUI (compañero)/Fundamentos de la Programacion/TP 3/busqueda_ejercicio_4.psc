Algoritmo busqueda_ejercicio_4
	Dimension PROD[15,8]
	i <- 0
	Mientras (i < 15) Hacer
		j <- 0
		Mientras (j < 8) Hacer
			Leer PROD[i,j]
			j <- j + 1
		FinMientras
		i <- i + 1
	FinMientras
	i <- 0
	c120 <- 0
	cp <- 0
	Mientras (i < 15) Hacer
		j <- 0
		Mientras (j < 8) Hacer
			Si(PROD[i,j] > 120) Entonces
				c120 <- c120 + 1
			FinSi
			Si (j mod 2 <> 0 & PROD[i,j] mod 2 = 0) Entonces
				cp <- cp + 1
			FinSi
			j <- j + 1
		FinMientras
		i <- i + 1
	FinMientras
	Si(cp = 0 & c120 = 0) Entonces
		Escribir "Valores no encontrados"
	FinSi
FinAlgoritmo
