#include "stdio.h"
main()
{
    int tc,i,j;
    int n,c=1;
    int ar[2];
    scanf("%d",&tc);
    while(c!=(tc+1))
    {
        scanf("%d",&n);
        for(i=1;i<n;i++)
        {
            for(j=1;j<n;j++)
            {
                if(i+j==n)
                {
                    ar[0]=i;
                    ar[1]=j;
                    break;
                    
                }
            }
            if(i+j==n)
                break;
        }
        printf("Case #%d: %d %d\n",c,ar[0],ar[1]);
        c++;
        
    }
}