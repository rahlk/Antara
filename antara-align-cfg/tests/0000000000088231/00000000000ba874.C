#include<stdio.h>
int main()
{
    int n,temp,i,a,b;
    scanf("%d",&n);
    int ary[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ary[i]);
    }
    for(i=0;i<=n;i++)
    {
    a = ary[i]/2;
    b = ary[i]-a;
    printf("Case #%d: %d %d",i,a,b);
    }
    return 0;
}
