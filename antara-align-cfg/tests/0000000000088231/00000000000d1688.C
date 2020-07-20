#include<stdio.h>

void ans(int n,int q)
{
    a=n/2;
    printf("Case #%d: %d %d",q,a,a);
}

void main()
{
    int t,i,a[100000];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<t;i++)
    {
        ans(a[i],i+1);
    }
    
    
    
    
}