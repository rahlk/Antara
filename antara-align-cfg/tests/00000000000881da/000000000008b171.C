#include <stdio.h>
#define MAX_LEN 99999
//N <= 50000, length (with null-terminator) <= 2N-1

int main() {
    int T;
    scanf("%d", &T);
    int N, len, i;
    char* str;
    for (int t = 1; t <= T; t++) {
        scanf("%d\n%ms", &N, &str);
        for (i = 0; i < (N * 2) - 2; i++) {
            if (str[i] == 'S') str[i] = 'E';
            else if (str[i] == 'E') str[i] = 'S';
        }
        printf("Case #%d: %s\n", t, str);
        free(str);
    }
}