#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int num, ft = 1;
	printf("Ingrese un numero: ");
	scanf("%d", &num);
	for(int i = 0; i < num; i++) {	
		ft = ft * (num - i);
	}
	printf("El factorial del numero %d es: %d", num, ft);
	return 0;
}