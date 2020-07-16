#include<stdio.h>
int main()
{
    int T,N[100];
    char p[200][100];
    scanf("%d",&T);
    for(int i=0;i<T;i++)
    {
        scanf("%d",&N[i]);
        scanf("%s",p[i]);
    }
    for(int i=0;i<T;i++)
    {
        for(int j=0;j<2*N[i]-2;j++)
        {
            if(p[j][i]=='S')
            {
                p[j][i]='E';
            }
            else
            {
                p[j][i]='S';
            }
        }
    }
    for(int i=0;i<T;i++)
    {
        printf("Case #%d: ",i+1);
        printf("%s",p[i]);
        printf("\n");
    }
}
    

    