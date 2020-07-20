#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const double eps = 1e-8;

int main () {

    int T, LOOP;

    scanf("%d\n", &T);

    for (LOOP = 0; LOOP < T; LOOP ++) {
        int n, i;
        char c;

        scanf("%d\n", &n);

        printf("Case #%d: ", LOOP+1);
        for (i = 0; i < 2*(n-1); i++) {
            c = getchar();
            if (c == 'S') {
                putchar('E');
            }
            else if (c == 'E') {
                putchar('S');
            }
        }
        putchar('\n');
    }

    return 0;
}
