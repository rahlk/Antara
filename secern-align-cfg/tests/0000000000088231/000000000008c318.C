#include<stdio.h>
#include<math.h>
void main()
{

long long int    n,a,b,i,j=0,k;

static long long int l;
printf("Enter the value of N");
scanf("%lld",&n);
k=n;
while(n>0)
{
  i=n%10;
  n=n/10;
  j=j+1;
  l=j;
  if(n==4)
  break;
  }
 a=k-pow(10,l);
 b=k-a;
 printf("The value of a & b is : %lld   %lld",a,b);
 }