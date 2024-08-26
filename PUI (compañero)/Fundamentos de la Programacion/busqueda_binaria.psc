Algoritmo busqueda_binaria //Busqueda binaria de orden menor a mayor"
	Escribir "Ingrese la cantidad de elementos del vector"
	Leer N
	Dimension Vector[N]
	i<-0
	Mientras (i<N) hacer
		Escribir "Ingrese un elemento del vector"
		Leer Vector[i]
		i<-i+1
	FinMientras	
	Escribir "Ingrese el número a buscar"
	Leer W
	P<-0
	M<-trunc((P+N)/2)
	Escribir M
	Mientras (P<N & W<>Vector[M]) Hacer
		Escribir Vector[M]
		Si (W<Vector[M]) Entonces
			N<-M-1
		SiNo
			P<-M+1
		FinSi
		M<-trunc((P+N)/2)
		Escribir M
	FinMientras
	
	Si(W = Vector[M]) Entonces
		Escribir "El elemento esta en la posición: ", M
	SiNo
		Escribir "El elemento no esta en el Vector"
	FinSi	
FinAlgoritmo
