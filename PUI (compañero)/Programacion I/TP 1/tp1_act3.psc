Funcion resultado <- Factorial(num)
	Definir resultado, f Como Entero
	f <- 1
	Mientras (num <> 0) Hacer
		f <- f * num;
		num <- num - 1;
	FinMientras
	resultado <- f;
FinFuncion
Proceso tp1_act3
	Definir num,cv Como Entero	
	cv <- 1;
	Mientras (cv <= 2) Hacer
		Escribir "Ingrese un numero";
		Leer num;
		Escribir "El Factorial del numero ", num, " es: ", Factorial(num);
		cv <- cv + 1;
	FinMientras
	
FinProceso
