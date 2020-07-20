#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,sum=0,k,a[50],l=0;
    scanf("%d",&n);
   for(k=0;k<n;k++)
    {
        scanf("%d",&a[k]);
        for(i=1;i<=a[k];i++)
    {
        for(j=i;j<=a[k];j++)
        {
            sum=i+j;

            if(sum == a[k])
            { l++;
                printf(" Case #%d: %d%d\n",l,i,j);
                break;
            }
        }
        if(sum==a[k])
           {
               break;
           }
    }
   }

    return 0;
}

