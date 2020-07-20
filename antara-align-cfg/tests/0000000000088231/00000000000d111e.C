#include <iostream>
#include <string>

//#pragma warning( disable : 4996 )
#define ll long long
#define pb push_back
#define endl '\n'
#define loop( i, x, y ) for(ll i = x; i < y; i++)
#define fastIO cin.tie( 0 );ios_base::sync_with_stdio( false )
#define pii pair<int, int>
#define eps 1e-13
#define N 105

using namespace std;

string s;
int a[N], b[N];

inline void init()
{
    s.clear();
    cin >> s;
    for ( int i = 0; i < N; i++ ) {
        a[i] = b[i] = 0;
    }
}

inline void solve()
{
    for ( int i = 0, p = 0; i < s.size(); i++, p++ ) {
        if ( s[i] == '4' ) {
            a[p] = 1;
            b[p] = 3;
        }
        else {
            a[p] = 0;
            b[p] = s[i] - '0';
        }
    }
    int tmp = 0;
    while ( a[tmp] == 0 )
        tmp++;
    for ( ; tmp < s.size(); tmp++ )
        cout << a[tmp];
    cout << endl;

    for ( int i = 0; i < s.size(); i++ )
        cout << b[i];
    cout << endl << flush;

}

int main()
{
    fastIO;
    int t;
    cin >> t;
    while ( t-- ) {
        init();
        solve();
    }

    return 0;
}