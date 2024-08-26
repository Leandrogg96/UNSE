Algoritmo ejercicio_9
	//Leer N números enteros. Mostrar la suma de los que sean primos y la cantidad de los que no lo fueron. 
	//Con los datos decada uno de los 5 jugadores de un equipo de un campeonato de futbol 5: 
	//nombre dejugador, peso y edad; se desea calcular y mostrar la siguiente información. Participan 3 equipos.
	//Promedio de Peso y edad de los jugadores.
	//Cantidad de jugadores con pesomayor de 75 kg.
	//Menor peso de cada equipo.
	Definir cj,cv,p75,ap,ae,mp,peso,edad Como Entero;
	Definir prom_p, prom_e Como Real;
	Definir nom como cadena;
	cv<-1;
	Mientras (cv<=3) Hacer
		cj<-1;
		p75<-0;
		mp<-0;
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
			Si (mp=0) Entonces
				mp<-peso;
			SiNo
				Si (peso<mp) Entonces
					mp<-peso			
				Fin Si
			Fin Si			
			cj<-cj+1;
			ae<-ae+edad;
			ap<-ap+peso;
		Fin Mientras		
		Escribir "Menor peso del equipo: ",mp;
		cv<-cv+1;
	Fin Mientras
	prom_e<-ae/cv*cj;
	prom_p<-ap/cv*cj;
	Escribir "El promedio de edad de los jugadores es: ", prom_e;
	Escribir "El promedio de peso de los jugadores es: ", prom_p;
FinAlgoritmo
