#include<stdio.h>
#include<string.h>
int main()
{
    int t,N,i,j,l,c=0;
    scanf("%d",&t);
    if(t<=100&&t>=1)
    {
        for(i=1;i<=t;i++)
        {
            scanf("%d",&N);
            l=(2*N)-2;
            char P[l];
            scanf("%s",&P);
            for(int k=0;k<strlen(P);k++)
            {
                if(P[k]=='E')
                    c++;
            }
            if((c==N-1)&&((strlen(P)-c)==N-1))
            {
                for(j=0;j<strlen(P);j++)
                {
                    if(P[j]=='E')
                        P[j]='S';
                    else
                        P[j]='E';
                }
                printf("%s\n",&P);
            }
            c=0;
        }
    }
}