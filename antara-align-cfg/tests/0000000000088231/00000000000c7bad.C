#include<stdio.h>
#include <math.h>

int main()
{
int i,j,k,no;
int t,n,a,b;
scanf("%d",&t);
for(i=0;i<t;i++)
{
 scanf("%d",&n);
 no=n;
 a=round(n/2);
 b=n-a;
printf("Case #%d: %d %d\n",i+1,a,b);}
exit(0);
}
