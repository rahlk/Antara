#include <stdio.h>

int main() {
    int T;
    scanf("%d\n", &T);
    for (int t = 1; t <= T; t++) {
        int N;
        scanf("%d\n", &N);
        printf("Case #%d: ", t);
        for (int i = 0; i < 2 * N - 2; i++) {
            char c;
            scanf("%c", &c);
            if (c == 'E') {
                printf("S");
            } else {
                printf("E");
            }
        }
        printf("\n");
    }
}
