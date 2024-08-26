Proceso ejercicio_4
	//Leer N caracteres, contar y mostrar la cantidad de veces que se ingresan las vocales `A´ o `E´, tanto en mayúsculas como en minúsculas. En caso de no haber leído ninguno de los caracteres
	//mencionados mostrar el mensaje al final del ingreso "No se ingresaron".
	Definir N,cv,ca,ce Como entero;
	Leer N;
	cv<-1;
	ca<-0;
	ce<-0;
	Mientras (cv<=N) Hacer
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
	Si (ca>0 o ce>0) Entonces
		Escribir "Caracteres con la letra A: ",ca;
		Escribir "Caracteres con la letra E: ",ce;
	SiNo
		Escribir "No se ingresaron";
	Fin Si	
FinProceso
