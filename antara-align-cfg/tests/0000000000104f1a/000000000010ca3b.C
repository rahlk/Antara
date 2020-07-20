#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXM 1000001

int cant_it_be[MAXM];

int main(void) {
    int T,N,M,i,t;
    scanf("%d%d%d",&T,&N,&M);
    for (t = 0; t < T; t++) {
        memset(cant_it_be, 0, sizeof cant_it_be);
        for (i = 12; i <= 18; i++) {
            int j;
            for (j = 0; j < 18; j++) {
                printf("%d ",i);
            }
            printf("\n");
            fflush(stdout);
            int n, total = 0;
            for (j = 0; j < 18; j++) {
                scanf("%d",&n);
                total += n;
            }
            total %= i;
            for (j = 0; j <= M; j++) {
                if (j%i != total) {
                    cant_it_be[j] = 1;
                }
            }
        }
        int verdict;
        for (i = 0; i <= M; i++) {
            if (!cant_it_be[i]) {
                printf("%d\n",i);
                fflush(stdout);
                scanf("%d",&verdict);
                if (verdict == -1) return 0;
                else break;
            }
        }
    }
	return 0;
}
