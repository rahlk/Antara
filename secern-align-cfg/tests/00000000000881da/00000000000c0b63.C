#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    int T,N,i,j;
    char *P;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%d",&N);
        getchar();
        P=(char*)malloc((2*N-1)*sizeof(char));
        fgets(P,2*N-1,stdin);
        for(j=0;j<2*N-2;j++)
            if(P[j]=='E')
                P[j]='S';
            else
                P[j]='E';
        printf("Case #%d: %s",i+1,P);
        if(i<T-1)
            printf("\n");
    }
}