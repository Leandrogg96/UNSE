SubProceso  Diagonal_Principal(arg1,arg2)
	Definir i Como Entero;
	i <- 0;
	Mientras (i < arg2) Hacer
		Escribir arg1[i,i] Sin Saltar, " ";
		i <- i + 1;
	FinMientras
FinSubProceso
Proceso parte_b_2
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
	Escribir "Diagonal Principal";
	Diagonal_Principal(A,N);
FinProceso
