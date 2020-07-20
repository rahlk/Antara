#include<stdio.h>
int main()
{
    int T,res[100],count=0;
    long int k[100],c[100][100000],d[100][100000],N[100];
    scanf("%d",&T);
    for(int k=0;k<T;k++)
    {
        scanf("%ld",&N[k]);
        scanf("%ld",&K[k]);
    for(int i=0;i<N[k];i++)
    {
        scanf("%ld",&c[k][i]);
        
    }
    for(int i=0;i<N[k];i++)
    {
        scanf("%ld",&d[k][i]);
        
    }
        
    }
    for(int i=0;i<T;i++)
    {
        for(int j=0;j<N[i];j++)
        {
            if(d[i][j]-c[i][j]<=K)
            {
                count++;
            }
            
        }
    }
    for(int i=0;i<T;i++)
    {
        printf("Case #%d: %d\n",i+1,count);
    }
    
}