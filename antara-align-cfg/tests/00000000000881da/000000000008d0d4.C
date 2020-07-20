#include "stdio.h"

int main()
{
    int i, t, j, n;
    char c;
    scanf("%d", &t);

    for(i = 1; i <= t; i++) {
        scanf("%d", &n);
        printf("Case #%d: ", i);
        for(j = 0; j < n * 2 - 2; j++) {
            scanf("%c", &c);
            if (c != 'E') {
                printf("%c", 'E');
            } else {
                printf("%c", 'S');
            }
        }
        printf("\n");
    }
    return 0;
}