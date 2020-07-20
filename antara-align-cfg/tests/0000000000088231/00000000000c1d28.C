#include<stdio.h>
int main()
{
    int N,T;
    scanf("%d",&T);
    
    for(int i=0;i<T;i++)
    {
        scanf("%d",&N);
        for(int j=0;j<N;j++)
        {
            for(int k=0;k<N;k++)
            {
                if((j+k==N)&&((j!=N)||(k!=N)))
                  printf("Case #%d: %d %d",i,j,k);
            }
        }    
    }
    return 0;
}