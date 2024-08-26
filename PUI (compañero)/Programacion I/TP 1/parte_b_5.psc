Funcion ordenar_asc(arg1 Por Referencia,arg2)
	Definir i,aux,b Como Entero
	Repetir
		b <- 0;	
		i <- 0;
		Mientras (i < arg2 - 1) Hacer
			Si (arg1[i] > arg1[i + 1]) Entonces
				aux <- arg1[i];
				arg1[i] <- arg1[i + 1]
				arg1[i + 1] <- aux;
				b <- 1;
				
			FinSi		
			i <- i + 1;
		FinMientras
	Hasta Que (b = 0)
FinFuncion
Funcion serie_num(arg1 Por Referencia, arg2 Por Referencia)
	Definir i, num,b,j Como Entero
	num <- -1;
	Mientras (num <> 0) Hacer
		Escribir "Ingrese un numero (0 para terminar)"
		Leer num;
		Si( num <> 0 ) Entonces
			i <- 0;
			b <- 0;
			Mientras (i < arg2 & b = 0) Hacer
				Si (num < arg1[i]) Entonces
					j <- arg2 - 1;
					Mientras (j >= i) Hacer
						arg1[j + 1] <- arg1[j]
						j <- j - 1;
					FinMientras
					arg1[i] <- num;
					arg2 <- arg2 + 1;
					b <- 1;
					Escribir arg1[i];
				SiNo
					arg1[arg2] <- num;
					arg2 <- arg2 + 1;
					b <- 1;
				FinSi
				i <- i + 1;
			FinMientras			
		FinSi
	FinMientras	
FinFuncion
	
Proceso parte_b_5
	Definir C, N, i como entero
	Escribir "Ingrese un numero"
	Leer N
	Dimension C[N + 20]
	i <- 0;
	Mientras (i < N) Hacer
		Escribir "Ingrese un numero para el vector C"
		leer C[i];
		i <- i + 1;
	FinMientras
	ordenar_asc(C,N)
	i <- 0;
	Mientras (i < N) Hacer
		Escribir C[i] Sin Saltar, " ";
		i <- i + 1;
	FinMientras
	Escribir "";
	serie_num(C,N);
	i <- 0;
	Mientras (i < N) Hacer
		Escribir C[i] Sin Saltar, " ";
		i <- i + 1;
	FinMientras
	Escribir "";
FinProceso
