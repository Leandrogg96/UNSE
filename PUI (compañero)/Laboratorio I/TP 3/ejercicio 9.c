/*
Dado el vector NÚMEROS (20), generar el arreglo POSITIVOS_NULOS con todos aquellos números mayores o
iguales a cero; y un arreglo NEGATIVOS con todos los elementos negativos. Mostrar los tres arreglos, así también
como la cantidad de elementos de los dos vectores generados.
*/

#include <stdio.h>
#include <stdlib.h>

#define N 20
int main(int argc, char *argv[]) {
	int NUMEROS[N] = {-55,-40,-30,-25,-5,-4,-1,0,1,2,5,12,15,16,17,18,20,22,25,30};
	int i,cp = 0, cn = 0;
	int POSITIVOS_NULOS[N], NEGATIVOS[N];
	for (i = 0; i < N; i++) {
		if(NUMEROS[i] >= 0) {
			POSITIVOS_NULOS[cp] = NUMEROS[i];
			cp++;
		} else {
			NEGATIVOS[cn] = NUMEROS[i];
			cn++;
		}
	}
	for(i = 0; i < N; i++){
		printf("NUMEROS[%d]: %d \n",i,NUMEROS[i]);
	}
	printf("\n\n");
	for(i = 0; i < cp; i++){
		printf("POSITIVOS_NULOS[%d]: %d\n",i,POSITIVOS_NULOS[i]);
	}
	
	printf("Cantidad de Positivos Nulos: %d", cp);
	printf("\n\n");
	for(i = 0; i < cn; i++){
		printf("NEGATIVOS[%d]: %d \n",i,NEGATIVOS[i]);
	}
	printf("Cantidad de Negativos: %d", cn);
	return 0;
}