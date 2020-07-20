#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    for (int t = 1; t <= T; t++) {
        int N;
        scanf("%d", &N);
        char P[50001];
        scanf("%s", P);
        for(int i = 0; P[i]; i++) {
            P[i] ^= 'E';
            P[i] ^= 'S';
        }
        printf("Case #%d: %s\n", t, P);
    }
    return 0;
}