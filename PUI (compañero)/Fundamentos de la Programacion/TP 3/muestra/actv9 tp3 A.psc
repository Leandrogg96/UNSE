//descripcion: reotrna la cadntidad de numeros de tres digitos y multiplos de 4 
//datos: N numeros - tipo de dato entero
//resultado: mostrar la cantidad de numeros multiplos de 4 y de tres digitos

Funcion resultado = F(V,dim)
	resultado, i, mult4, cantN Es Entero
	cantN = 0
	para i = 1 hasta dim
		mult4 = trunc(V(i)/4)*4
		si V(i) = mult4 y V(i) > 99 y V(i) <= 999
			cantN = cantN + 1
		FinSi
	FinPara
	resultado = cantN
FinFuncion

Algoritmo sin_titulo
	Vector, Cant3_y_M4, N Es Entero
	Dimension Vector(3)
	Vector[1] = 123 ; Vector[2] = 444 ; Vector[3] = 24
	N = 3
	Cant3_y_M4 = F(Vector,N)
	
	Mostrar " La cantidad de numeros de tres digitos y multiplos de 4 es: ", Cant3_y_M4
	
FinAlgoritmo
