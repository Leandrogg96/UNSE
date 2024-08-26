#include <stdio.h>
#include <stdlib.h>

#define N 3

int main(int argc, char *argv[]) {
	int D[N][N];
	int i,j,c = 1;
	for (i = 0; i < N; i++) { // Recorrer Fila
		for(j = 0; j < N; j++) { // Recorrer Columna
			D[i][j] = c++;
		}
	}
	for (i = 0; i < N; i++) {
		for(j = 0; j < N; j++) {
			printf("%d \t",D[i][j]);	
		}
		printf("\n");
	}
	return 0;
}