#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            sum=i+j;

            if(sum == n)
            {
                printf("%d%d\n",i,j);
                break;
            }
        }
        if(sum==n)
           {
               break;
           }
    }

    return 0;
}
