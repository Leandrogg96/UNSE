Algoritmo lectura_ejercicio_4
	Leer N
	Dimension T[12,N]
	T[0,0] <- 12; T[0,1] <- 5; T[0,2] <- 17; T[1,0] <- 60; T[1,1] <- 23; T[1,2] <- 40;
	T[2,0] <- 55; T[2,1] <- 50; T[2,2] <- 60
	
	i <- 0
	Mientras (i < 12) Hacer
		j <- 0
		Mientras(j < N) Hacer
			Si(T[i,j] mod 2 <> 0) Entonces
				T[i,j] <- -1
			FinSi
			j <- j + 1
		FinMientras
		i <- i + 1
	FinMientras
	i <- 0
	Mientras (i < 12) Hacer
		j <- 0
		Mientras(j < N) Hacer
			Escribir "T[",i,",",j,"]:",T[i,j]
			j <- j + 1
		FinMientras
		i <- i + 1
	FinMientras
FinAlgoritmo
