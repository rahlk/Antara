#include<stdio.h>
int main(void)
{
    int T,t;
    scanf("%d",&T);
    for(t=1;t<=T;t++)
    {
        int N,i,j=0;
        scanf("%d",&N);
        char P[2*N-2],ch1='E',ch2='S';
        scanf("%s",P);
        printf("Case #%d: ",t);
        if(P[0]=='E')
        {
            ch1='S';
            ch2='E';
        }
        else
        {
            ch1='E';
            ch2='S';
        }
        if(P[0]!=P[2*N-3])
        {
            for(i=1;i<=N-1;i++)
            printf("%c",ch1);
            for(i=1;i<=N-1;i++)
            printf("%c",ch2);
        }
        else
        {
            for(i=1;i<2*N-3;i++)
            {
                if(ch1==P[i]) j++;
                if(P[i]==ch1&&P[i+1]==ch1)
                break;
            }
            for(i=0;i<j;i++)
            printf("%c",ch1);
            for(i=0;i<N-1;i++)
            printf("%c",ch2);
            for(i=1;i<=N-1-j;i++)
            printf("%c",ch1);
        }
        printf("\n");
    }
    return 0;
}