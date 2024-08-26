Algoritmo ejercicio_3
	Definir cv,num, num2 Como Entero
	Dimension PARES[15]
	cv <- 0
	Mientras (cv < 15) Hacer
		Escribir "Ingrese el primer numero"
		Leer num
		Escribir "Ingrese el segundo numero"
		Leer num2
		Si (num > num2) Entonces
			PARES[cv] <- num
		SiNo
			PARES[cv] <- num2
		FinSi
		cv <- cv + 1
	FinMientras
	cv <- 0
	Mientras (cv < 15) Hacer
		Escribir "PARES[",cv,"] : ",PARES[cv]
		cv <- cv + 1
	FinMientras
FinAlgoritmo
