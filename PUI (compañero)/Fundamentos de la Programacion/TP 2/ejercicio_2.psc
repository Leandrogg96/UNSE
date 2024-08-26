Algoritmo ejercicio_2
	Definir N,may,men,cv Como Entero
	Leer N
	Dimension Nota[N]
	cv <- 0
	Mientras (cv < N) Hacer
		Leer Nota[cv]
		cv <- cv + 1
	FinMientras
	cv <- 0
	may <- 0
	men <- 0
	Mientras (cv < N) Hacer	
		Si (may = 0) Entonces
			may <- Nota[cv] 
		SiNo
			Si (may < Nota[cv]) Entonces
				may <- Nota[cv] 
			FinSi
		FinSi
		Si (men = 0) Entonces
			men <- Nota[cv]
		SiNo
			Si (men > Nota[cv]) Entonces
				men <- Nota[cv]
			FinSi
		FinSi
		cv <- cv + 1
	FinMientras
	Escribir "Mayor nota: ", may
	Escribir "Menor nota: ", men	
FinAlgoritmo
