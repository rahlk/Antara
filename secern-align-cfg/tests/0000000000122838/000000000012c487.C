#include<stdio.h>
int main()
{
    int T,res[100],count[100];
    long int K[100],c[100][100],d[100][100],N[100];
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
    {count[i]=0;
        for(int l=0;l<N[i];l++)
        {for(int j=0;j<N[i];j++)
        {
            if(d[i][l]-c[i][j]<=K[i] && d[i][l]-c[i][j]>=0  && d[i][l]!=0 && c[i][l]!=0)
            {
                count[i]++;
            }
            
        }}
    }
    for(int i=0;i<T;i++)
    {
        printf("Case #%d: %d\n",i+1,count[i]);
    }
    
}