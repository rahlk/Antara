#include <bits/stdc++.h>

using namespace std;

string solve(vector<string> v) {
    int n = v.size(), L = 0;
    char R = 'R', S = 'S', P = 'P';
    for (auto s: v) L = max(L, (int) s.length());

    string res = "";
    int cnt = 0; vector<bool> beat(n, false);
    for (int i = 0; i < n*L; i++) {
        vector<int> sR, sS, sP;
        for (int idx = 0; idx < n; idx++) {
            if (beat[idx]) continue;
            string s = v[idx];
            char c = s[i % (int) s.length()];
            if (c == R) sR.push_back(idx);
            if (c == S) sS.push_back(idx);
            if (c == P) sP.push_back(idx);
        }
        bool bR = (sR.size() > 0), bS = (sS.size() > 0), bP = (sP.size() > 0);
        if (bR && bS && bP) return "IMPOSSIBLE";
        if (!bS && !bP) { res += "P"; break; }
        if (!bP && !bR) { res += "R"; break; }
        if (!bR && !bS) { res += "S"; break; }
        if (bR && bS) {
            res += "R";
            for (auto e: sS) beat[e] = true;
            cnt += (int) sS.size();
        }
        if (bS && bP) {
            res += "S";
            for (auto e: sP) beat[e] = true;
            cnt += (int) sP.size();
        }
        if (bP && bR) {
            res += "P";
            for (auto e: sR) beat[e] = true;
            cnt += (int) sR.size();
        }
        if (cnt == n) break;
    }
    return res;
}

int main() {
    int T;
    cin >> T;
    for (int t = 1; t <= T; t++) {
        cout << "Case #" << t << ": ";
        int n; cin >> n;
        vector<string> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        cout << solve(v) << '\n';
    }
}
