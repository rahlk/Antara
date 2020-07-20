#include <stdio.h>

void solve() {
    int t, w;
    scanf("%d %d", &t, &w);
    int ret[7];
    int ans[7];
    int in;
    int ttt;
    for(ttt = 0; ttt < t; ++ttt) {
        for(int i = 1; i < w+1; ++i) {
            printf("%d\n", i);
            fflush(stdout);
            scanf("%d", &ret[i]);
        }
        ans[1] = (ret[6] - 2 * ret[3] - 4 * ret[2] + 4 * ret[1]) / 40;
        ans[2] = ret[2] - ret[1] - (2 * ans[1]);
        ans[3] = ret[3] - ret[2] - (4 * ans[1]);
        ans[4] = ret[4] - ret[3] - (8 * ans[1] + 2 * ans[2]);
        ans[5] = ret[5] - ret[4] - (16 * ans[1]);
        ans[6] = (2 * ret[5] - ret[6]) / 2 - (ans[5]);
        printf("%d %d %d %d %d %d\n", ans[1], ans[2], ans[3], ans[4], ans[5], ans[6]);
        fflush(stdout);
        scanf("%d", &in);
        if (in != 1) return;
    }
}

int main() {
    solve();
    
    return 0;
}