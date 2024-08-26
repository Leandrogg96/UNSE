Algoritmo busqueda_ejercicio_3
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
	Escribir "Ingrese el numero a buscar: "
	Leer W
	Mientras (i < N & b = 0) Hacer
		mitad <- trunc((i + N) / 2)
		Si (W = NUM[mitad,mitad]) Entonces
			b <- 1 
		SiNo
			Si(W < NUM[mitad,mitad]) Entonces
				N <- mitad - 1
			SiNo
				i <- mitad + 1
			FinSi
		FinSi
	FinMientras
	Si (b = 0) Entonces
		Escribir "El numero buscado no existe"
	FinSi
FinAlgoritmo
