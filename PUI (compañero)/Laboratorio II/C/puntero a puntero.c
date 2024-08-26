#include <stdio.h>

int main()
{
	int i;
	int *ptrToi; /* Puntero a entero */
	int **ptrToPtrToi; /* Puntero a puntero a entero */
	
	ptrToPtrToi = &ptrToi; /* Puntero contiene la direccion de puntero */
	ptrToi = &i; /* Puntero contiene la direccion de entero */
	
	i = 10;
	*ptrToi = 20;
	**ptrToPtrToi = 30;
	
	printf("La variable i almacena %d",i);
	return 0;
}