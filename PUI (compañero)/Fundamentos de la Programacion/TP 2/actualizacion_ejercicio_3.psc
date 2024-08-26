Algoritmo actualizacion_ejercicio_3
	N <- 20
	Dimension A[N]
	A[0] <- 141; A[1] <- 177; A[2] <- 693; A[3] <- 154; A[4] <- 172
	cv <- 0
	Mientras (cv < 20) Hacer		
		Si (trunc(A[cv] mod 100 / 10) = 7) Entonces
			j <- cv
			Mientras (j < 19) Hacer
				A[j] <- A[j + 1]
				j <- j + 1
			FinMientras	
			N <- N - 1
		SiNo
			cv <- cv + 1
		FinSi		
	FinMientras
	cv <- 0
	Mientras (cv < N) Hacer
		Escribir A[cv]
		cv <- cv + 1
	FinMientras
FinAlgoritmo
