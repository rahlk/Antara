#include <stdio.h>
#include <string.h>

int main () {
    int T, len, first_two;
    char N[101], a[101], b[101];

    scanf("%d ", &T);
    for (int c = 1; c <= T; ++c) {
        first_two = -1;
        scanf("%s ", N); len = strlen(N);
        for (int i = 0; i < len; ++i) {
            if (N[i] == '4') {
                a[i] = '2';
                b[i] = '2';
                if( first_two == -1) first_two = i;
            }
            else {
                a[i] = N[i];
                b[i] = '0';
            }
        }
        a[len] = '\0';
        b[len] = '\0';
        printf("Case #%d: %s %s\n", c, a, &b[first_two]);
    }

    return 0;
}
