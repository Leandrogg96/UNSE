#include <stdio.h>
#include <string.h>
#define n 4
#define m 10
int main(void){
    char matrizChar[n][m];
    int i,j,aux;
    char auxChar;
    char string[30];
    for(i=0;i<n;i++){
        printf("\nIngrese una palabra (si es de 10 letras o mas se agradece): ");
        gets(string);
        aux=strlen(string);
        while(aux < m){
            printf("La palabra debe tener minimo 10 caracteres, reingrese: ");
            gets(string);
            aux=strlen(string);
        }
        for(j=0;j<m;j++){
            matrizChar[i][j] = string[j];
        }
    }
    printf("***********Matriz**********\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%c  ",matrizChar[i][j]);
        }
        printf("\n");
    }
    return 0;
}