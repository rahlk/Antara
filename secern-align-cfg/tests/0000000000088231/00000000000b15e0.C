#include <stdio.h>

int main()
{
long int t,c1,c2;
int i,j,k,ar[20],b[20];
long int n;
scanf("%ld ",&t);
for(i=1;i<=t;i++)
{
j=0;
scanf("%ld ",&n);
while(n!=0)
{
if(n%10 != 4)
{ar[j]=n%10;
b[j]=0;}
else
{
ar[j]=2;
b[j]=2;
}
n=n/10;
j++;
}
j=j-1;c1=0;c2=0;
for(k=j;k>=0;k--)
{c1=10*c1+ar[k];}
printf("Case #i:%ld ",c1);
for(k=j;k>=0;k--)
{c2=10*c2+b[k];}
printf("%ld \n",c2);
}
return 0;
}