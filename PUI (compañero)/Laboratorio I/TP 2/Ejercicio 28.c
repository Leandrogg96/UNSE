#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int voc_a = 0, voc_e = 0, voc_i = 0, voc_o = 0, voc_u = 0, b = 0;
	char vocal;
	for (int i = 0; i < 20; i++) {
		printf("Ingrese una vocal: ");
		scanf("%c", &vocal);
		getchar();
		switch (tolower(vocal)) {
			case 'a':
				voc_a++;
				b = 1;
				break;
			case 'e':
				voc_e++;
				b = 1;
				break;
			case 'i':
				voc_i++;
				b = 1;
			case 'o':
				voc_o++;
				b = 1;
				break;
			case 'u':
				voc_u++;
				b = 1;
				break;
		}
	}
	if (b == 0) {
		printf("No se ingresaron vocales");
	} else {
		printf("Cantidad de vocales con 'a': %d \n", voc_a);
		printf("Cantidad de vocales con 'e': %d \n", voc_e);
		printf("Cantidad de vocales con 'i': %d \n", voc_i);
		printf("Cantidad de vocales con 'o': %d \n", voc_o);
		printf("Cantidad de vocales con 'u': %d \n", voc_u);

	}
	return 0;
}