#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int main(void)
{
    char vectorChar[] = {"vector de caracteres"};
    int longitud=0;
    int contChar=0;
    int contVoc=0;
    int contCons=0;
    int contEspacio=0;
    char caracter;
    longitud = strlen(vectorChar);
    printf("Ingrese el caracter a buscar: ");
    caracter = getchar();

    int i=0;
    for(i=0;i<longitud;i++){
        if(vectorChar[i]==caracter){
            contChar++;
        }
    }
    for(i=0;i<longitud;i++){
        switch (vectorChar[i])
        {
        case 'a':
            contVoc++;
            break;
        case 'e':
            contVoc++;
            break;
        case 'i':
            contVoc++;
            break;
        case 'o':
            contVoc++;
            break;
        case 'u':
            contVoc++;
            break;
        case ' ':
            contEspacio++;
            break;
        default:

            break;
        }
    }

    printf("La cantidad de caracteres encontrados es: %d",contChar);

    printf("\nLa cantidad de vocales es: %d",contVoc);
    printf("\nLa cantidad de consonantes es: %d",(longitud-contVoc-contEspacio));
}