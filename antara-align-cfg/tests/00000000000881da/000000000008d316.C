#include "stdio.h"

int main()
{
    int testcases, t, i, n;
    char p;
    scanf("%d", &testcases);

    for(t = 1; t <= testcases; t++) {
        scanf("%d", &n);
        printf("Case #%d: ", t);
        do
        {
            scanf("%c", &p);
            if (p != 'E') {
                printf("%c", 'E');
            } else {
                printf("%c", 'S');
            }
        } while (p != '\n');
        printf("\n");
    }
    return 0;
}
