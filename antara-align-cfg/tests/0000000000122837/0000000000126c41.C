#include <stdio.h>

int main() {
    int T, W;
    long long x;
    int s[6];
    int res;
    scanf("%d %d", &T, &W);
    while (T--) {
        printf("210\n");
        fflush(stdout);
        scanf("%lld", &x);
        s[3] = x >> 52;
        s[4] = (x >> 42) & 127;
        s[5] = (x >> 35) & 127;
        printf("42\n");
        fflush(stdout);
        scanf("%lld", &x);
        x -= (s[3] << 10) + (s[4] << 8) + (s[5] << 7);
        s[0] = x >> 42;
        s[1] = (x >> 21) & 127;
        s[2] = (x >> 14) & 127;
        printf("%d %d %d %d %d %d\n", s[0], s[1], s[2], s[3], s[4], s[5]);
        fflush(stdout);
        scanf("%d", &res);
        if (res == -1) return;
    }
}