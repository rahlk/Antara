#include <iostream>
#include <math.h>

using namespace std;

int positionOfFour(int n)
{
    int a=0;
    int b=0;
    while(n>0)
    {
        if(n%10 == 4)
        {
            a+=(int)(pow(10, b) + 0.5);
        }
        n/=10;
        b++;
    }
    return a;
}

int main()
{
   int T,N;
   int a,b;
   int i;
   
   cin>>T;

   for(i=1;i<=T;i++)
   {
       cin>>N;
       a= positionOfFour(N);
       b = N-a;
       cout<<"Case #"<<i<<": "<<a<<" "<<b<<endl;
   }

   return 0;
}
