#include <stdio.h>
#include <stdlib.h>

#define n 4
int main () {
	float matriz [n][n]= {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12},
		{13,14,15,16}
	};
	int i=0, j=0;
	int M=n;
	float x;
	printf ("Ingresa un valor: \n");
	scanf ("%f",&x);
	while (i<n) {

		if (x == matriz[i][2]) {
			for(j = i; j < n -1; j++) {
				for(int k = 0; k < n; k++) {
					matriz[j][k] = matriz[j+1][k];
				}
			}
			M--;

		} else {
			i++;

		}


	}
	i=0;
	while (i<M) {
		j=0;
		while (j<n) {
			printf ("\t %.0f", matriz[i][j]);
			j++;
		}
		i++;
		printf ("\n");
	}

	return 0;
}