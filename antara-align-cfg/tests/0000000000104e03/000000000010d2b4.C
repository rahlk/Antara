#include <stdio.h>
int main() {
    int T;
    int R, C;
    int k;
    scanf("%d", &T);
    for (int i=0; i<T; i++) {
        scanf("%d %d", &R, &C);
        if ((R % 2 == 1 && C % 2 == 1) || (R < 4 && C < 4)) {
            printf("Case #%d: IMPOSSIBLE\n", i+1);
            continue;
        }
        printf("Case #%d: POSSIBLE\n", i+1);
        if (R % 2 == 0) {
            for (int j=0; j<R/2; j++) {
                k = 3;
                while (1) {
                    printf("%d %d\n", 2*j+1, k);
                    printf("%d %d\n", 2*j+2, k-2);
                    if (k == C) {
                        break;
                    }
                    k++;
                }
                printf("%d %d\n", 2*j+1, 1);
                printf("%d %d\n", 2*j+2, C-1);
                printf("%d %d\n", 2*j+1, 2);
                printf("%d %d\n", 2*j+2, C);
            }
        } else {
            for (int j=0; j<C/2; j++) {
                k = 3;
                while (1) {
                    printf("%d %d\n", k, 2*j+1);
                    printf("%d %d\n", k-2, 2*j+2);
                    if (k == R) {
                        break;
                    }
                    k++;
                }
                printf("%d %d\n", 1, 2*j+1);
                printf("%d %d\n", R-1, 2*j+2);
                printf("%d %d\n", 2, 2*j+1);
                printf("%d %d\n", R, 2*j+2);
            }
        }
    }
    return 0;
}
