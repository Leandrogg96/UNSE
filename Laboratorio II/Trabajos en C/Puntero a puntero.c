#include <stdio.h>

int main () {
	
	int i;
	int *ptrToi;
	int **ptrToPtrToi;
	
	ptrToPtrToi = &ptrToi;
	ptrToi = &i;

	printf("-------------------------------------------------------------------------------------------------------\n");
	printf("Inicialmente, las variables: 'i', 'ptrToi', 'ptrToPtrToi', tiene como contenido los siguientes valores: \n");
	printf("La variable 'i' almacena: %d.", i);
	printf("\nLa variable 'ptrToi' almacena: %d.", *ptrToi);
	printf("\nLa variable 'ptrToPtrToi' almacena: %d.", **ptrToPtrToi);
	
	i = 10;
	*ptrToi = 20;
	**ptrToPtrToi = 30;
	printf("\n-------------------------------------------------------------------------------------------------------");
	printf("\nLuego de las asignaciones fijadas, las variables tienen como contenido los siguientes valores: \n");
	printf("La variable 'i' almacena: %d.", i);
	printf("\nLa variable 'ptrToi' almacena: %d.", *ptrToi);
	printf("\nLa variable 'ptrToPtrToi' almacena: %d.", **ptrToPtrToi);
	return 0;
	
}