#include <stdio.h>

int main() {
    int suc_dim, art_dim;

    printf("Ingresa la cantidad de sucursales: ");
    scanf("%d", &suc_dim);

    printf("Ingresa la cantidad de articulos: ");
    scanf("%d", &art_dim);

    int suc[suc_dim][art_dim];
    float precio[art_dim], aux_suc[suc_dim] = {0}, aux_art[art_dim] = {0}, total = 0;

    printf("\nIngresa los precios de los articulos: \n");
    for (int i=0; i<art_dim; i++){
        printf("\tArticulo %d: ", i+1);
        scanf("%f", &precio[i]);
    }

    for (int i=0; i<suc_dim; i++) {
        printf("\nIngresa la cantidad de articulos vendidos en la sucursal %d:\n", i+1);
        for (int j=0; j<art_dim; j++) {
            printf("\tIngresa la cantidad de articulos %d: ", j+1);
            scanf("%d", &suc[i][j]);
            aux_suc[i] += suc[i][j] * precio[j];
            aux_art[j] += suc[i][j];
        }
    }
    
    printf("-----------------------------------------------------------------------------");

    for (int i=0; i<suc_dim; i++) {
        printf("\nLa cantidad de articulos vendidos en la sucursal %d es: \n", i+1);
        total += aux_suc[i];
        for (int j=0; j<art_dim; j++) {
            printf("\tArticulo %d: %d\n", j+1, suc[i][j]);
        }
    }
    
    printf("-----------------------------------------------------------------------------");
    printf("\nEl total recaudado es: %.2f\n", total);
    printf("\nEl total de articulos vendidos en todas las sucursales es: \n");
    for (int i=0; i<art_dim; i++) {
        printf("\tArticulo %d: %d\n", i+1, (int)aux_art[i]);
    }
    
  	printf("-----------------------------------------------------------------------------");
 
    printf("\nEl total recaudado por sucursal es: \n");
    for (int i=0; i<suc_dim; i++) {
        printf("\tSucursal %d: %.2f\n", i+1, aux_suc[i]);
    }

    return 0;
    
}