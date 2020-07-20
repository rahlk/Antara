#include<stdio.h>
int main()
{
    int T,flag=0,i,j,k,N[100];
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%d",&N[i]);
    }
    
    for(i=0;i<T;i++)
    {
        for(j=0;j<N[i];j++)
        {
            for(k=0;k<N[i];k++)
            {
                if((j+k==N[i])&&((j!=N[i])||(k!=N[i])))
                {
                  flag++;
                  printf("Case #%d: %d %d",i+1,j,k);
                  break;
                }
            }
            if(flag!=0)
              break;
        }    
    }
    return 0;
}