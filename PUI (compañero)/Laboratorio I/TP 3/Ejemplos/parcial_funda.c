#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define M 10
#define N 3

int main(int argc, char *argv[]) {
	int i, k, h,j, existe, insertado;
	float s[M][4]={
		{10,1,10,1500},
		{30,2,10,200},
		{40,1,10,2500},
	};
	
	int p[M];
	int dimS = 3;
	int dimP = 0;
	
	float n[N][4]={
		{25,3,100,100},
		{50,3,100,100},
		{30,2,30,300},
	};
	
	for (i = 0; i < N; i++){
		existe = 0;
		k = 0;
		while (k < M && !existe){
			if (n[i][0] == s[k][0]){
				/*Actualizo cantidad y precio*/
				s[k][2] = s[k][2] + n[i][2];
				s[k][3] = n[i][3]*1.10f;  
				existe = 1;				
			} 
			else
				k++;			
		}
		
		if (!existe){
			/*Voy a Insertar*/
			insertado = 0;
			k = 0;
			while (k < dimS && !insertado){
				if (n[i][0] < s[k][0]){
				/*Desplazar y colocar el nuevo*/					
					for (h = dimS - 1;h >= k; h--){
						for (j = 0; j < 4; j++){
							s[h+1][j] = s[h][j];
						}
					}  
				    s[k][0] = n[i][0];
					s[k][1] = n[i][1];
					s[k][2] = n[i][2];
					s[k][3] = n[i][3]*1.10f; 
				    insertado = 1;
					dimS++;				
			    } 
			else
				k++;			
			}
			if (!insertado){
				s[k][0] = n[i][0];
				s[k][1] = n[i][1];
				s[k][2] = n[i][2];
				s[k][3] = n[i][3]*1.10f; 
				dimS++;
			}
		}
	}
	
	for (i = 0; i < dimS; i++){
		if (s[i][3] > 1000){
			p[dimP] = s[i][0]; 
			dimP++;
		}
	}
	
	printf("Fin del Programa\n");
	
	return 0;
}