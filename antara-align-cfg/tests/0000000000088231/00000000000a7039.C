#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ss second
#define ff first
#define pb push_back
#define mp make_pair

int main(){
    int t;
    cin>>t;
    int j=1;
    while (t--){string n;
    string x="";
    cin>>n;bool ok=0;
    for(int i=0;i<n.size();i++)
    {
        if(n[i]=='4')
        {
            n[i]--;
            x+='1';
            ok=1;
        }
        else if(ok)
            x+='0';
    }
    if(!ok)
        x+='0';
    cout<<"Case #"<<j<<": "<<n<<' '<<x<<endl;
    j++;
}
}
