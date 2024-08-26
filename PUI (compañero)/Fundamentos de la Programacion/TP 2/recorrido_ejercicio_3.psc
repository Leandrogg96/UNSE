Algoritmo recorrido_ejercicio_3
	Leer N
	Dimension V[N]
	cv <- 0
	Mientras (cv < N) Hacer
		Leer V[cv]
		cv <- cv + 1
	FinMientras
	cv <- 0
	sum <- 0
	Mientras (cv < N) Hacer
		Si (cv mod 2 <> 0) Entonces
			sum <- sum + V[cv]
		FinSi
		cv <- cv + 1
	FinMientras
	prom <- sum / N
	Escribir "Promedio de los elementos de posición impar: ", prom
	
FinAlgoritmo
