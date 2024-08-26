Proceso ejercicio_3
	//Leer 5 caracteres, contar y mostrar la cantidad de veces que se ingresan las vocales `A´ o `E, tanto enmayúsculas como en minúsculas.
	Definir cv,ca,ce Como entero;
	cv<-1;
	ca<-0;
	ce<-0;
	Mientras (cv<=5) Hacer
		Escribir "Ingrese una letra";
		Leer letra;
		Segun (letra) Hacer
			'a','A':
				ca<-ca+1;
				cv<-cv+1;
			'e','E':
				ce<-ce+1;
				cv<-cv+1;
			De Otro Modo:
				cv<-cv+1;
		FinSegun
	FinMientras
	Escribir "Caracteres con la letra A: ",ca;
	Escribir "Caracteres con la letra E: ",ce;
FinProceso
