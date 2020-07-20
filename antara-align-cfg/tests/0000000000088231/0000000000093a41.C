#include<stdio.h>
int main()
{
    int t,i,j,k,n;
    scanf("%d",&t);
    
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        for(j=1;j<n;j++)
        {
            for(k=1;k<n;k++)
            {
                if(i+k==n)
                {
                    printf("Case #%d: %d %d",i,j,k);
                    break;
                }
            }
        }
    }
    return 0;
}