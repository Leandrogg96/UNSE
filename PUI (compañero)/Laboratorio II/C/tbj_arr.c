#include <stdio.h>
#include <stdlib.h>

int main(int argc, char argv[]) {
	//Inicializacion de variables
	int num;
	int suma,suma2,suma3;
	
	//Asignacion de variables
	suma = 0;
	suma2 = 0;
	suma3 = 0;
		
	
	scanf("%d",&num);
	printf("1) %d",num);
	suma += num;
	if(num<30) {
		while(num != 1) {
			if(num %2 == 0) {
				num = num/2;
				printf(" %d",num);
				suma += num;
			} else {
				num = (3 * num)+1;
				printf( " %d",num);
				suma += num;
			}
		}
	} // if(numero<30)
	printf("\n");
	scanf("%d",&num);
	printf("2) %d",num);
	suma2 += num;
	if(num < 30) {
		while(num != 1) {
			if(num %2 == 0) {
				num =num / 2;
				printf(" %d",num);
				suma2 += num;
			} else {
				num = (3 * num) + 1;
				printf( " %d",num);
				suma2 += num;
			}
		}
	}
	printf("\n");
	scanf("%d",&num);
	printf("3) %d",num);
	suma3 += num;
	if(num < 30) {
		while(num != 1) {
			if(num %2 == 0) {
				num = num / 2;
				printf(" %d",num);
				suma3 += num;
			} else {
				num = (3 * num) + 1;
				printf( " %d",num);
				suma3 += num;
			}
		}
	}
	printf("\n");
	printf("Las sumas resultantes de las sucesiones son... %d - %d - %d",suma,suma3,suma2);
	return 0;
}