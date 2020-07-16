#include <stdio.h>
#include <string.h>

int main()
{
    int t, i, j, dim;
    unsigned long len;
    scanf("%d", &t);
    for (j = 1; j <= t; j++) {
        scanf(" %d", &dim);
        char inp[2 * dim], outp[2 * dim];
        scanf(" %s", inp);
        len = strlen(inp);
        for (i = 0; i < len; i++) {
            if (inp[i] == 'E') {
                outp[i] = 'S';
            }
            else if (inp[i] == 'S') {
                outp[i] = 'E';
            }
        }
        outp[i] = '\0';
        printf("Case #%d: %s\n", j, outp);
    }

    return 0;
}
