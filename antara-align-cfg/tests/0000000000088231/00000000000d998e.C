#include<iostream>
#include<math.h>
using namespace std;

int number(int n)
   {
   int i=0;
   int k=0;
   int l=0;
   if(n==4)
      {
      return 2;
      }
   while(n/10!=0)
      {

          if(n==4)
      {
      return 2;
      }
      if(n%10==4)
         {
         k=pow(10,i)*2;
         l=l+k;
         }
        i++;
        n=n/10;
      }
      if(n==4)
      {
      k=pow(10,i)*2;
         l=l+k;
      }
     return l;
   }

int main()
{
int tc;
cin>>tc;
int i=1;
while(tc--)
   {
   int n;
   cin>>n;
   cout<<"case "<<i<<":";
   cout<<number(n)<<" "<<n-number(n)<<endl;
   i++;
   }
}
