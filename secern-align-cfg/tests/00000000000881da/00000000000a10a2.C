#include <stdio.h>
#include <math.h>

int main (void) {
    int i, j, x, n;
    char dig;
    scanf ("%d", &x);
    for (j=1; j<=x; j++) {
        scanf ("%d ", &n);
        n = (2 * n) - 2;
        for (i=0; i<n; i++) {
            scanf("%c ", &dig);
            if (i==0) {
                printf ("Case #%d: ", j);
            }
            if (dig == 'E') {

                printf("S");
            }
            else {
                printf("E");
            }
        }
        printf("\n");
    }
    return 0;
}