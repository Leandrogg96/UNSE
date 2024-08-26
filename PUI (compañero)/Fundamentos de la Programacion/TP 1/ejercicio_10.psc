Algoritmo ejercicio_10	
	Definir N,cj,cv,p75,ap,ae,mp,peso,edad Como Entero;
	Definir prom_p, prom_e Como Real;
	Definir nom como cadena;
	Leer N;
	cv<-1;
	mp<-0;
	Mientras (cv<=N) Hacer
		cj<-1;
		p75<-0;		
		ae<-0;
		ap<-0;
		Mientras (cj<=5) Hacer
			Escribir "Nombre del jugador";
			Leer nom;
			Escribir "Peso del jugador";
			Leer peso;
			Escribir "Edad del jugador";
			Leer edad;			
			Si (peso>75) Entonces
				p75<-p75+1;			
			Fin Si				
			cj<-cj+1;
			ae<-ae+edad;
			ap<-ap+peso;
		Fin Mientras
		Si (mp=0) Entonces
			mp<-peso;
		SiNo
			Si (peso<mp) Entonces
				mp<-peso			
			Fin Si
		Fin Si		
		cv<-cv+1;
	Fin Mientras
	prom_e<-ae/cv*cj;
	prom_p<-ap/cv*cj;
	Escribir "Menor peso de los jugadores: ",mp;
	Escribir "El promedio de edad de los jugadores es: ", prom_e;
	Escribir "El promedio de peso de los jugadores es: ", prom_p;
FinAlgoritmo
