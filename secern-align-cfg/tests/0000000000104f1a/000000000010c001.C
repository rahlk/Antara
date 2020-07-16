#include <stdio.h>

int main() {
    int T, N, M;
    int arr[7] = {5, 7, 9, 11, 13, 16, 17};
    int rem[7] = {0};
    int pp[7] = {2450448, 1750320, 1361360, 1113840, 942480, 765765, 720720};
    int inv[7] = {2, 3, 5, 6, 11, 13, 7};
    int prod = 12252240;
    int ans = 0;

    scanf("%d %d %d", &T, &N, &M);
    while (T--) {
        for (int n = 0; n < 7; n++) {
            for (int i = 0; i < 17; i++) {
                printf("%d ", arr[n]);
            }
            printf("%d\n", arr[n]);
            fflush(stdout);
            for (int i = 0; i < 18; i++) {
                int blade;
                scanf("%d", &blade);
                if (blade == -1) return;
                rem[n] += blade;
            }
            rem[n] %= arr[n];
        }
        for (int i = 0; i < 7; i++) {
            ans += rem[i] * pp[i] * inv[i];
            ans %= prod;
        }
        printf("%d\n", ans);
        fflush(stdout);
        int cor;
        scanf("%d", &cor);
        if (cor == -1) return;
    }
}