/*
	Gabriel Ignacio Palazzi
*/
#include <stdio.h>

//Estructura de Fecha
struct Fecha {
	int dia;
	int mes;
	int anio;
};

void leerFecha(int *dia, int *mes, int *year); // Funcion para ingresar la fecha y tiene como argumentos el dia, mes y anio
int validarFecha (int dia, int mes, int year); // Funcion para validar si la fecha ingresada es correcta y tiene como argumentos el dia, mes y anio
int anioBisiesto(int year); // Funcion para comprobar si el anio es bisiesto y recibe como argumento el anio
int calcularDias(int dia, int mes, int year); //Calcula los dias transcurricos desde el 1 de Entero del 2006 hasta el ingresado


int main(int argc, char *argv[]) {
	struct Fecha fecha; // Inicializo la estructura Fecha y la guardo en la variable fecha
	struct Fecha *ptr; // Inicializo la estructura Fecha y la guardo en un puntero "ptr"
	ptr = &fecha; // Guardo en el puntero la direccion de la variable fecha que contiene la estructura Fecha
	leerFecha(&ptr->dia, &ptr->mes, &ptr->anio);
	return 0;
}
int anioBisiesto(int year) {
	//Inicializacion de variables
	int bisiesto;
	//Asignacion de variables
	bisiesto = 0;

	if(((year % 4) == 0) && ((year % 100) != 0)) { // Compruebo si el anio es multiplo de 4 pero no divisible entre 100 para ver si es un anio bisiesto
		bisiesto = 1;
	} else if(((year % 4) == 0) && ((year % 100) == 0) && ((year % 400) == 0)) { // Compruebo si el anio es multiplo de 4 y divisible de 100 y 400 para ver si es un anio bisiesto
		bisiesto = 1;
	}
	return bisiesto; // Retorno el valor de la variable "bisiesto"
}

int validarFecha (int dia, int mes, int year) {
	//Inicializacion de variables
	int valido, dia_mes;
	if (year < 2006) { // Comprueba que el anio sea mayor a 2005
		printf("La fecha introducidad debe ser posterior al 1 de Enero de 2006\n");
		valido = 0;
	} else if(mes < 1 || mes > 12) { // Comprueba que el mes ingresado sea correcto
		printf("El mes introducido no es valido\n");
		valido = 0;
	} else {
		switch (mes) {
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
				dia_mes = 31; // Asigna los dias que contiene el mes
				break;
			case 4:
			case 6:
			case 9:
			case 11:
				dia_mes = 30; // Asigna los dias que contiene el mes
				break;
			case 2:
				if(anioBisiesto(year)) { // Llamo a la funcion anioBisiesto para ver si el anio ingresado es bisiesto
					dia_mes = 29; // Asigna los dias que contiene el mes
				} else {
					dia_mes = 28; // Asigna los dias que contiene el mes
				}
				break;
		}
		if((dia < 0) || (dia > dia_mes)) { // Comprueba si el dia ingresado es correcto
			printf("El dia introducido no es valido\n");
			valido = 0;
		}
	}
	return valido;
}
int calcularDias(int dia, int mes, int year) {
	//Inicializacion de variables
	int i, dias;
	//Asignacion de variables
	dias = 0; // Variable donde se guardan los dias que se van sumando
	for(i = 2006; i < year; i++) { //Ciclo que recorre desde 2006 hasta el ingresado mientras se va guardando los dias que tiene cada anio en la variable "dios"
		if(anioBisiesto(i)) { // Llamo a la funcion anioBisiesto para ver si el anio ingresado es bisiesto
			dias += 366;
		} else {
			dias += 365;
		}
	}
	for(i = 1; i < mes; i++) { //Ciclo que recorre desde Enero hasta el ingresado
		switch (i) {
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
				dias += 31; // Suma a la variables dias, los dias que contiene el mes
				break;
			case 4:
			case 6:
			case 9:
			case 11:
				dias += 30; // Suma a la variables dias, los dias que contiene el mes
				break;
			case 2:
				if(anioBisiesto(year)) { // Llamo a la funcion anioBisiesto para ver si el anio ingresado es bisiesto
					dias += 29; // Suma a la variables dias, los dias que contiene el mes
				} else {
					dias += 28; // Suma a la variables dias, los dias que contiene el mes
				}
				break;
		}
	}
	dias += dia; // Suma a la variables "dias", los dias que ingreso el usuario
	return dias;
}

void leerFecha(int *dia, int *mes, int *year) {
	//Inicializacion de variables
	int valido, dia_semana;
	do {
		printf("Ingrese el dia (1 - 31): ");
		scanf("%d", dia);
		fflush(stdin);

		printf("Ingrese el mes (1 - 12): ");
		scanf("%d", mes);
		fflush(stdin);

		printf("Ingrese el anio (mayor a 2006): ");
		scanf("%d", year);
		fflush(stdin);

		//printf("%d / %d / %d\n", *dia, *mes, *year);
		valido = validarFecha(*dia, *mes, *year); //Llamo a la funcioon validarFecha y la guardo en la variable "valido"
	} while(valido);
	printf("%d / %d / %d\n", *dia, *mes, *year); //Muestra la fecha ingresado despues de comprobar que sea una fecha correcta
	dia_semana = calcularDias(*dia, *mes, *year) % 7; // Calcula el numero del dia de la semana
	switch (dia_semana) {
		case 1:
		case 0:
			printf("Domingo ");
			break;
		case 2:
			printf("Lunes ");
			break;
		case 3:
			printf("Martes ");
			break;
		case 4:
			printf("Miercoles ");
			break;
		case 5:
			printf("Jueves ");
			break;
		case 6:
			printf("Viernes ");
			break;
		case 7:
			printf("Sabado ");
			break;
	}
	printf("%d de ", *dia);
	switch(*mes) {
		case 1:
			printf("Enero ");
			break;
		case 2:
			printf("Febrero ");
			break;
		case 3:
			printf("Marzo ");
			break;
		case 4:
			printf("Abril ");
			break;
		case 5:
			printf("Mayo ");
			break;
		case 6:
			printf("Junio ");
			break;
		case 7:
			printf("Julio ");
			break;
		case 8:
			printf("Agosto ");
			break;
		case 9:
			printf("Septiembre ");
			break;
		case 10:
			printf("Octubre ");
			break;
		case 11:
			printf("Noviembre ");
			break;
		case 12:
			printf("Diciembre ");
			break;
	}
	printf("del %d", *year);

}
