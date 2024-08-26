SubProceso Intercambio (arg1 Por Referencia, arg2 Por Referencia)
	Definir aux Como Entero
	aux <- arg1;
	arg1 <- arg2;
	arg2 <- aux;	 
FinSubProceso

Proceso parte_b_1
	Definir X,Y1 Como Entero
	Escribir "Ingrese el primer numero"
	Leer X
	Escribir "Ingrese el segundo numero"
	Leer Y1
	Escribir "El valor de X es: ", X;
	Escribir "El valor de Y1 es: ", Y1;
	Intercambio(X,Y1);
	Escribir "El nuevo valor de X es: ", X;
	Escribir "El nuevo valor de Y1 es: ", Y1;
FinProceso
