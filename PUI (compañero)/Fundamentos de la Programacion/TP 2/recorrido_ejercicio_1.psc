Algoritmo recorrido_ejercicio_1
	Definir X,cv,p,aux Como Entero
	Leer X
	Dimension ELEM[X]
	cv <- 0
	Mientras (cv < X) Hacer
		Leer ELEM[cv]
		cv <- cv + 1
	FinMientras
	cv <- 0
	Limite <- trunc(X/2)
	Mientras (cv < Limite) Hacer
		aux <- ELEM[cv]
		ELEM[cv] <- ELEM[p]
		ELEM[p] <- aux		
		p <- X - cv
		cv <- cv + 1
	FinMientras
FinAlgoritmo
