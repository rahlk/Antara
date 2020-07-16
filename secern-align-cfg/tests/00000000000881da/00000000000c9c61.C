#include<string.h>
#include<stdio.h>
void main()
{
    char P[2000],my[2000];
    int T,i,N,j,len;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%d",&N);
        fflush(stdin);
        gets(P);
        len=strlen(P);
        if(len!=(2*N-2))
        {
            continue;
        }
        for(j=0;P[j]!='\0';j++)
        {
            if(P[j]=='S')
            my[j]='E';
            else if(P[j]=='E')
            my[j]='S';
            else
            {
                my[0]='\0';
                break;
            }
        }
        printf("Case #%d: %s\n",i+1,my);
    }
    exit(0);
}
