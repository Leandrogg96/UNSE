#include <stdio.h>


int main() {


int dim;

printf("Ingresa la cantidad de elementos a evaluar: ");
scanf("%d", &dim);

int i;
int a[dim];
int suma = 0;    



for( i = 0; i < dim ; i = i + 1) { 
    printf("Ingresa un valor: ");
    scanf("%d", &a[i]);
}
for( i = 0; i < dim ; i = i + 1) {          
    if((a[i] % 2) != 0 && (a[i] > 50 && a[i] < 300))
        // printf("%d\n", a[i]); verifico que solo los numeros impares mayores a 50 ^ menores a 300 ingresen.
        suma = suma + a[i];          
}

printf("\nLa suma de los valores enteros del vector es igual a %d\n", suma);

return 0;
}