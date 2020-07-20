#include <stdio.h>

int main()
{
    int t;
    scanf("%d\n",&t);
    for(int i=1;i<=t;i++)
    {
        int n,a,b;
        scanf("%d\n",&n);
        a=n/4;
        b=n-a;
        printf("Case #%d: %d %d\n",i,a,b);
    }
    return 0;
}
