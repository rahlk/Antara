#include <stdio.h>

#define MOD 1000000007

int main() {
    int T, M;
    int R[10010][2];
    int G[10010];

    scanf("%d", &T);
    for (int t = 1; t <= T; t++) {
        scanf("%d", &M);
        for (int i = 0; i < M; i++) {
            int R1, R2;
            scanf("%d %d", &R1, &R2);
            R[i][0] = R1 - 1;
            R[i][1] = R2 - 1;
        }
        for (int i = 0; i < M; i++) {
            scanf("%d", &G[i]);
        }
        long long arr[10010];
        int recursive = 0;
        int exist[10010];
        arr[0] = 1;
        for (int i = 1; i < M; i++) {
            arr[i] = 0;
        }
        for (int i = 0; i < M; i++) {
            for (int j = 0; j < M; j++) {
                if (arr[j]) {
                    int R1 = R[j][0];
                    int R2 = R[j][1];
                    if (R1 == 0 || R2 == 0) {
                        recursive = 1;
                        break;
                    }
                    arr[R1] = 1;
                    arr[R2] = 1;
                }
            }
            if (recursive) break;
        }
        if (recursive && G[0]) {
            printf("Case #%d: UNBOUNDED\n", t);
            break;
        }
        for (int i = 0; i < M; i++) {
            arr[i] = G[i];
            exist[i] = arr[i] > 0 ? 1 : 0;
        }
        for (int i = 0; i < M; i++) {
            for (int j = 1; j < M; j++) {
                if (exist[j]) {
                    int R1 = R[j][0];
                    int R2 = R[j][1];
                    arr[R1] = (arr[R1] + arr[j]) % MOD;
                    arr[R2] = (arr[R2] + arr[j]) % MOD;
                    arr[j] = 0;
                    exist[R1] = 1;
                    exist[R2] = 1;
                    exist[j] = 0;
                    for (int j = 0; j < M; j++) {
                        printf("%d ", arr[j]);
                    }
                    printf("\n");
                }
            }
        }
        printf("Case #%d: %d\n", t, arr[0]);
    }
}