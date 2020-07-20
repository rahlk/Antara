#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    int t = 0;

    int N,c;
    while (++t <= T)
    {
        scanf("%d", &N);
        getchar();
        printf("Case #%d: ", t);
        --N;
        N <<= 1;
        for (int i = 0; i < N; ++i) {
            c = getchar();
            putchar(c == 'E' ? 'S' : 'E');
        }
        putchar('\n');
    }
    return 0;
}