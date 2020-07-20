#include<stdio.h>
int main()
{ int t,i,b,n,j;
char a[20];
scanf("%d",&t);
for(i=0;i!=t;i++)
{
    scanf("%d",&b);
    n=2*n-2;
    scanf("%s",a);
    for(j=n-1;j>=0;j--)
    printf("%c",a[j]);
}
return 0;
}