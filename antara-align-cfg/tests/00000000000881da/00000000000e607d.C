#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i, j, t, n;
    scanf("%d", &t);
    
    for (i = 0; i < t; i++) {
        scanf("%d\n", &n);
        printf("Case #%d: ", i + 1);
        for (j = 0; j < (2 * n - 2); j++) {
            if (getchar() == 'S')
                printf("E");
            else
                printf("S");
        }
        printf("\n");
     }
}
