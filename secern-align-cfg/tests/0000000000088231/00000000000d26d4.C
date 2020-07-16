#include<stdio.h>
int check(long long int );
void main()
{
 long long int n,a,b;
 int i=1,r,s,t,z;
 scanf("%d",&t);
for(z=1;z<=t;z++)
{
 scanf("%lld",&n);
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
 printf("Case #%d: %lld %lld\n",z,a,b);
}
}
int check(long long int n)
{
 long long int rem=0,k=10,i=1; 
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