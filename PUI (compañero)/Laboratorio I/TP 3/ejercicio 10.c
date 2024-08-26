/*
Dado el vector NÚMEROS (N) ordenado en forma ascendente, indicar si un determinado valor se encuentra en el
vector y en qué posición. En caso de no encontrarlo mostrar el mensaje “no existe”. En el vector no hay números
repetidos.
*/
#include <stdio.h>
#include <stdlib.h>

#define N 4

int main(int argc, char *argv[]) {
	int i, NUMEROS[N]={3,4,5,6}, b = 0,num;
	printf("Ingrese el numero a buscar: ");
	scanf("%d",&num);
	for (i = 0; i < N && b == 0; i++) {
		if (NUMEROS[i] == num) 
			b = 1;
	}
	if(b == 0) printf("\n El valor no existe");
	else printf("\n El valor existe");
	return 0;
}