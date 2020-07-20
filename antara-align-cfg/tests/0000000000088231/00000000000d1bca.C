#include<stdio.h>
int check(unsigned long long int );
void main()
{
 unsigned long long int n,a,b;
 int i=1,r,s,t,z;
 scanf("%d",&t);
for(z=1;z<=t;z++)
{
 scanf("%llu",&n);
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
 printf("Case #%d: %llu %llu\n",z,a,b);
}
}
int check(unsigned long long int n)
{
 unsigned long long int rem=0,k=10,i=1; 
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