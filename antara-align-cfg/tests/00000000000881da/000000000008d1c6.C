#include "stdio.h"

int main()
{
    int testcases, t, i, n;
    char p;
    scanf("%d", &testcases);

    for(t = 1; t <= testcases; t++) {
        scanf("%d", &n);
        printf("Case #%d: ", t);
        for(i = 0; i < n * 2 - 2; i++) {
            scanf("%c", &p);
            if (p != 'E') {
                printf("%c", 'E');
            } else {
                printf("%c", 'S');
            }
        }
        printf("\n");
    }
    return 0;
}
