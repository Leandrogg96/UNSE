Funcion resultado <- Suma(num1,num2)
	Definir resultado Como Entero
	resultado <- num1 + num2;
FinFuncion
Funcion resultado <- Multiplicacion(num1,num2)
	Definir resultado Como Entero
	resultado <- num1 * num2;
FinFuncion
Proceso tp1_act4
	Definir num1,num2 Como Entero
	Escribir "Ingrese el primer numero"
	Leer num1;
	Escribir "Ingrese el segundo numero"
	Leer num2;
	Escribir num1, " + ", num2, " = ", Suma(num1,num2);
	Escribir num1, " * ", num2, " = ", Multiplicacion(num1,num2);
FinProceso
