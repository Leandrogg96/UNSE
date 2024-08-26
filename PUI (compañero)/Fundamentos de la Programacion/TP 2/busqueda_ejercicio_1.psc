Algoritmo busqueda_ejercicio_1	
	Definir N,cv,b Como Entero
	Dimension P[100]
	P[0] <- 12
	P[1] <- 45
	P[2] <- 50
	P[3] <- 3
	P[4] <- 10
	Leer N
	cv <- 0
	b <- 0
	Leer X
	Mientras (cv < N & b = 0) Hacer
		Si (X = P[cv]) Entonces
			b <- 1
		FinSi
		cv <- cv + 1
	FinMientras	
	Si (b = 0) Entonces
		Escribir "No encontrado"
	SiNo
		Escribir "Encontrado"
	FinSi
FinAlgoritmo
