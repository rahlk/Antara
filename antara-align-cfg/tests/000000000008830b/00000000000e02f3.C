#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
int gcd(int a, int b){
    int mx = max(a,b);
    int mn = min(a,b);
    int md = mx%mn;
    if (md == 0){
        return mn;
    }
    else{
        return gcd(mn,md);
    }
}
int main(){
int m;
cin >> m;
for (int u = 0; u < m; u++){
    int n,l;
    cin >> n >> l;
    int nums[l];
    vector<pair<int,int> > primes;
    for (int j = 0; j<l;j++){
        int temp;
        cin >> temp;
        nums[j] = temp;
    }
    int firstgcd = gcd(nums[0],nums[1]);
    double a = sqrt(firstgcd);
    if (a == (int)a){
        firstgcd = (int)a;
    }
    primes.push_back(make_pair(nums[0]/firstgcd,0));
    nums[0] = nums[0]/primes[0].first;
    for (int i = 0; i < l-1; i++){
        primes.push_back(make_pair(nums[i],i+1));
        nums[i] = nums[i]/primes[i+1].first;
        nums[i+1] = nums[i+1]/primes[i+1].first;
    }
    primes.push_back(make_pair(nums[l-1],l));
    sort(primes.begin(),primes.end());
    char ansarr[l+1];
    char c = 'A';
    for (int i = 0; i < l; i++){
        int pos = primes[i].second;
        ansarr[pos] = c;
        if (primes[i].first != primes[i+1].first){
            c++;
        }
    }
    int pos = primes[l].second;
    ansarr[pos] = c;
    string ans = "";
    for (int i = 0; i < l+1; i++) ans += ansarr[i];
    cout << "Case #" << (char)u+1 << ": " << ans << endl;
}
}