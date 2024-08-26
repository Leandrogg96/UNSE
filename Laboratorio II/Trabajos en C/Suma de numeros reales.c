#include <stdio.h>

int main() {

float num1, num2;

printf("Ingresa dos numeros reales: \n");
scanf(" %f %f", &num1, &num2);
	
printf("Los numeros son: \n %.2f \n %.2f \n", num1, num2);


int suma;
int num_1, num_2;

num_1 = (int)num1;
num_2 = (int)num2;

suma = num_1 + num_2;

printf("\nEl resultado de la suma entera de los numeros ingresados es: %d", suma);

return 0;

}