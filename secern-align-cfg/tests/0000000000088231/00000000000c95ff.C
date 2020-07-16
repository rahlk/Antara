#include<stdio.h>
void main()
{
int t,n,a,b;
scanf("%d",&t);
scanf("%d",&n);
int i,j;
for(i=1,j=2;i<n,j<n;i++,j++)
    {
        a=i;
        b=j;
        if((a!=4 && b!=4) && (a+b)==n)
        printf("%d %d",a,b);
    }
}