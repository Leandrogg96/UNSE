Algoritmo tp1ej11
	definir cont1, cont2, codigo, dni, sueldo, antiguedad, cod_menorPromSueldo, cant_empleadosE, menor_sueldo Como Entero
	cont<- 0
	Mientras cont1 <3 Hacer
		cont2<-1
		codigo<-0 
		dni<-0
		sueldo<-0
		antiguedad<-0
		cod_menorPromSueldo<-0
		cant_empleadosE<-0
		menor_sueldo<-0
		Repetir
			escribir "ingresar el código de sucursal, dni, sueldo y años de antiguedad" 
			leer codigo, dni, sueldo, antiguedad 
			Si menor_sueldo = 0 Entonces
				menor_sueldo<-sueldo 
			SiNo
				Si sueldo < menor_sueldo  Entonces
					menor_sueldo <- sueldo 
					cod_menorPromSueldo<- codigo 
				Fin Si
			Fin Si
			Si codigo = 1 o codigo = 2 Entonces
				Si antiguedad >= 15 y antiguedad < 24 Entonces
					cant_empleadosE <- cant_empleadosE+1
				Fin Si
			FinSi 
		Hasta Que cont2>5
		cont1<-cont1+1
	Fin Mientras
	Escribir "El código con el menor promedio de sueldo es el número ", cod_menorPromSueldo 
	Escribir "La cantidad de empleados que cumplen los requisitos especiales es de: ", cant_empleadosE
FinAlgoritmo
