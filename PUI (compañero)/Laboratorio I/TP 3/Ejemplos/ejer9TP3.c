/* Dado el vector NÚMEROS (20), generar el arreglo POSITIVOS_NULOS
 con todos aquellos números mayores o iguales a cero; 
 y un arreglo NEGATIVOS con todos los elementos negativos.
 Mostrar los tres arreglos, así también como la cantidad de elementos de los dos vectores generados.
*/
#include <stdio.h>
#include <stdlib.h>

#define MAX_ELEMENTOS 5

int main(int argc, char *argv[]) {
	int numeros[MAX_ELEMENTOS]={-1,0,3,6,-8};
	int positivosNulos[MAX_ELEMENTOS];
	int negativos[MAX_ELEMENTOS];
	
	int i, dimPosNul=0, dimNeg=0;
	for (i=0; i< MAX_ELEMENTOS; i++) {
		if (numeros[i] >=0 ){
			positivosNulos[dimPosNul] = numeros[i];
			dimPosNul++; 
		} else { 
			negativos[dimNeg] = numeros[i];
			dimNeg++;
		}
	}
	
	printf("Vector Original\n");
	for (i=0; i< MAX_ELEMENTOS; i++)
		printf("[%d]",numeros[i]);
	printf("\n");

	printf("Vector Positivos Nulos\n");
	for (i=0; i< dimPosNul; i++)
		printf("[%d]",positivosNulos[i]);
	printf("\n");
	
	printf("Vector Negativos\n");
	for (i=0; i< dimNeg; i++)
		printf("[%d]",negativos[i]);
	printf("\n");
		
	return 0;
}