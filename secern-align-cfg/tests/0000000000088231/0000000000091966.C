#include <stdio.h>
#include <string.h>

void check(char N[]){
    int n = strlen(N) - 1;
    char A[n+1], B[n+1];
    int s = 0;
    char f = 0;

	for(int k = 0; k < n; k++){
        if(N[k] == '4'){
            A[k] = '3';
            B[k-s] = '1';
            f = 1;
        } else {
            A[k] = N[k];
            if(f){
                B[k-s] = '0';
            } else {
                s++;
            }
        }
    }

    A[n] = '\0';
    B[n-s] = '\0';
    printf("%s %s", A, B);
}

int main(void){
	int T;
	scanf("%d\n", &T);
	
	for(int k = 1; k <= T; k++){
		char N[101];
		fgets(N, 100, stdin);

		printf("Case #%d: ", k);

		check(N);

		printf("\n");
	}

	return 0;
}

