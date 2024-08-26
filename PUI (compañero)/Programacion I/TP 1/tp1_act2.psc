Funcion resultado <- Impar(num)
		Definir resultado Como Entero
		Si (num % 2 <> 0) Entonces
			resultado <- 1;
		SiNo
			resultado <- 0;
		FinSi
FinFuncion
Proceso tp1_act2
	Definir num, f Como Entero
	Escribir "Ingrese un numero";
	Leer num;
	Si(Impar(num) = 1) Entonces
		Escribir "Verdadero";
	FinSi
FinProceso
