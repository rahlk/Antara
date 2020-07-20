#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const double eps = 1e-8;

int main () {

    int T, LOOP;
    int R, C, i, j;

    scanf("%d\n", &T);

    for (LOOP = 0; LOOP < T; LOOP ++) {
        
        scanf("%d%d", &R, &C);

        if (R * C >= 10) {
            printf("Case #%d: POSSIBLE\n", LOOP+1);

            if (R == 3 && C == 4) {
                printf("1 1\n2 3\n3 1\n1 2\n2 4\n3 2\n1 4\n2 2\n4 4\n1 3\n2 1\n3 3\n");
            }
            else if (R == 4 && C == 3) {
                printf("1 1\n3 2\n1 3\n2 1\n4 2\n2 3\n4 1\n2 2\n4 4\n3 1\n1 2\n3 3\n");
            }
            else {
                for (i = 0; i < R; i += 2) for (j = 0; j < C; j += 2) {
                    printf("%d %d\n", i+1, j+1);
                }
                for (i = 0; i < R; i += 2) for (j = 1; j < C; j += 2) {
                    printf("%d %d\n", i+1, j+1);
                }
                for (i = 1; i < R; i += 2) for (j = 0; j < C; j += 2) {
                    printf("%d %d\n", i+1, j+1);
                }
                for (i = 1; i < R; i += 2) for (j = 1; j < C; j += 2) {
                    printf("%d %d\n", i+1, j+1);
                }
            }
        }
        else {
            printf("Case #%d: IMPOSSIBLE\n", LOOP+1);
        }
    }

    return 0;
}
