Algoritmo ejercicio_7
	// Leer un número entero, determinar si es Primo, mostrar el número ingresado y el mensaje "Es Primo";caso contrario el mensaje "Tiene Divisores".
	Definir Num,cv,b,i Como Entero
	Leer Num
	cv <- 1
	b <- 0
	i <- 2
	mitad <- trunc(Num/2)
	Mientras (cv<=mitad) Hacer
		resto <- Num MOD (i)
		Si (resto=0) Entonces
			b <- 1
		FinSi
		cv <- cv+1
		i <- i+1
	FinMientras
	Escribir Num
	Si (b=1) Entonces
		Escribir 'Tiene Divisores'
	SiNo
		Escribir 'Es primo'
	FinSi
FinAlgoritmo
