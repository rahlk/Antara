#include<stdio.h>
int main()
{
    int t,i=1;
    scanf("%d",&t);
    while(t--)
    {
        int n,a,b;
        scanf("%d",&n);
        a=n/2;
        b=n-a;
        printf("Case #%d: %d %d",a,b);
        i++;
    }
}