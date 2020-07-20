#include <stdio.h>

int main() {
    int T;
    int N, K;
    int C[100010], D[100010];
    scanf("%d", &T);
    for (int t = 1; t <= T; t++) {
        int cnt = 0;
        scanf("%d %d", &N, &K);
        for (int i = 0; i < N; i++) {
            scanf("%d", &C[i]);
        }
        for (int i = 0; i < N; i++) {
            scanf("%d", &D[i]);
        }
        for (int L = 0; L < N; L++) {
            int max_C = -1, max_D = -1;
            for (int R = L; R < N; R++) {
                if (C[R] > max_C) max_C = C[R];
                if (D[R] > max_D) max_D = D[R];
                if (max_C - max_D <= K && max_D - max_C <= K) cnt++;
            }
        }
        printf("Case #%d: %d\n", t, cnt);
    }
}