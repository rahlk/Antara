#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int x,a=n,b=0,i=1;
        while(1)
        {
            if(n==0)
                break;
            x=n%10;
            if(x==4)
            {
                b=i*3;
                a=a-i;
            }
            n=n/10;
            i=i*10;
        }
        printf("Case #t: %d %d",a,b);
    }
    return 0;
}