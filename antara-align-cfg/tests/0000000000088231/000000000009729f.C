#include <stdio.h>                                                                                                                                                           [0/35]
#include <string.h>

int main() {
    int t, i, j, a, b;
    char s[1000];
    while (scanf("%d", &t) != EOF) {
        for (i = 0; i < t; i++) {
            scanf("%s", s);

            a = 0;
            b = 1;

            int length = strlen(s);
            for (j = length - 1; j >= 0; j--) {
                if (s[j] == '4') {
                  a += b;
                }
                b *= 10;
            }

            printf("Case #%d: %d %d\n", i+1, atoi(s)-a, a);
        }
    }
    return 0;
}