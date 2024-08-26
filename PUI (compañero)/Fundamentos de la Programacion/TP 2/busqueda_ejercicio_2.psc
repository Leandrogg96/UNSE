Algoritmo busqueda_ejercicio_2	 //Busqueda binaria de orden menor a mayor"
	N <- 9
	Dimension CANT[N]
	CANT[0] <- 2; CANT[1] <- 10; CANT[2] <- 14; CANT[3] <- 25; CANT[4] <- 64; CANT[5] <- 70; CANT[6] <- 76; CANT[7] <- 80; CANT[8] <- 81; 
	Escribir "Ingrese el número a buscar"
	Leer W
	cv<-0
	c <- 0
	Mientras (cv<N) Hacer
		M<-trunc((cv+N)/2)
		Si (W = CANT[M]) Entonces
			c  <- c + 1
			cv <- cv + 1
		SiNo
			Si (W<CANT[M]) Entonces
				N<-M-1
				Escribir N
			SiNo
				cv<-M+1
			FinSi
		FinSi	
	FinMientras
	
	Si(c = 0) Entonces
		Escribir "El elemento no esta en el Vector"
	SiNo
		Escribir "Cantidad de veces que esta el numero esta en el vector: ", c 
	FinSi	
FinAlgoritmo
