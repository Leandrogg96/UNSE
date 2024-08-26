/*
Dado el vector ELEM (X) permutarlo de la siguiente manera: ELEM (1) con ELEM (x), ELEM (2) con 
ELEM (x-1), ELEM (3) con ELEM (X-2) y así sucesivamente. Mostrar el vector con los elementos permutados
*/
#include <stdio.h>
#include <stdlib.h>

#define X 10

int main(int argc, char *argv[]) {
	int i, ELEM[X] = {1,2,3,4,5,6,7,8,9,10};
	for(i = 0; i < X; i++) {
		ELEM[X - 1 - i] = ELEM[i];
	}
	for(i = 0; i < 10; i++) {
		printf("ELEM[%d]: %d ", i, ELEM[i]);
	}
	return 0;
}