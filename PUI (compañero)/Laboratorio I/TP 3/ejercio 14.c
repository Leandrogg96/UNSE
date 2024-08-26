/*
Dado el vector D (N) que tiene capacidad máxima para 20 elementos, añadir un nuevo valor al final del mismo si
existe espacio disponible en el arreglo, caso contrario notificar dicha situación.
*/

#include <stdio.h>
#include <stdlib.h>

#define N 20
int main(int argc, char *argv[]) {
	int D[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
	int i = 19, existe = 0;
	while(i < N) {
		if(D[i] == '\0'){
			existe = 1;
		}
		i++;
	}	
	if(!existe){
		printf("Existe");
	}
	return 0;
}