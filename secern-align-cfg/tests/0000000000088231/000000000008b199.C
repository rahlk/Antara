#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int T, n, m;
    char *N;
    char *B = NULL;
    scanf("%d", &T);
    for (int t = 1; t <= T; t++) {
        scanf("%ms", &N);
        n = strlen(N);
        for (int i = 0; i < n; i++) {
            if (N[i] == '4') {
                if (!B) {
                    m = n - i;
                    B = malloc(m + 1);
                    B[m] = '\0';
                    memset(B, '0', m);
                }
                N[i] = '2';
                B[i - n + m] = '2';
            }
        }
        printf("Case #%d: %s %s\n", t, N, B);
        free(B);
        free(N);
        B = NULL;
    }
}