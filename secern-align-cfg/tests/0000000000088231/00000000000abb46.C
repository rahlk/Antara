#include "stdio.h"
main()
{
    int tc,i,j;
    int n,c=1;
    int ar[2];
    int temp1,temp2,flag=0;
    scanf("%d",&tc);
    while(c!=(tc+1))
    {
        scanf("%d",&n);
        for(i=1;i<n;i++)
        {
            for(j=1;j<n;j++)
            {
                flag=0;
                if(i+j==n)
                {
                    
                    while(temp1!=0)
                    {
                        if(temp1%10==4)
                        {
                            flag=1;
                            break;
                            
                        }
                        temp1=temp1/10;
                        
                        
                    }
                    while(temp2!=0)
                    {
                        if(temp2%10==4)
                        {
                            flag=1;
                            break;
                        }
                        temp2=temp2/10;
                        
                    }
                    if(i+j==n && flag==0)
                    {
                        ar[0]=i;
                        ar[1]=j;
                        break;
                    }
                    
                }
            }
        }
        printf("Case #%d: %d %d\n",c,ar[0],ar[1]);
        c++;
        
    }
}