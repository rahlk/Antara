#include <stdio.h>
#include <stdlib.h>

void fillSize(int *A, int s, int e) {
    int i;
    for(i=s; i<=e; i++) {
        A[i]++;
    }
}

int main() {
    int T;
    scanf("%d", &T);
    int tcase = 0;
    while(T--) {
        tcase++;
        int P, Q;
        scanf("%d %d", &P, &Q);
        int Rx[Q];
        int Ry[Q];
	    int i;
        for(i=0;i<Q;i++) {
		    Rx[i] = Ry[i] = 0;
	    }
	while(P--) {
        int Xi, Yi;
        char D;
        scanf("%d %d %c", &Xi, &Yi, &D);
        if(D == 'N') {
                fillSize(Ry, Yi+1, Q-1);
                fillSize(Rx, 0, Q-1);

        } else if(D == 'S') {

                fillSize(Ry, 0, Yi-1);
                fillSize(Rx, 0, Q-1);

        } else if(D == 'E') {

                fillSize(Ry, 0, Q-1);
                fillSize(Rx, Xi+1, Q-1);

        } else if(D == 'W') {

                fillSize(Ry, 0, Q-1);
                fillSize(Rx, 0, Xi-1);

        }
	
  /*      for(i=0;i<Q;i++) {
		printf("%d ", Rx[i]);
	}
	printf("\n");
        for(i=0;i<Q;i++) {
		printf("%d ", Ry[i]);
	}
	printf("\n");
	printf("\n");*/
	}
        int max = -1, maxyi, maxxi;
        for(i=0;i<Q;i++) {
            if(Ry[i] > max) {
                max = Ry[i];
                maxyi = i;
            }
        }
//	printf("Max %d\n", max);
	    max = -1;
        for(i=0;i<Q;i++) {
            if(Rx[i] > max) {
                max = Rx[i];
                maxxi = i;
            }
        }
        printf("Case #%d: %d %d\n", tcase, maxxi, maxyi);
    }
    return 0;
}
