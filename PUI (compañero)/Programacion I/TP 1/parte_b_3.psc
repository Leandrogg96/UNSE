SubProceso  ordenar_matriz(arg1,arg2,arg3)
	Definir i,b, col, j, aux Como Entero;	
	
	Escribir "Ingrese la columna que quiere ordenar de forma ascendente"
	Leer col;
	Repetir
		i <- 0;
		b <- 0;
		Mientras (i < arg2 - 1) Hacer
			Si (arg1[i + 1, col] > arg1[i, col]) Entonces
				j <- 0;
				Mientras (j < arg3) Hacer
					aux <- arg1[i,j];
					arg1[i,j] <- arg1[i + 1, j];
					arg1[i + 1, j] <- arg1[i,j];
					j <- j + 1;
				FinMientras
				b <- 1;
			FinSi
			i <- i + 1;
		FinMientras
	Hasta Que (b = 0)	
FinSubProceso
Proceso parte_b_3
	Definir N,M,i, j, A Como Entero
	Escribir "Ingrese el numero de filas de la Matriz";
	Leer N;
	Escribir "Ingrese el numero de columnas de la Matriz";
	Leer M;
	Dimension A[N,M];
	i <- 0;
	Mientras (i < N) Hacer
		j <- 0;
		Mientras (j < M) Hacer
			Escribir "Ingrese un numero";
			Leer A[i,j]
			j <- j + 1;
		FinMientras
		i <- i + 1;
	FinMientras
	ordenar_matriz(A,N,M);
FinProceso
