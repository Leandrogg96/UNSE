Algoritmo recorrido_ejercicio_1
	Leer N
	Dimension W[N,N]
	i<- 0
	Mientras (i < N) Hacer
		j <- 0
		Mientras (j < N) Hacer
			Leer W[i,j]
			j <- j + 1
		FinMientras
		i <- i + 1
	FinMientras
	i <- 0
	sumts <- 0
	cantm <- 0
	mp <- 0
	Mientras (i < N) Hacer
		j <- 0
		Mientras (j < N) Hacer
			si(i < j) 
				Escribir W[i,j]
				sumts <- sumts + W[i,j]
			FinSi
			si(i > j) 
				sumti <- sumti + W[i,j]
			FinSi
			Si(i = j & W[i,j] mod 5 = 0) Entonces
				cantm <- cantm + 1
			FinSi
			si(i mod 2 = 0) Entonces
				si(mp = 0) Entonces
					mp = W[i,j]
				SiNo
					si(W[i,j] < mp) Entonces
						mp = W[i,j]

					FinSi
				FinSi				
			FinSi
			j <- j + 1
		FinMientras
		i <- i + 1
	FinMientras 
	i <- 0
	Mientras (i < N - 1) Hacer
		j <- 0
		Mientras (j < N) Hacer			
			si(i mod 2 <> 0) Entonces				
				aux <- W[i,j]
				W[i,j] <- W[i+1,j]
				W[i+1,j] <- aux
			FinSi
			j <- j + 1
		FinMientras
		i <- i + 1
	FinMientras 
	i <- 0
	Mientras (i < N ) Hacer
		j <- 0
		Mientras (j < N - 1) Hacer			
			si(j mod 2 <> 0) Entonces				
				aux <- W[i,j]
				W[i,j] <- W[i,j+1]
				W[i,j+1] <- aux
			FinSi
			j <- j + 1
		FinMientras
		i <- i + 1
	FinMientras 
	prom <- sumti / (N*N)
	Escribir "La suma de la tringular superior es: ', sumts
	Escribir "Promedio de la tringular inferior es:", prom
	Escribir "Cantidad de multiplos de 5 en la diagonal principal: " , cantm
	Escribir "Menos valor de las filas pares: ", mp
	i <- 0
	Mientras (i< N) Hacer
		j <- 0 
		Mientras (j < N) Hacer
			Escribir "W[",i,",",j,"]: ",W[i,j]
			j <- j + 1
		FinMientras
		i <- i + 1
	FinMientras
	
FinAlgoritmo
