Algoritmo ejercicio_8
	// 8.	Leer N números enteros. Mostrar la suma de los que sean primos y la cantidad de los que no lo fueron. 
	Definir N,Num,cv,c,sum,b,cnp Como Entero
	Leer N
	cv <- 1
	sum <- 0
	cnp <- 0
	Mientras (cv<=N) Hacer
		c <- 2
		b <- 0
		Leer Num
		mitad <- trunc(Num/2)
		Mientras (c-1<=mitad) Hacer
			resto <- Num MOD (c)			
			Si (resto=0) Entonces
				b <- 1
			FinSi
			c <- c+1
		FinMientras
		Si (b=0) Entonces
			sum <- sum+Num			
		SiNo
			cnp <- cnp+1			
		FinSi
		cv <- cv+1
	FinMientras
	Escribir 'Suma total de los números primos: ',sum
	Escribir 'Cantidad de números no primos: ',cnp
FinAlgoritmo
