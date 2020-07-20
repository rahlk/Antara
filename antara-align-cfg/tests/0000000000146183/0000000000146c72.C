#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <numeric>
#include <functional>
#include <math.h>
#include <sys/time.h>

#define INF ((int)1e9)
#define INFLL ((long long)1e18)
#define MOD (1000000007LL)

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<int, ll> pil;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;

ll gcd(ll a, ll b)
{
    if (b > a) return gcd(b, a);
    if (b == 0) return a;
    return gcd(b, a%b);
}

bool Solve(void)
{
    int N;
    cin >> N;
    vll C(N), J(N);
    for (int n = 0; n < N; ++n) {
        cin >> C[n] >> J[n];
    }
    if (count(C.begin(), C.end(), C[0]) == N || count (J.begin(), J.end(), J[0]) == N) {
        cout << 1 << endl;
        return true;
    }
    set<pll> Set;
    for (int n = 0; n < N; ++n) {
        for (int m = n+1; m < N; ++m) {
            ll dc = C[m]-C[n];
            ll dw = J[m]-J[n];
            if (dc > 0 && dw < 0) {
                ll g = gcd(dc, -dw);
                Set.insert({dc/g, -dw/g});
            } else if (dc < 0 && dw > 0) {
                ll g = gcd(-dc, dw);
                Set.insert({-dc/g, dw/g});
            }
        }
    }
    cout << Set.size() + 1 << endl;
	return true;
}

int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(false);
    int T;
    cin >> T;

    for (int t = 1; t <= T; ++t) {
    	cout << "Case #" << t << ": ";
    	if (!Solve()) {
    		break;
    	}
    }

    return 0;
}
