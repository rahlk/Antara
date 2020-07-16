#include <bits/stdc++.h>
using namespace std;
#define REP(i,N) for(i=0;i<N;i++)
typedef long long ll;
typedef pair<ll, int> P;

bool comp_Fi(P& l, P&r){
  return l.first < r.first;
}
bool comp_Se(P& l, P&r){
  return l.second < r.second;
}

ll gcd(ll a, ll b){
  if(b==0) return a;
  return gcd(b,a%b);
}

void solve(){
  ll i,g,N,L;
  cin >> N >> L;
  vector<ll> v(L);
  vector<P> w;
  map<ll,char> memo;
  REP(i,L){
    cin >> v[i];
  }
  g = gcd(v[0],v[1]);
  w.push_back(P(v[0]/g,0));
  w.push_back(P(g,1));
  for(i=1;i<L;i++){
    g = v[i]/g;
    w.push_back(P(g,i+1));
  }
  sort(w.begin(),w.end(),comp_Fi);
  ll pre = -1,index=0;
  REP(i,w.size()){
    if(pre == w[i].first) continue;
    memo[w[i].first] = 'A'+index;
    index++;
    pre = w[i].first;
  }
  sort(w.begin(),w.end(),comp_Se);
  REP(i,w.size()) cout << memo[w[i].first];
  cout << endl;
}

int main(void){
  int i,T;
  cin >> T;
  REP(i,T){
    cout << "Case #" << i+1 << ": ";
    solve();
  }
  return 0;
}
