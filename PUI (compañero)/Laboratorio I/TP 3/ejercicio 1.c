// Con el mayor de 12 pares de números generar el vector PARES. Mostrar el vector resultante
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int PARES[12],i;
	for(i = 0; i < 12; i++){
		printf("Ingresar un numero par: ");
		scanf("%d",&PARES[i]);
		while(PARES[i] % 2 != 0) {
			printf("Vuelva a ingresar un numero que sea par: ");
			scanf("%d",&PARES[i]);
		}
	}
	for(i = 0; i < 12; i++){
		printf("P[%d]: %d ",i, PARES[i]);
	}
	return 0;
}