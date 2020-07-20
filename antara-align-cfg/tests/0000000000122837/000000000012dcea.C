#include <iostream>
#include <vector>
#include <cstdlib>
#include <cstdio>

#define REP(i,m,n) for(int i=int(m);i<int(n);i++)

using namespace std;

using LL = long long int;

void solve() {
    int t, w;
    scanf("%d %d", &t, &w);
    int ret[7] = {};
    int ans[7] = {};
    int in;
    REP(ttt,0,t) {
        REP(i,1,w+1) {
            printf("%d\n", i);
            fflush(stdout);
            scanf("%d", &ret[i]);
        }
        //vector<int> ret = {0,7,10,15,26,43,82};
        ans[1] = (ret[6] - 2 * ret[3] - 4 * ret[2] + 4 * ret[1]) / 40;
        ans[2] = ret[2] - ret[1] - (2 * ans[1]);
        ans[3] = ret[3] - ret[2] - (4 * ans[1]);
        ans[4] = ret[4] - ret[3] - (8 * ans[1] + 2 * ans[2]);
        ans[5] = ret[5] - ret[4] - (16 * ans[1]);
        //ans[6] = (2 * ret[5] - ret[6]) / 2 - (ans[5]);
        ans[6] = ret[6] - ret[5] - (32 * ans[1] + 4 * ans[2] + 2 * ans[3]);
        printf("%d %d %d %d %d %d\n", ans[1], ans[2], ans[3], ans[4], ans[5], ans[6]);
        fflush(stdout);
        scanf("%d", &in);
    }
}

int main() {
    solve();
    
    exit(0);
    return 0;
}