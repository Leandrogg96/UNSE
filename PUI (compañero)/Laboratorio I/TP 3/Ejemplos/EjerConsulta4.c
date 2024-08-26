#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){

    char a[30], matriz[2][50];
    int i=0,j;

    while(i<2){
        printf("Ingrese una cadena: \n");
        gets(a);
        strcpy(matriz[i],a);
        i++;

    }
    i=0;
    printf("Resultado: \n");
    for(i=0;i<2;i++){
            printf("%s \n",matriz[i]);
        }

    return 0;
}