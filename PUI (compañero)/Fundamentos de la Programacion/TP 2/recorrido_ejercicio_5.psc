Algoritmo recorrido_ejercicio_5
	Definir N,cv,b,b2 Como Entero
	Leer N
	Dimension EDADES[N]
	cv <- 0
	b <- 0
	b2 <- 0
	Mientras (cv < N) Hacer
		Leer EDADES[cv]
		cv <- cv + 1
	FinMientras	
	cv <- 1
	Mientras (cv < N) Hacer
		Si (EDADES[cv - 1] < EDADES[cv]) Entonces
			b <- 1
		SiNo
			Si (EDADES[cv - 1] > EDADES[cv]) Entonces
				b2 <- 1
			FinSi	
		FinSi		
		cv <- cv + 1
	FinMientras
	Si (b = b2) Entonces
		Escribir "Ninguna"		
	SiNo
		Si (b = 1) Entonces
			Escribir "Creciente"
		SiNo
			Escribir "Decreciente"
		FinSi
	FinSi
FinAlgoritmo
