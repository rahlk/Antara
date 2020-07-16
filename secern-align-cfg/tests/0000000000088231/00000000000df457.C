
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int T,i;
      cin>>T;

      for(i=1;i<=T;i++){
             long long int n ,a=0,left,c=0,b;
    cin>>n;
    left=n;
    while(n!=0)
    {
       if(n%10==4)
           a+=pow(10,c);
        n=n/10;
        c++;
    }
    b=left-a;


          cout<<"Case #" <<i<<": "<<a<<" "<<b<<endl;
      }
return 0;
}
