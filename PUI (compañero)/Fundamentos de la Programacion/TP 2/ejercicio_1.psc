Algoritmo ejercicio_1
	Definir Num,cv Como Entero
	Dimension D[5]
	Leer Num
	cv <- 0
	aux <- trunc(Num / 10000)
	aux2 <- trunc((Num mod 10000) / 1000)
	aux3 <- trunc((Num mod 1000) / 100)
	aux4 <- trunc((Num mod 100) / 10)
	aux5 <- trunc(Num mod 10)
	D[0] <- aux
	D[1] <- aux2
	D[2] <- aux3
	D[3] <- aux4
	D[4] <- aux5
	Mientras (cv < 5) Hacer
		Escribir D[cv]
		cv <- cv + 1
	FinMientras

	
	
FinAlgoritmo
