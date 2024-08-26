Algoritmo busqueda_ejercicio_4
	Dimension PROD[2,2]
	i <- 0
	Mientras (i < 2) Hacer
		j <- 0
		Mientras (j < 2) Hacer
			Leer PROD[i,j]
			j <- j + 1
		FinMientras
		i <- i + 1
	FinMientras
	i <- 0
	c120 <- 0
	cp <- 0
	Mientras (i < 2) Hacer
		j <- 0
		Mientras (j < 2) Hacer
			si(PROD[i,j] > 150) Entonces
				c120 <- c120 + 1
			FinSi
			Si(j mod 2 = 0 & PROD[i,j] mod 2 = 0) Entonces
				cp <- cp + 1
			FinSi
			j <- j + 1
		FinMientras
		i <- i + 1
	FinMientras
	Si(c120 = 0) Entonces
		Escribir "Valores no encontrados"
	SiNo
		Escribir "Cantidad de valores mayores a 120 encontrados: " c120
	FinSi
	Si(cp = 0) Entonces
		Escribir "Valores no encontrados"
	SiNo
		Escribir "Cantidad de numeros pares en columnas impares: " cp
	FinSi
FinAlgoritmo
