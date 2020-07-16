#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    int N, len, i;
    char* str = malloc(100000);
    for (int t = 1; t <= T; t++) {
        scanf("%d\n%s", &N, str);
        for (i = 0; i < (N * 2) - 2; i++) {
            if (str[i] == 'S') str[i] = 'E';
            else if (str[i] == 'E') str[i] = 'S';
        }
        printf("Case #%d: %s\n", t, str);
    }
}