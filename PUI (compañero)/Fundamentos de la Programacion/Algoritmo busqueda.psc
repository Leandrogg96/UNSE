Algoritmo algoritmo_busqueda
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
	Leer Num
	i<-0
	Mientras (i<N) Hacer
		Si (Vector[i] = Num) Entonces
			Escribir "Se encontro el numero en la posición: ", i
		FinSi
		i<-i+1
	FinMientras
FinAlgoritmo
