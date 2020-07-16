#include <stdio.h>

int main()
{
    int i,t;
    scanf("%d",&t);
    for (i=0;i<t;i++) {
        long long n,x,y;
        scanf("%lli",&n);
        x=(n/4);
        y=(x%4)/2;
        x=(x*3)+y;
        printf("Case #%d: %d %d",i+1,x,n-x);
    }
    return 0;
}