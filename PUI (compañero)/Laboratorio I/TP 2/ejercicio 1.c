/*

Ingresar un numero entero,determinar si es par o impar; 
y mostrar el mensaje "El número xxx es par." o bien "El número xxx es impar“,según corresponda

*/
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num, resto;
	printf("Ingrese un numero:");
	scanf("%d",&num);

	resto = num % 2;
	if(resto == 0) {
		printf("El numero: %d es par", num);
	}	else {
		printf("El numero: %d es impar", num);
	}

	return 0;
}