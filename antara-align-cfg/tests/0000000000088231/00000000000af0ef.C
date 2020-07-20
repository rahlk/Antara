#include <stdio.h>

int main()
{
int t;
int i,j,k,ar[20],b[20];
long int n;
scanf("%d ",&t);
for(i=0;i<t;i++)
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
j=j-1;
for(k=j;k>=0;k--)
{printf("%d",ar[k]);}
printf(" ");
for(k=j;k>=0;k--)
{printf("%d",b[k]);}
printf("\n");
}
return 0;
}