#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*
2
2 2
2 5
*/

void pylons(int R, int C, int i);
int cycle(int R, int C, int** A, int i, int j, int n);
void printArray(int R, int C, int** A);

int main(int argc, char *argv[]) {
    
	int T, R, C, isPoss;
	scanf("%d", &T);
	for (int i=0; i<T; i++) {
		scanf("%d %d", &R, &C);
		pylons(R, C, i);
	}
	
    return 0;
}

void pylons(int R,int C, int x) {
	int P = 0;
	int **A = (int **)calloc(R, sizeof(int *)); 
    for (int i=0; i<R; i++) {
         A[i] = (int *)calloc(C, sizeof(int));
    }
	for (int i=0; i<R; i++) {
		for (int j=0; j<C; j++) {
			if ( cycle(R,C,A, i, j, 1) ) {
				P = 1;
				break;
			}
		}
		if (P) {
			break;
		}
	}
	
	if (!P) {
		printf("Case #%d: IMPOSSIBLE\n", x+1);
		return;
	}
	printf("Case #%d: POSSIBLE\n", x+1);
	printArray(R, C, A);
}

int cycle(int R, int C, int** A, int i, int j, int n) {
	if (n == R * C) {
		return 1;
	}
	int **B = (int **)calloc(R, sizeof(int *)); 
    for (int i=0; i<R; i++) {
         B[i] = (int *)calloc(C, sizeof(int));
    }
	memcpy(B, A, sizeof(int)*R*C);
	B[i][j] = n;

	for (int x=0; x<R; x++) {
		if (x == i) {
			continue;
		}
		for (int y=0; y<C; y++) {
			if (y == j || x-y == i-j || x+y == i+j || B[x][y]) {
				continue;
			}
			
			if ( cycle(R, C, B, x, y, n+1) ) {
				return 1;
			}
		}
	}
	B[i][j] = 0;
	free(B);
	return 0;
}

void printArray(int R, int C, int** A) {
	int *X = (int*)malloc(R*C * sizeof(int));
	int *Y = (int*)malloc(R*C * sizeof(int));
	for (int i=0; i<R; i++) {
		for (int j=0; j<C; j++) {
			if (A[i][j] == 0) {
				X[R*C-1] = i+1;
				Y[R*C-1] = j+1;
			} else {
				X[ A[i][j]-1 ] = i+1;
				Y[ A[i][j]-1 ] = j+1;
			}
		}
	}
	
	for (int k=0; k< R*C; k++) {
		printf("%d %d\n", X[k], Y[k]);
	}
	
	return;
}