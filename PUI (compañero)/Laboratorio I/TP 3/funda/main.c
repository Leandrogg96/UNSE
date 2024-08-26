#include <stdio.h>
#include <stdlib.h>

#define N 4
#define M 3
int main(int argc, char *argv[]) {
	float Nov[N][4]= {
		{4,4,4, 8.00},
		{5,2,3,10.20},
		{3,4,6,22.33},
		{6,3,2,10.56}
	}, S[M + 4][4] = {
		{1,2,4,10.30},
		{2,4,6,22.35},
		{3,5,7,30.33}
	};
	int i,j,k,z, dimS, dimSC, filS = M;
	for(i = 0; i < M; i++) {
		for(j = 0; j < 4; j++) {
			for(k = 0; k < N; k++) {
				for(z = 0; z < N; z++) {
					if(Nov[k][z] < S[i][j]) {
						for(dimS = M; dimS > i; dimS--) {
							for(dimSC = 0; dimSC < 4; dimSC++) {
								S[dimS + 1][dimSC] = S[dimS][dimSC];
							}

						}
						filS++;
						if(z == 4 && j == 4) {
							S[i][j] = Nov[k][z] * 0.1;
						} else {
							S[i][j] = Nov[k][z];
						}
						
					}
				}
			}
		}
	}
	for(i = 0; i < filS; i++) {
		for(j = 0; j < 4; j++) {
			printf("%.2f \t", S[i][j]);
		}
		printf("\n");
	}

	return 0;
}