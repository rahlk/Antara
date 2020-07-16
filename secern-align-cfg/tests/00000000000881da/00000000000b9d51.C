#include <stdio.h>

char buffer[50005];

int main() {
    int t, n, c, i;
    scanf("%d", &t);
    for (c = 1; c <= t; c ++) {
        printf("Case #%d: ", c);
        scanf("%d", &n);
        scanf("%s", buffer);
        for (i = 0; i < n; i ++) {
            if (buffer[i] == 'S') {
                putchar('E');
            } else {
                putchar('S');
            }
        }
        printf("\n");
    }
    return 0;
}