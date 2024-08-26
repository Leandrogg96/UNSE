/*
Si el vector NÚMEROS tiene elementos repetidos, modificar el ejercicio del ítem anterior para que cuente y muestre
la cantidad de veces que el vector contiene un determinado valor.
*/
#include <stdio.h>
#include <stdlib.h>

#define N 4

int main(int argc, char *argv[]) {
		int i, NUMEROS[N]={3,4,4,6}, c = 0,num;
	printf("Ingrese el numero a buscar: ");
	scanf("%d",&num);
	for (i = 0; i < N; i++) {
		if (NUMEROS[i] == num) 
			c++;
	}
	if(c == 0) printf("\n El valor no existe");
	else printf("\n El valor existe y aparece %d", c);
	return 0;
}