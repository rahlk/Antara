#include <stdio.h>
void check(long long int n,int k)
{
  long long int i,l,rr,m,r,t;
  int flag=0,fl=0;
  for(i=1;i<n/2;i++)
  {
   fl=0;
   flag=0;
   l=i;
   while(l!=0)
   {
    rr=l%10;
     if(rr==4)
     {
      fl=1;
      break;
     }
    l=l/10;
   }
   if(fl==0)
   {
    m=n-i;
    t=m;
    while(t!=0)
    {
     r=t%10;
     if(r==4)
      flag=1;
     t=t/10;
    }
   if(flag==0)
   {
    printf("\nCase #%d: %lld %lld",k,m,i);
    break;
   }
  }
  }
 }

int main()
{
 long long int j,n;
 int test;
 scanf("%d",&test);
for(j=1;j<=test;j++)
{
 scanf("%lld",&n);
 check(n,j);
}
 return 0;
}
