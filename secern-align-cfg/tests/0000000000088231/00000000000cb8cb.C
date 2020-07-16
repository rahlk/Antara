#include<stdio.h>
int check(int );
int main()
{
 int n,a,b,i=1,r,s,t,z;
 scanf("%d",&t);
for(z=1;z<=t;z++)
{
 scanf("%d",&n);
 while(1)
 {
  a=i;
  s=check(a);
  if(s==1)
   i++;
 else
 {
  b=n-a;
  r=check(b);
  if(r==1)
   i++;
  else
   break;
  }
 }
 printf("Case #%d: %d %d\n",z,a,b);
}
 return 0;
}
int check(int n)
{
 int rem=0,k=10,i=1; 
 while(rem!=n)
 {
  rem=n%k;
  if(rem==4*i)
  {
   return 1;
  }
  else
  {
   k=k*10;
   i=i*10;
   n=n-rem;
  }
 }
 return 0;
}