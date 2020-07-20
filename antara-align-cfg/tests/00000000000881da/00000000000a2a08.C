#include<stdio.h>
int main()
{
    int T,N[100];
    char p[2000];
    scanf("%d",&T);
    for(int i=0;i<T;i++)
    {
        scanf("%d",&N[i]);
        scanf("%s",p);
    }
    for(int i=0;i<T;i++)
    {
        for(int j=0;j<2*N[i]-2;j++)
        {
            if(p[j]=='S')
            {
                p[j]='E';
            }
            else
            {
                p[j]='S';
            }
        }
    }
    for(int i=0;i<T;i++)
    {
        printf("Case #%d: ",T+1);
        for(int j=2*N[i]-3;j>=0;j--)
        {
            printf("%s",p[j]);
        }
        printf("\n");
    }
}
    
        }
        for()
    }
    
    
}