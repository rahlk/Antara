#include<iostream>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,x,t;
    cin>>t;
    while(t--){
    cin>>n;
    x=n;
    ll cnt=0;
    while(x>0)
    {
        x=x/10;
        cnt++;
    }

    ll a[cnt],b[cnt];
    x=n;
    ll i=cnt-1;
    while(x>0){
        a[i]=x%10;
        x=x/10;
        i--;
    }
    for(ll i=0;i<cnt;i++)
        b[i]=0;
    for(ll i=0;i<cnt;i++){
        if(a[i]==4){
            a[i]=3;
            b[i]=1;
        }
    }
    for(ll i=0;i<cnt;i++)
        cout<<a[i];
    cout<<" ";
    ll f=0;
    for(ll i=0;i<cnt;i++)
        if(b[i]==0&&f==0)
            continue;
        else{
        f=1;
        cout<<b[i];
        }
    cout<<"\n";
    }
    return 0;

}
