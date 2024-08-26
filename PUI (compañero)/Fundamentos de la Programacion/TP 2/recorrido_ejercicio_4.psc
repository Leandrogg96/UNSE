Algoritmo recorrido_ejercicio_4
	Definir N,cv,p Como Entero
	Leer N
	Dimension V[N]
	cv <- 0
	Mientras (cv < N) Hacer
		Leer V[cv]
		cv <- cv + 1
	FinMientras	
	cv <- 1
	Mientras (cv < N) Hacer		
		Si (V[cv] = trunc(V[cv-1]/2)+1) Entonces
			Escribir V[cv]
		FinSi				
		cv <- cv + 1
	FinMientras
FinAlgoritmo
