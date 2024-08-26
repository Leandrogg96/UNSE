Algoritmo ElimnaCodLibMatriz
	//Dada la matriz UNSE (Nx5) con los datos de los libros de la Biblioteca de una Universidad:  
	//Código de libro, Código de autor, Número de ejemplares disponibles, Año de edición y Precio;  
	//Realiza la eliminacion de un libro ingresado por teclado. 
	Dimensión A[10,5]
	A[0,0]=15; A[0,1]=4; A[0,2]=90; A[0,3]=2000; A[0,4]=200
	A[1,0]=25; A[1,1]=8; A[1,2]=50; A[1,3]=1990; A[1,4]=230
	A[2,0]=33; A[2,1]=5; A[2,2]=30; A[2,3]=2002; A[2,4]=340
	N=3
	Escribir "La matriz original es :"
	Para I<-0 Hasta N-1 Con Paso 1 Hacer
		Para j<-0 Hasta 4 Con Paso 1 Hacer
			Escribir A[I,j] sin saltar, "  "
		Fin Para
		Escribir "  "
	Fin Para
	Escribir "La dimensión Actual es", N
	I = 0
	Escribir "Ingrese el código de libro a eliminar"
	Leer NUM
	MIENTRAS  (I <= N-1)
		SI (NUM = A[I,0])
			ENTONCES 
			J=I
			MIENTRAS  (J<N)
				Para col<-0 Hasta 4 Con Paso 1 Hacer
					A[J,col] = A[J+1,col]
				Fin Para
				J = J+1
			FIN MIENTRAS
			N=N-1
		SiNo
			I=I+1
		FIN SI
	FIN MIENTRAS
	Escribir "La dimensión Actual es ", N
	Escribir "La matriz AHORA es :"
	Para I<-0 Hasta N-1 Con Paso 1 Hacer
		Para j<-0 Hasta 4 Con Paso 1 Hacer
			Escribir A[I,j] sin saltar, "  "
		Fin Para
		Escribir "  "
	Fin Para
	
FinAlgoritmo
