#include <stdio.h>
#include <stdlib.h>

int main(int argc,char **argv){
	int largo;
	int ancho=15;
	int area;
	printf("Largo del area: ");
	scanf("%d", &largo);	
	area=largo*ancho;
	printf("El area es %d\n",area);
	return(EXIT_SUCCESS);
}