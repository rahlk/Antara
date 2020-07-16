#include<stdio.h>
int main()
{
    int N,T,flag=0,i,j,k;
    scanf("%d",&T);
    
    for(i=0;i<T;i++)
    {
        scanf("%d",&N);
        for(j=0;j<N;j++)
        {
            for(k=0;k<N;k++)
            {
                if((j+k==N)&&((j!=N)||(k!=N)))
                {
                  flag++;
                  printf("Case #%d: %d %d",i,j,k);
                  break;
                }
            }
            if(flag!=0)
              break;
        }    
    }
    return 0;
}