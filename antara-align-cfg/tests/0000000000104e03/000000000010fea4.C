#include <stdio.h>
int main() {
    int T;
    int R, C;
    int a, b, k;
    scanf("%d", &T);
    for (int i=0; i<T; i++) {
        scanf("%d %d", &R, &C);
        if ((R % 2 == 1 && C % 2 == 1) || (R < 4 && C < 4)) {
            printf("Case #%d: IMPOSSIBLE\n", i+1);
            continue;
        }
        a = 1;
        b = 2;
        printf("Case #%d: POSSIBLE\n", i+1);
        if (R % 2 == 0) {
            for (int j=0; j<R/2; j++) {
                k = 3;
                while (1) {
                    printf("%d %d\n", a, k);
                    printf("%d %d\n", b, k-2);
                    if (k == C) {
                        break;
                    }
                    k++;
                }
                printf("%d %d\n", a, 1);
                printf("%d %d\n", b, C-1);
                printf("%d %d\n", a, 2);
                printf("%d %d\n", b, C);
                a += 2;
                b += 2;
            }
        } else {
            for (int j=0; j<C/2; j++) {
                k = 3;
                while (1) {
                    printf("%d %d\n", k, a);
                    printf("%d %d\n", k-2, b);
                    if (k == R) {
                        break;
                    }
                    k++;
                }
                printf("%d %d\n", 1, a);
                printf("%d %d\n", R-1, b);
                printf("%d %d\n", 2, a);
                printf("%d %d\n", R, b);
                a += 2;
                b += 2;
            }
        }
    }
    return 0;
}
