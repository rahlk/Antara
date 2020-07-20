#include<stdio.h>
int main()
{
    int i,n,a[100],g,m,b;
    g=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    scanf("%d\n",&a[i]);
    g++;
    }
    for(i=1;i<=g;i++)
    {
        m=a[i]/2;
        b=m+1;
        printf("Case #%d: %d %d",i,m,b);
    }
    return 0;
}