#include <stdio.h>
int main()
{
    int T,N,i,j;
    char P[50000],Q[50000];
    scanf("%d",&T);
    for(j=0;j<T;j++)
    {   
        scanf("%d",&N);
        scanf("%s",&P[0]);
        for(i=0;i<2*N-2;i++)
        {   if(P[i] == 'S')
               Q[i] = 'E';
            else if(P[i] == 'E')
                Q[i] = 'S';
        }
        printf("Case #%d: ",j+1);
        for(i=0;i<2*N-2;i++)
            printf("%c",Q[i]);
        printf("\n");
    }
    return 0;
}