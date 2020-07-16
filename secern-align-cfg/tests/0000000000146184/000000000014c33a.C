#include <bits/stdc++.h>
using namespace std;
typedef long long lint;
typedef pair<lint, lint> pll;

struct Rll{lint c, p;};
int perm[305];
pll A[12];

bool cmp(Rll a, Rll b){
    return a.c * b.p < b.c * a.p;
}

void chmax(Rll &a, Rll b){
    if(cmp(a, b)) a = b;
}

void chmin(Rll &a, Rll b){
    if(!cmp(a, b)) a = b;
}

int main(){
    ios::sync_with_stdio(false), cin.tie(nullptr);
    int T, N; cin >> T;
    for(int __=1;__<=T;__++){
        cin >> N;
        for(int i=0;i<N;i++) cin >> A[i].first >> A[i].second, perm[i] = i;
        bool ok = true;
        Rll mn = {0, 1}, mx = {200, 1};
        for(int j=0;j<N-1;j++){
            int cur = perm[j], nxt = perm[j+1];
            lint dc = A[nxt].first - A[cur].first, dj = A[cur].second - A[nxt].second;
            if(dc>0) chmax(mn, Rll{dj, dc});
            else if(dc<0) chmin(mx, Rll{-dj, -dc});
            else if(dj>0) ok = false;
        }
        if(ok and cmp(mn, mx)){
            lint g = __gcd(mn.p, mx.p);
            lint lcm = mn.p / g * mx.p, left = mx.p / g * mn.c, right = mn.p / g * mx.c;
            if(right==left+1) cout << "Case #" << __ << ": " << 2 * right - 1 << ' ' << 2 * lcm << endl;
            else{
                pll ans = {left+1, lcm};
                for(lint j=left+1;j<right;j++){
                    lint g2 = __gcd(j, lcm);
                    ans = min(ans, {j/g2, lcm/g2});
                }
                cout << "Case #" << __ << ": " << ans.first << ' ' << ans.second << endl;
            }
        }
        else cout << "Case #" << __ << ": Impossible" << endl;
    }
    return 0;
}