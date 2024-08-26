#include <stdio.h>
#include <stdlib.h>

void desplazarDerecha(int arr[], int n, int z) {
    // Calcula la cantidad real de desplazamiento (z % n).
    z = z % n;

    // No es necesario hacer nada si z es 0, el vector permance sin cambios.
    if (z == 0) {
        return;
    }

    int *temp = (int * ) malloc (z * sizeof(int)); // Array temporal para almacenar los elementos desplazados
    if (temp == NULL) {
        printf("Error: no se pudo asignar memoria.\n");
        exit(1);
    }

    // Copia los ultimos 'z' elementos al array temporal
    for (int i = 0; i < z; i++) {
        temp[i] = arr[n - z + i];
    }

    // Desplaza los elementos restantes hacia la derecha
    for (int i = n - 1; i >= z; i--) {
        arr[i] = arr[i - z];
    }

    // Copia los elementos del array temporal al principio del arreglo original
    for (int i = 0; i < z; i++) {
        arr[i] = temp[i];
    }

    free(temp); // Libera la memoria del array temporal
}

int main() {
    int n;

    printf("Ingrese la cantidad de elementos en el arreglo: ");
    scanf("%d", &n);

    int arreglo[n];

    printf("Ingrese los elementos del arreglo:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arreglo[i]);
    }

    int z;
    printf("Ingrese el numero de posiciones para desplazar hacia la derecha: ");
    scanf("%d", &z);

    desplazarDerecha(arreglo, n, z);
    
	printf("-------------------------------------------------------------------------------\n");
    
	printf("Arreglo despues del desplazamiento:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arreglo[i]);
    }
    printf("\n");

    return 0;
}