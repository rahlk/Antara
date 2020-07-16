#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void gophers(int M);

int main(int argc, char *argv[]) {
	int T, N, M;
	scanf("%d %d %d", &T, &N, &M);
	
	for (int i=0; i<T; i++) {
		gophers(i, M);
	}
	
	return 0;
}

void gophers(int M) {
	int B = [17 13 11 7 5 3 2];
	int rem[7], r;
	
	for (int d=0; d<7; d++ {
		rem[d] = 0;
		for (int i=0; i<18; i++) {
			printf("%d ", B[d]);
		}
		printf("\n");
		fflush(stdout);
		for (int i=0; i<18; i++) {
			scanf("%d", &r);
			rem[d] = rem[d] + r;
		}
	}
	
	int g = rem[0]-17;
	int fit = 0;
	
	while (!fit) {
		g = g + 17;
		fit = 1;
		for (int d=1; d<7; d++) {
			if (g-rem[d]<0 || (g-rem[d])%B[d]) {
				fit = 0;
				break;
			}
		}
		
	}
	
	printf("%d\n", g);
	fflush(stdout);
	scanf("%s");
	
}