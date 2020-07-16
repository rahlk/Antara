#include <stdio.h>

int main() {
    int T;
    int P, Q, X, Y;
    char D;
    int cnt[4][100010];
    int sum[4][100010];
    scanf("%d", &T);
    for (int t = 1; t <= T; t++) {
        scanf("%d %d", &P, &Q);
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j <= Q; j++) {
                cnt[i][j] = 0;
            }
        }
        for (int i = 0; i < P; i++) {
            scanf("%d %d %c", &X, &Y, &D);
            switch (D) {
                case 'N':
                    cnt[0][Y]++;
                    break;
                case 'S':
                    cnt[1][Y]++;
                    break;
                case 'E':
                    cnt[2][X]++;
                    break;
                case 'W':
                    cnt[3][X]++;
                    break;
            }
        }
        sum[0][0] = 0;
        sum[1][Q] = 0;
        sum[2][0] = 0;
        sum[3][Q] = 0;
        for (int i = 1; i <= Q; i++) {
            sum[0][i] = sum[0][i - 1] + cnt[0][i - 1];
        }
        for (int i = Q - 1; i >= 0; i--) {
            sum[1][i] = sum[1][i + 1] + cnt[1][i + 1];
        }
        for (int i = 1; i <= Q; i++) {
            sum[2][i] = sum[2][i - 1] + cnt[2][i - 1];
        }
        for (int i = Q - 1; i >= 0; i--) {
            sum[3][i] = sum[3][i + 1] + cnt[3][i + 1];
        }
        int ans_X, max_X, ans_Y, max_Y;
        max_X = 0, max_Y = 0;
        for (int i = 0; i <= Q; i++) {
            if (sum[2][i] + sum[3][i] > max_X) {
                max_X = sum[2][i] + sum[3][i];
                ans_X = i;
            }
        }
        for (int i = 0; i <= Q; i++) {
            if (sum[0][i] + sum[1][i] > max_Y) {
                max_Y = sum[0][i] + sum[1][i];
                ans_Y = i;
            }
        }
        printf("Case #%d: %d %d\n", t, ans_X, ans_Y);
    }
}