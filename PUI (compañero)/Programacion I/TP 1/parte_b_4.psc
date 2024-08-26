Funcion resultado <- suma_matriz(arg1,arg2,arg3)	
	Definir i,j, suma, resultado Como Entero;		
	i <- 0;
	suma <- 0;
	Mientras (i < arg2) Hacer
		j <- i + 1;
		Mientras ( j < arg3) Hacer
			suma <- suma + arg1[i,j];
			j <- j + 1;
		FinMientras
		i <- i +1;
	FinMientras
	resultado <- suma;
FinFuncion
Funcion resultado <- cant_mul_5(arg1,arg2,arg3)	
	Definir i,j, c, resultado Como Entero;		
	i <- 0;
	c <- 0;
	Mientras (i < arg2) Hacer
		j <- i + 1;
		Mientras ( j < arg3) Hacer
			Si (arg1[i,j] mod 5 = 0) Entonces
				c <- c + 1;
			FinSi
			j <- j + 1;
		FinMientras
		i <- i +1;
	FinMientras
	resultado <- c;
FinFuncion
Funcion resultado <- prom_matriz(arg1,arg2,arg3)	
	Definir i,j, suma,c Como Entero;	
	Definir resultado Como Real
	i <- 0;
	suma <- 0;
	c <- 0;
	Mientras (i < arg2) Hacer
		j <- 0;
		Mientras ( j < arg3) Hacer
			si(j < i ) Entonces
				suma <- suma + arg1[i,j];
				c <- c + 1;
			FinSi
			
			j <- j + 1;
		FinMientras
		i <- i +1;
	FinMientras
	resultado <- suma / c;
FinFuncion
Funcion resultado <- fila_par(arg1,arg2,arg3)	
	Definir i, j, men, resultado Como Entero;	
	men <- 0;
	i <- 0;
	Mientras (i < arg2) Hacer
		Si(i mod 2 = 0) Entonces
			j <- 0;
			Mientras (j < arg3) Hacer
				Si (men = 0) Entonces
					men <- arg1[i,j];
				SiNo
					Si(men > arg1[i,j]) Entonces
						men <- arg1[i,j];
					FinSi
				FinSi
				j <- j +1;
			FinMientras			
		FinSi
		i <- i +1;
	FinMientras
	resultado <- men;
FinFuncion
Funcion resultado <- col_impar(arg1,arg2,arg3)	
	Definir i, j, mayor, resultado Como Entero;		
	mayor <- 0;
	i <- 0;
	Mientras (i < arg2) Hacer
			j <- 0;
			Mientras (j < arg3) Hacer
				si(j mod 2 <> 0) Entonces
					Si (mayor = 0) Entonces
						mayor <- arg1[i,j];
					SiNo
						Si(mayor < arg1[i,j]) Entonces
							mayor <- arg1[i,j];
						FinSi
					FinSi
				FinSi
				j <- j + 1;
			FinMientras			
		
		i <- i +1;
	FinMientras
	resultado <- mayor;
FinFuncion
SubProceso  intercambio(arg1,arg2,arg3)	
	Definir i, j, aux Como Entero;		
	i <- 0;
	Mientras (i < arg2 - 1) Hacer
		Si(i mod 2 = 0) Entonces
			j <- 0;
			Mientras (j < arg3) Hacer
				aux <- arg1[i,j];
				arg1[i,j] <- arg1[i + 1,j];
				arg1[i + 1, j] <- arg1[i,j];
				j <- j + 1;
			FinMientras			
		FinSi
		i <- i +1;
	FinMientras
	Escribir "Matriz intercambiada"
	i <- 0;
	Mientras (i < arg2) Hacer		
		j <- 0
		Mientras (j < arg3) Hacer
			
			Escribir arg1[i,j] Sin Saltar, " ";
			j <- j + 1;
		FinMientras
		i <- i + 1;
	FinMientras
FinSubProceso
 
Proceso parte_b_4
	Definir N,M,i, j, W,opc Como Entero
	Escribir "Ingrese el numero de filas de la Matriz";
	Leer N;
	Escribir "Ingrese el numero de columnas de la Matriz";
	Leer M;
	Dimension W[N,M];
	i <- 0;
	Mientras (i < N) Hacer
		j <- 0;
		Mientras (j < M) Hacer
			Escribir "Ingrese un numero";
			Leer W[i,j]
			j <- j + 1;
		FinMientras
		i <- i + 1;
	FinMientras
	opc <- -1;
	Mientras (opc <> 0) Hacer
		Borrar Pantalla;
		Escribir "Menu: "
		Escribir "1) Sumar triangular superior"
		Escribir "2) Promedio de la triangular inferior"
		Escribir "3) Cantidad de multiplos de 5 en la triangular sueprior"
		Escribir "4) Menor valor de las filas pares"
		Escribir "5) Mayor valor de las columnas impares"
		Escribir "6) Intercambiar filas pares con filas impares"
		Leer opc;
		Segun opc Hacer
			1:
				Escribir "La suma de la triangular superior es: ", suma_matriz(W,N,M);
				Leer opc;
			2:
				Escribir "El promedio de la triangular inferior es: ", prom_matriz(W,N,M);
				Leer opc;

			3: 
				Escribir "La cantidad de multiplos de 5 en la triangular superior es: ", cant_mul_5(W,N,M);
				Leer opc;

			4: 
				Escribir "El menor valor de las filas pares es: ", fila_par(W,N,M);
				Leer opc;

			5:
				Escribir "El mayor valor de las columnas impares es: ", col_impar(W,N,M);
				Leer opc;

			6:
				intercambio(W,N,M);
				Leer opc;
			De Otro Modo:
				Escribir "Vuelve a ingresar la opcion"
				Leer opc;
		FinSegun
		
	FinMientras
	Escribir "Fin del Menu"

FinProceso
