SubProceso CargaVector(V,N)
	Definir i Como Entero
	i <- 0
	Mientras (i < N) Hacer
		leer V[i];
		i <- i + 1;
	FinMientras
FinSubProceso
SubProceso MostrarVector(V,N)
	Definir i Como Entero
	i <- 0
	Mientras (i < N) Hacer
		Escribir V[i];
		i <- i + 1;
	FinMientras
FinSubProceso
Proceso tp1_act6
	Definir N,V Como Entero;
	Escribir "Ingrese un numero"
	Leer N
	Dimension V[N];
	Escribir "";
	CargaVector(V,N);
	Escribir "";
	MostrarVector(V,N);
FinProceso
