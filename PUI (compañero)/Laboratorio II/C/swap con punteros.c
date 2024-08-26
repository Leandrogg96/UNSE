#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 7
int main(int argc, char *argv[]) {

	//Inicializacion de variables
	char cadena[N];
	float flotante;
	int entero,decimal,num;

	//Ingreso de valor al string
	printf("Ingresar un numero flotante: ");
	gets(cadena);
	if((cadena[3] != '.') || (cadena[6] != '\0')) {
		printf("ERROR DE CADENA\n");
	}
	printf("%s\n",cadena); //Se imprime el valor que contiene la cadena
	flotante = atof(cadena); // Convierte la cadena a flotante
	
	entero = (int)flotante;	 //Convierte a entero
	decimal = (flotante - entero) * 1000;
	printf("%d\n",decimal);

	num = decimal % 10;
	decimal /= 10;
	//Redondea la variable num
	if((num > 5)&& (num < 10)) {
		decimal++;
	}
	flotante = (float)entero + ((float)decimal / 100);
	printf("%.2f\n",flotante);


	return 0;
}