#include <stdio.h>
int main(void){
    int i,j,p,aux,k;
    float Prom=0;
    int A[8][8] = {
        //{codCliente, prod, monto}
        {128,5,15000},
        {256,15,35000},
        {128,20,37560},
        {256,20,65151,},
        {128,15,32005},
        {128,6,162151},
        {111,12,215158},
        {111,32,215155}
    };

    printf("Matriz orignial: \n");
     for(i=0;i<8;i++){
        for(j=0;j<8;j++){
        printf(" %d ",A[i][j]);
        }
        printf("\n");
        }

    i=0;
    while(i<8){
        p=i;
        j=i+1;
        while(j<8){
            if(A[j][0] < A[p][0]){
            p=j;}
            j++;
        }
        k=0;
        while(k<8){
            aux = A[p][k];
            A[p][k] = A[i][k];
            A[i][k] = aux;
            k++;
        }
        i++;
    }

    printf("Matriz ordenada: \n");
        for(i=0;i<8;i++){
            for(j=0;j<8;j++){
            printf(" %d ",A[i][j]);
            }
            printf("\n");
        }

        printf("\n");

        i = 0;
        int auxa = 0;
        int suma = 0;
        while(i<8){
            if(auxa == A[i][0]){
                suma += A[i][2];
            }
            else{
                if(auxa != 0){
                    printf("%-5d \t %d \n",A[i-1][0],suma);
                    
                }
                suma=0;
                auxa=A[i][0];
                suma=A[i][2];
            }
            i++;
        }
    printf("%-5d \t %d",auxa,suma);


    return 0;
}