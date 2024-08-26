#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {

    int f=0;
    int c=0;
    int m[100][100];
    int n=0;
    int j=0;
    int k=0;
    int num=0;
    int l=0;

    printf("cantidad de filas \n");
    scanf("%d",&n);
    printf("\n");
    printf("cantidad de columnas \n");
    scanf("%d",&l);
    printf("\n");
    printf("carga de la matriz \n");
    while(f<n){
    c=0;
        while(c<l){
        scanf("%d",&m[f][c]);
        c=c+1;
    }
    f=f+1;
    }

    printf("\n");
    printf("ingrese un elemento que quiera insertar de acuerdo a la primara columna \n");
    scanf("%d",&num);
    f=0;
    int ban=0;
    while(f<n && ban == 0){
        if(m[f][0]>=num){
            j=n-1;
            while(j>=f){
                k=0;
                while(k<l){
                    m[j+1][k]=m[j][k];
                    k=k+1;
                }
            j=j-1;
            }

            k=1;
            m[f][0]=num;
            while(k<l){
                scanf("%d",&m[f][k]);
                k=k+1;
            }
            n=n+1;
            ban=1;
        }
        else{
        f=f+1;
        }
    }

    if(ban==0){
        m[f][0]=num;
        k=1;
        while(k<l){
            scanf("%d",&m[f][k]);
            k=k+1;
        }
    n=n+1;
    }

    printf("\n");
    printf("la matriz \n");
    printf("\n");
    f=0;
    while(f<n){
        c=0;
        while(c<l){
            printf("%d\t",m[f][c]);
            c=c+1;
        }
    printf("\n");
    f=f+1;
    }
    return 0;
}