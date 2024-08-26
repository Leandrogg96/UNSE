Algoritmo practica_busqueda_4
	Leer F
	Leer Q
	Dimension P[F,Q]
	Dimension V[F*Q]
	i <- 0
	Mientras (i < F) Hacer
		j <- 0
		Mientras (j < Q) Hacer
			Leer P[i,j]
			j <- j + 1
		FinMientras
		i <- i + 1
	FinMientras
	Escribir "Numero a buscar"
	Leer W
	i <- 0
	c <- 0
	Mientras (i < F) Hacer
		j <- 0
		Mientras (j < Q) Hacer
			Si(W = P[i,j]) Entonces
				Si(c = 0) Entonces
					V[c] <- P[i,j]
					c <- c + 1
					V[c] <- P[i,j] + 1 + c
				SiNo
					V[c] <- P[i,j] + 1 + c
					c <- c + 1
				FinSi				
			FinSi
			j <- j + 1
		FinMientras
		i <- i + 1
	FinMientras
	i <- 0
	Mientras (i < c) Hacer
		Escribir V[i] ' ' Sin Saltar
		i <- i + 1
	FinMientras	
FinAlgoritmo
