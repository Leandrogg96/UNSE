SubProceso ValorAbsoluto(num)
	Si (num < 0) Entonces
		Escribir num * (-1);
	SiNo
		Escribir num;
	FinSi
FinSubProceso
Proceso tp1_act5
	Definir num Como Entero
	Escribir "Ingrese un numero"
	Leer num;
	ValorAbsoluto(num);	
FinProceso
