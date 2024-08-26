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
SubProceso Numerosprimos(V,N)
	Definir i,c,m,resultado como entero
	i <- 0
	mientras (i < N) Hacer
		c <- 0
		m <- 1
		mientras (m <= V[i]) Hacer
			resultado <- V[i] MOD m
			si (resultado = 0) Entonces
				c <- c +1
			FinSi
			m <- m + 1
		FinMientras
		si (c = 2) Entonces
			Escribir "El numero ", V[i] ," es primo"
		FinSi
		i <- i + 1
	FinMientras
FinSubProceso

Proceso tp1_act7
	Definir N,V Como Entero;
	Escribir "Ingrese un numero"
	Leer N
	Dimension V[N];
	Escribir "";
	CargaVector(V,N);
	Escribir "";
	MostrarVector(V,N);
	Escribir "";
	Numerosprimos(V,N)
FinProceso
