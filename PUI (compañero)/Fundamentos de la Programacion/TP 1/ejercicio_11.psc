Algoritmo ejercicio_10
	Definir cv,ce,sum,c1,cs Como Entero;
	Definir prom,promg Como Real;
	cv<-1;
	c1<-0;
	Mientras (cv<=3) Hacer
		ce<-1;
		sum<-0;
		promg<-0;
		Escribir "C�digo de sucursal";
		Leer cod;
		Mientras (ce<=5) Hacer
			Escribir "DNI";
			Leer dni;
			Escribir "Sueldo";
			Leer sd;
			Escribir "Antig�edad";
			Leer atg;
			sum<-sum+sd;
			Si (cod=1|cod=2) Entonces
				Si (atg>15&atg<25) Entonces
					c1<-c1+1;				
				Fin Si			
			Fin Si
			ce<-ce+1;
		Fin Mientras
		Si (promg=0) Entonces
			prom<-sum/ce;
			cs<-cod;
		SiNo
			Si (promg<prom) Entonces
				prom<-sum/ce;
				cs<-cod;			
			Fin Si
		Fin Si
		cv<-cv+1;
	Fin Mientras
	Escribir "Codigo de la sucursal con el menor promedio de sueldo: ",cs;
	Escribir "Cantidad de empleados de las sucursales cuyos c�digos sean iguales a 1 o 2 y que tengan una antig�edad mayor igual 15 a�os y menor a 25 a�os: ",c1; 
FinAlgoritmo
