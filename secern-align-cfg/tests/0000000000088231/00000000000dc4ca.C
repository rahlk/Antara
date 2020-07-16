#include<stdio.h>
void main()
{
    int t,i,x=0,N;
    scanf("%d",&t);
    while(t--)
    {
        x++;
        scanf("%d",&N);
        for(i=1;i<=N;i++)
        {
            printf("Case #%d: ",x);
            if(i==N)
            printf("\n");
            if(i!=N)
            {
                printf("%d %d\n",i,N-i);
                break;
            }
            
        }
        
    }
    
    
}