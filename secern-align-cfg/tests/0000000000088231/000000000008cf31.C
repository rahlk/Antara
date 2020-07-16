#include<stdio.h>
#include<math.h>
void main()
{
int c=0;
long long int    n,a,b,i,j=0,k;

static long long int l;
printf("Enter the value of N");
scanf("%lld",&n);
k=n;

if(1<n&&n<pow(10,5))
c=1;
if(1<n&&n<pow(10,9))
c=2;
if(1<n&&n<pow(10,100))
c=3;
switch (c)
{
    case 1:
    {
        printf("Case #1");
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
            break;
    }
        case 2:
        {
            printf("Case #2");
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
 break;
        }
            

        case 3:
        {
            printf("Case #3");
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
 break;
        }
            
            
default: {
	break;
}
}
}
 