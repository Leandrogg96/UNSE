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
	Escribir "Ingresa el numero a buscar en la diagonal principal: "
	Leer W
	M <- trunc((i + N) / 2)
	Mientras (i < N & i < M& W <> NUM[M,M]) Hacer
		Si (W < NUM[M,M]) Entonces
			N <- M - 1
		SiNo
			i <- M + 1
		FinSi
		M <- trunc((i + N) / 2)
	FinMientras
	Si(W = NUM[M,M]) Entonces
		Escribir "El elemento esta en la posición: ", M
	SiNo
		Escribir "El número buscado no existe"
	FinSi	
FinAlgoritmo
