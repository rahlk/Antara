#include <stdio.h>
#include <stdlib.h>

int abs (int a) {
    return a > 0 ? a : -a;
}

int main() {
    int cases, c, N, K, i, j, mc, md;
    int *C, *D;
    int pairs = 0;
    scanf("%d", &cases);
    for (c = 1; c <= cases; c++) {
        scanf("%d %d", &N, &K);
        C = (int*)malloc(sizeof(int) * N);
        D = (int*)malloc(sizeof(int) * N);
        for (i = 0; i < N; i++) {
            scanf("%d", &C[i]);
        }
        for (i = 0; i < N; i++) {
            scanf("%d", &D[i]);
        }
        for (i = 0; i < N; i++) {
            mc = -1;
            md = -1
            for (j = i; j < N; j++) {
                if (C[i] > mc) {
                    mc = C[i];
                }
                if (D[i] > md) {
                    md = D[i];
                }
                if (abs(mc-md) <= K) {
                    pairs++;
                }
            }
        }
        printf("Case #%d: %d\n", c, pairs);
    }
}
