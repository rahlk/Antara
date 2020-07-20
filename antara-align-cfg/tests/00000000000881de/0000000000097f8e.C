#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  int T;
  cin >> T;
  for (int t=1; t<=T; t++) {
    int N, B, F;
    cin >> N >> B >> F;
    vector<string> res(5);
    for (int i=0; i<5; i++) {
      for (int j=0; j<N; j++) cout << (j & (1<<i)?1:0);
      cout << endl;
      cout.flush();
      cin >> res[i];
    }
    vector<int> b(N-B);
    for (int j=0; j<N-B; j++)
      for (int i=0; i<5; i++)
        b[i]+=(res[i][j]-'0')<<i;
    vector<int> ans;
    int k=0;
    for (int i=0; i<N; i++)
      if (i%16==b[k]%16) k++;
        else ans.push_back(i);
    for (int i=0; i<B; i++)
      cout << ans[i] << (i==B-1?'\n':' ');
    cin >> N;
  }
} 