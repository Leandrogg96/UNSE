Algoritmo lectura_ejercicio_3
	Leer N
	N2 <- N * 9
	Dimension K[N,3 + 5]
	Dimension V[N2]
	i <- 0
	K[0,0] <- 18;K[0,1] <- 24;K[0,2] <- 12;K[1,0] <- 70;K[1,1] <- 67;K[1,2] <- 61;K[2,0] <- 50;K[2,1] <- 45;K[2,2] <- 41
	
	i2 <- 0
	Mientras (i < N) Hacer
		j <- 0
		Mientras (j < 3) Hacer
			Si(K[i,j] mod 6 = 0) Entonces
				V[i2] <- K[i,j]
				i2 <- i2 + 1				
			FinSi	
			j<- j + 1
		FinMientras
		i <- i + 1
	FinMientras	
	
	i <- 0
	Mientras (i < i2 ) Hacer
		Escribir "V[",i,"]: ",V[i]
		i <- i + 1
	FinMientras
FinAlgoritmo
