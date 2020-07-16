#include<stdio.h>
int check(int i,int j)
{
    
    int rem,sum=0;
    while(i>0)
    {
        rem=i%10;
        if(rem==4)
        return 0;
        else
        {
           i=i/10;
        }
        
    
    }
    
    while(j>0)
    {
        rem=j%10;
        if(rem==4)
        return 0;
        else
        {
           j=j/10;
        }
        
    
    }
    return 1;
}
main()
{
    int t,n,i,j;
    scanf("%d",&t);
    while(t>0)
    {
        scanf("%d",&n);
        for(i=1,j=n-1;i<j;i++,j--)
        {
            if(i+j==n&&check(i,j))
            {
                printf("%d %d",i,j);
                break;
            }
        }
        t--;
    }
}
