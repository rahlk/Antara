#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

//GENERAL
int T, t, L, l;
char N[101],A[101],B[101];
int lb;

int main(int argc, char** argv) {
	scanf("%d", &T);

	//casos
	for (t = 1; t <= T; t++) {
		//leo cada caso ****
		scanf("%s", N);
		int L=strlen(N);
		
		lb=0;
		for (l = 0; l < L; l++) {
			if(N[l]=='4'){
				A[l]='3';
				B[lb++]='1';
			}else{
				A[l]=N[l];
				if (lb>0){
					B[lb++]='0';
				}
			}
		}
		A[l]=0;
		B[lb]=0;
		printf("Case #%d: %s %s\n", t,A,B);
	} //siguiente caso

	return (EXIT_SUCCESS);

}