#include <studio.h>

int main() {
    int T;
    scanf("%d", &T);
    for (int t = 1; t <= T; t++) {
        int N;
        scanf("%d", &N);
        printf("Case #%d: %d %d\n", t, N/2, (N+1)/2);
    }
    return 0;
}