//encontrarvalor
//descripcion: determina si existe un valor x y z dentro de la triangular superior
//datos de entrada: vector
//datos de salida: cant
SubProceso encontrarvalor(matriz Por Referencia, dim Por Valor)
	cant, fil, col Es Entero
	cant = 0
	para fil = 1 hasta dim
		para col = 1 hasta dim
			si fil < col
				si matriz(fil,col) = "x" o matriz(fil,col) = "z"
					cant = cant + 1
				FinSi
			FinSi
		FinPara
	FinPara
	Mostrar "La cantidad de vceces que aparece z y x en la triangular superior es: ", cant
FinSubProceso

Algoritmo sin_titulo
	N, F, C Es Entero
	B Es Caracter
	dimension B(3,3)
	B[1,1]= "v"; B[1,2]= "q"; B[1,3]= "z" 
	B[2,1]= "x"; B[2,2]= "i"; B[2,3]= "r"
	B[3,1]= "q"; B[3,2]= "e"; B[3,3]= "z"
	
	N = 3
	
	encontrarvalor(B,N)
FinAlgoritmo
