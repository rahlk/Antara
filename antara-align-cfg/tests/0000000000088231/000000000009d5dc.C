#include<iostream>
using namespace std;
void main()
{
    int t;
    int n,a,b;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>n;
        a=n/4;
        b=n-a;
        cout<<"Case #"<<i<<" "<<a<<" "<<b<<"\n";
        
    }
}