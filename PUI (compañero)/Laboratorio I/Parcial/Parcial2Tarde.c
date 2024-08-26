#include <stdio.h>
#include <stdlib.h>
#define M 7

int main(int argc, char *argv[]) {
    float C[M][5];
    float Mujeres[M];
    int i,j;
    float edad;
    //Punto A
    printf("cargue la matriz C");
    for(i = 0;i < M;i++){
        printf("\nIngrese el cuil:");
        scanf("%f",&C[i][0]);
        printf("\nIngrese el sexo:");
        scanf("%f",&C[i][1]);
        printf("\nIngrese el anio de nacimiento:");
        scanf("%f",&C[i][2]);
        printf("\nIngrese el sueldo mensual:");
        scanf("%f",&C[i][3]);
        //monto del impuesto
        C[i][4] = 0;
    }
    printf("**********Matriz Punto A**********\n");
    for(i= 0; i < M; i++){
        for(j = 0; j < 5; j++){
            printf("\t%.f", C[i][j]);
        }
        printf("\n");
    }

    //Punto B

    for(i = 0; i < M; i++){
        if(C[i][3] >= 90000.0 && C[i][3] <= 150000.0){
            C[i][4] = 5000 + ((C[i][3] - 90000)*0.05);
        }
        else if(C[i][3] > 150000.0 && C[i][3] <= 250000.0){
            C[i][4] = 15000 + ((C[i][3] - 150000)*0.1);
        }
        else if(C[i][3] > 250000.0){
            C[i][4] = 25000 + ((C[i][3] - 250000)*0.15);
        }        
    }

    printf("**********Matriz Punto B**********\n");
    for(i= 0; i < M; i++){
        for(j = 0; j < 5; j++){
            printf("\t%.f", C[i][j]);
        }
        printf("\n");
    }

    //Punto C

    printf("Ingrese la edad de las mujeres: ");
    scanf("%f",&edad);
    j = 0;
    for(i = 0;i < M;i++){
        if(C[i][1] == 2 && (2022.0 - C[i][2]) > edad){
            Mujeres[j] = C[i][3];
            j++;
        }
    }

    printf("**********Vector Punto C**********\n");
    for(i = 0; i < j; i++){
        printf("%.f\t", Mujeres[i]);
    }

    //Punto D
    int dim = j;
    int p=0;
    int auxil=0;
    for(i = 0;i < dim-1;i++){
        p=i;
        for(j = i+1; j < dim; j++){
            if(Mujeres[j] > Mujeres[p]){
                p=j;
            }
        }
        auxil = Mujeres[p];
        Mujeres[p] = Mujeres[i];
        Mujeres[i] = auxil;
    }

    printf("\n**********Vector Punto D**********\n");
    for(i = 0; i < dim; i++){
        printf("%.f\t", Mujeres[i]);
    }

    return 0;
}