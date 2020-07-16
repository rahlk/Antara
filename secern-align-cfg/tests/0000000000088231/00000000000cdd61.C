#include <stdio.h>
void check(long int n,int k)
{
  long int i,l,rr,m,r,t;
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
      fl=1;
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
    printf("\nCase #%d: %ld %ld",k,m,i);
    break;
   }
  }
  }
 }

int main()
{
 long int i,x;
 int n;
 scanf("%d",&n);
for(i=1;i<=n;i++)
{
 scanf("%ld",&n);
 check(x,i);
}
 return 0;
}