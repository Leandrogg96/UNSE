SubProceso resultado <- fumagacion(tipo_plaga,hec)
	Definir resultado, precio Como Real	
	Segun (tipo_plaga) Hacer
		1:
			precio <- 50;
		2:
			precio <- 0;

		3:
			precio <- 70;

		5:
			precio <- 190;

	FinSegun
	Si(hec > 100 & precio <> 0) Entonces
		precio <- precio * hec  * 0.95;
		si(precio > 15000) Entonces
			precio <- precio * 0.95;
		FinSi 		
	FinSi
	resultado <- precio;
FinSubProceso
Proceso parte_b_6
	Definir cod, tipo_plaga, hec, sum_hec Como Entero
	Definir sum_total, fum, monto_1,monto_2,monto_3,monto_5 Como Real
	cod <- -1;
	sum_total <- 0;
	sum_hec <- 0;
	monto_1 <- 0;
	monto_2 <- 0;
	monto_3 <- 0;
	monto_5 <- 0;
	Mientras (cod <> 0) Hacer
		Escribir "Ingrese el Codigo del Cliente (0 para terminar)";
		Leer cod;
		Si(cod <> 0) Entonces
			Escribir "Ingrese el Tipo de Plaga (1,2,3,5)";
			Leer tipo_plaga;
			Escribir "Ingrese la cantidad de Hectarias";
			Leer hec;
			fum <- fumagacion(tipo_plaga,hec);
			Escribir "El cliente: ", cod, " - Monto a pagar: $", fum;
			sum_total <- sum_total + fum;
			sum_hec <- sum_hec + hec;
			Segun (tipo_plaga) Hacer
				1:
					monto_1 <- monto_1 + fum;
				2:
					monto_2 <- monto_2 + fum;
				3:
					monto_3 <- monto_3 + fum;
				5:		
					monto_5 <- monto_5 + fum;
			FinSegun
		FinSi	
		
	FinMientras
	Escribir "El monto total recaudado por la empresa es: ", sum_total;
	Escribir "Tipo 1 - Monto recaudado: ", monto_1;
	Escribir "Tipo 2 - Monto recaudado: ", monto_2;
	Escribir "Tipo 3 - Monto recaudado: ", monto_3;
	Escribir "Tipo 5 - Monto recaudado: ", monto_5;
	Escribir "Monto Total: ", monto_1 + monto_2 + monto_3 + monto_5;
	Escribir "La cantidad de hectarias fumigadas: ", sum_hec;
		
FinProceso
