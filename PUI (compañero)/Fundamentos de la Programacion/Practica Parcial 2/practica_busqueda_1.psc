Algoritmo practica_busqueda_1
	Leer N
	Dimension NUM[N,N]
	Escribir "Matriz ordenada de forma descendente"
	i <- 0
	Mientras (i < N) Hacer
		j <- 0
		Mientras (j < N) Hacer
			Leer NUM[i,j]
			j <- j + 1
		FinMientras
		i <- i + 1
	FinMientras
	i <- 0
	Mientras (i < N) Hacer
		j <- 0
		Mientras (j < N) Hacer
			Escribir NUM[i,j] ' ' Sin Saltar
			j <- j + 1
		FinMientras
		Escribir ''
		i <- i + 1
	FinMientras
	i <- 0
	c <- 0	
	W <- 60
	Mientras (i < N) Hacer
		j <- 0
		col <- N
		Mientras (j < col) Hacer
			M <- trunc((col + j) / 2)
			Escribir "Valor de M: " M
			Escribir "Valor de NUM[" i "," M "]: " NUM[i,M]
			Si (W = NUM[i,M]) Entonces
				c <- c + 1
				col <- M - 1
			SiNo
				Si (W > NUM[i,M]) Entonces
					col <- M - 1
				SiNo
					j <- M + 1
				FinSi				
			FinSi		
			
		FinMientras
		i <- i + 1
	FinMientras
	Escribir c
FinAlgoritmo
