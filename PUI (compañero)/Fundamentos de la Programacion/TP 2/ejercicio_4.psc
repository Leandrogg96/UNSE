Algoritmo ejercicio_4
	Definir N,cv,Num Como Entero
	Escribir "Ingrese un numero"
	Leer N
	Dimension K[N]
	cv <- 0
	Mientras (cv < N) Hacer
		Leer Num
		Si(Num mod 2 = 0) Entonces
			Si(Num mod 5 = 0)
				K[cv] <- 0
			SiNo
				K[cv] <- Num
			FinSi
		SiNo
			K[cv] <- Num			
		FinSi
		cv <- cv + 1
	FinMientras
	cv <- 0
	Mientras (cv < N) Hacer
		Escribir "K[",cv,"] : ",K[cv]
		cv <- cv + 1
	FinMientras
FinAlgoritmo
