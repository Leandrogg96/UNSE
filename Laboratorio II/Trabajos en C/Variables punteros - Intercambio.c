#include <stdio.h>

int main() {
	
	// I declare variables:
	int x1, x2, aux; 
	int *p1, *p2, *pAux; 
	
	// I initialize variables:
	printf("Input a integer value: ");
	scanf("%d", &x1);
	printf("\nInput another integer value: ");
	scanf("%d", &x2);
	
	aux = 0;
	
	printf("----------------------------------------------------------------------");
	printf("\nThe values of your variables are:\n X1 = %d | X2 = %d", x1, x2);
	
	// I assign the memory adress to the pointers:
	p1 = &x1;
	p2 = &x2;
	pAux = &aux;
	
	// I make the exchange:
	
	*pAux = *p1; 
	*p1 = *p2;
	*p2 = *pAux;
	
	// I show the result on the screen:
	
	printf("\nNow, the values of your variables are:\n X1 = %d | X2 = %d", x1, x2);
	
	return 0;
}