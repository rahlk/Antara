#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,j=1;
    scanf("%d",&t);
    while(t--)
    {
        int n,x,y,t=0,sum=0,a=1;
        scanf("%d",&n);
        x=n;
        while(x>0)
        {
            y=x%10;
            if(y==4)
            {
                sum=sum+a;
            }
            x=x/10;
            t++;
            a=a*10;
        }
        printf("Case #%d: %d %d\n",j,sum,n-sum);
        j++;
    }
}
