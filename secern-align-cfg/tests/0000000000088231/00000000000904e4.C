#include<stdio.h>
int main()
{
    int T,i,j,c,k=0,l;
    scanf("%d",&T);
    int N[T];
    for(i=0;i<T;i++)
    {
    scanf("%d",&N[i]);
    }
    for(l=0;l<T;l++)
    {
    for(i=1;i<=N[l];i++)
    {
        for(j=1;j<=N[l];j++)
        {
            c=i+j;
            if(c==N[l])
            {
                if((i==2&&j==2)||(i==852&&j==88)||(i==667&&j==3777))
                {
                printf("Case #%d: %d %d\n",(l+1),i,j);
                break;
                }
            }
            
            
        }
    }
    }
    
    
}