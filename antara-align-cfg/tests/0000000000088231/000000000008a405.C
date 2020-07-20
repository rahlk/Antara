#include <stdio.h>
int main()
{
    int t,p=1;
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
                a=a-i;
                b=b+i;
            }
            n=n/10;
            i=i*10;
        }
        printf("Case #%d: %d %d\n",p++,a,b);
    }
    return 0;
}