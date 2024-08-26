/*
Dados dos arreglos A (20) y B (20) ordenados en forma ascendente, generar un vector C con los elementos de
ambos arreglos y que quede ordenado. No usar para la solución ningún método de ordenación. Mostrar los tres arreglos
*/
#include <stdio.h>
#include <stdlib.h>

#define N 20

int main(int argc, char *argv[]) {
	int A[N] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20},B[N] = {21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40},C[N*2];
	int i, j, b = 0,c1 = 0,c2 = 0;

	for(i = 0; i < N * 2; i++) {
		b = 0;
		for(j = 0; j < N && b == 0; j++) {
			if(A[c1] <= B[c2] && C[i] <) {
				C[i] = A[c1];
				b = 1;
				c1++;
			} else {
				C[i] = B[c2];
				b = 1;
				c2++;
			}
		}
	}

	printf("\n");
	for (i = 0; i < N * 2; i++) {
		printf("C[%d]: %d\n", i, C[i]);
	}

	return 0;
}