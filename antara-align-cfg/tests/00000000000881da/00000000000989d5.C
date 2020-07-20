#include <stdio.h>

int main() {
    int T, N;
    char P[100010];
    scanf("%d", &T);
    for (int i = 1; i <= T; i++) {
        scanf("%d", &N);
        scanf("%s", P);
        int j = 0;
        while (P[j] != '\0') {
            if (P[j] == 'S') {
                P[j] = 'E';
            } else {
                P[j] = 'S';
            }
            j++;
        }
        printf("Case #%d: %s\n", i, P);
    }
}