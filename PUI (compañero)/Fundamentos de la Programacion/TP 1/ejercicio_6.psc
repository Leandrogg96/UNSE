Algoritmo ejercicio_6
	Definir N,cv,ces,cis,ceq,L1,L2,L3 Como Entero;
	cv<-1;
	ces<-0;
	cis<-0;
	ceq<-0;
	Leer N;
	Mientras (cv<=N) Hacer
		Leer L1,L2,L3;
		Si (L1<>L2&L2<>L3&L3<>L1) Entonces
			ces<-ces+1;
		SiNo
			Si (L1=L2 & L2=L3) Entonces
				ceq<-ceq+1;
			SiNo
				cis<-cis+1;
			Fin Si
		Fin Si
		cv<-cv+1;
	Fin Mientras
	Pc<-ceq*100/N;
	Escribir "Porcentaje de tri�gulos Equilateros: ",Pc;
	Escribir "Cantidad tri�ngulos Escaleno: ",ces;
	Escribir "Cantidad tri�ngulos Is�sceles: ",cis;
	Escribir "Cantidad tri�ngulos Equil�tero: ",ceq;
	Si (ces=0) Entonces
		Escribir "No ingreso ning�n triangulo Escaleno";
	Fin Si
FinAlgoritmo
