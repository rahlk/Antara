#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

//GENERAL
int T, t, N, n;
char P[100000];

int main(int argc, char** argv) {
	scanf("%d", &T);

	//casos
	for (t = 1; t <= T; t++) {
		//leo cada caso ****
		scanf("%d", &N);
		scanf("%s", P);
		printf("Case #%d: ", t);
		for (n = 0; n < 2*N-2; n++) {
			if(P[n]=='E'){
				printf("S");
			}else{
				printf("E");
			}
		}
		printf("\n");
	} //siguiente caso

	return (EXIT_SUCCESS);

}