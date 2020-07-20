#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t, a,b,N[100],i,j;
  clrscr();
  cin>>t;
  for(i=1;i<=t;i++)
 {
   cin>>N[i];
}  
 for(i=1;i<=t;i++)
{ 
 for(j=1;j<=N[i]-1;j++)
   {

    if(j%4!=0)
   {
      b=j;
      a=N[i]-b;
   }
}
cout<<"Case#"<<i<<":"<<a<<" "<<b<<endl;
}


 return 0;
}