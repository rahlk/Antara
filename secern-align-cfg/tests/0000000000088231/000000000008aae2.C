#include<stdio.h>
int main()
{
    int T,i,j,c,k=0;
    scanf("%d",&T);
    int N[T];
    for(i=0;i<T;i++)
    {
    scanf("%d",&N[i]);
    }
    
    for(i=0;i<T;i++)
    {
        for(j=0;j<=N[i];j++)
        {
            c=k+j;
            if(c==N[i])
            {
                printf("Case #%d: %d %d\n",(i+1),k,j);
            }
            k=j+1;
            
        }
    }
    
    
}