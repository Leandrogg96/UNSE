Algoritmo ejercicio_5
	Definir N,cv,cn,nota como entero 
	Definir P Como Real
	Leer N
	Dimension PROM[N]
	cv <- 0
	
	Mientras (cv < N) Hacer
		cn <- 0
		sum <- 0		
		Mientras (cn < 5) Hacer
			Leer nota
			sum <- sum + nota
			cn <- cn + 1			
		FinMientras
		P <- sum /cn
		PROM[cv] <- P
		cv <- cv +1
	FinMientras
FinAlgoritmo
