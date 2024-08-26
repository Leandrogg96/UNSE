Algoritmo actualizacion_ejercicio_6
	N <- 20
	Dimension A[N + 15]
	Dimension B[15]
	cv <- 0
	A[0] <- 98;A[1] <- 87;A[2] <- 76;A[3] <- 72;A[4] <- 70;A[5] <- 67;A[6] <- 61;A[7] <- 56;A[8] <- 50;A[9] <- 45;A[10] <- 41;
	B[0] <- 44;B[1] <- 64;B[2] <- 80;B[3] <- 43;B[4] <- 95;B[5] <- 10;
	Mientras (cv < 15 - 1) Hacer
		j <- 0
		band <- 0
		Mientras (j < N & band = 0) Hacer
			Si(B[cv] > A[j]) Entonces
				k <- N
				Mientras (k >= j) Hacer
					A[k + 1] <- A[k]
					k = k - 1
				FinMientras
				A[j] <- B[cv]
				N <- N + 1
				band <- 1
				Escribir "Valor de B: ", B[cv]
			SiNo
				j <- j + 1
			FinSi			
		FinMientras
		cv <- cv + 1
	FinMientras
	Si (band = 0) Entonces
		A[j] <- B[cv]
		N <- N + 1
	FinSi
	cv <- 0
	Mientras (cv < N) Hacer
		Escribir "A[",cv,"]: ", A[cv]
		cv <- cv + 1
	FinMientras
FinAlgoritmo
