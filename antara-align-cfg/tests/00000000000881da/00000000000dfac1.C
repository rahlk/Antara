#include <stdio.h>

int main(void) {
    int T, N;
    char s;
    scanf("%d\n", &T);
    for (int i=0;i<T;i++) {
        scanf("%d\n", &N);
        printf("Case #%d: ",i+1);
        for (int j=0;j<2*N-2;j++) {
            s = getchar();
            if (s == 'E') {
                putchar('S');
            } else {
                putchar('E');
            }
        }
        putchar('\n');
        if (i<T-1) {
            getchar();
        }
    }
    return 0;
}