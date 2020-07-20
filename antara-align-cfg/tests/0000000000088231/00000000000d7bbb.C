#include<string>
#include<iostream>
using namespace std;
int main()
{
    int t,i;
    cin >> t;
    for(i=1;i<=t;i++)
    {
      string n,a="",b="";
      int l,j,k=0;
      cin>>n;
      l=n.length();
        for(j=0;j<l;j++)
        {
          if(n[j]=='4')
          {
            a+='3';
            b+='1';
            k=1;
          }
          else
          {
            a+=n[j];
            if(k==1)
            {
              b+='0';
            }
          }
      }
    cout<<"Case #"<<i<<": "<<a<<" "<<b<<"\n";
    }
    return 0;
}
