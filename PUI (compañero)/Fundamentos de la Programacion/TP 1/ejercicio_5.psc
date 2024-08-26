Algoritmo ejercicio_5
	//Leer 10 números y mostrar aquellos que sean mayores a un número X leído previamente o el mensaje "Ninguno Igual" en caso que no se haya cumplido la condición.
	Definir Num,cv,X,B Como Entero;
	Escribir "Ingrese un número para la variable X:";
	Leer X;
	cv<-1;
	B<-0;
	Mientras (cv<=10) Hacer
		Escribir "Ingresa un número";
		Leer Num;
		Si (Num>X) Entonces
			Escribir Num;
			B<-1;		
		Fin Si
		cv<-cv+1;
	Fin Mientras
	Si (B=0) Entonces
		Escribir "Ninguno Igual";	
	Fin Si
FinAlgoritmo
