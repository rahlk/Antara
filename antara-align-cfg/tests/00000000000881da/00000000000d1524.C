#include<stdio.h>
#include<string.h>

int main()
{
    int N,T;
    scanf("%d",&T);
    for(int l=0;l<T;l++)
    {
        scanf("%d",&N);
        char P[(2*N)-2];
        scanf("%s",P);
        for(int k=0;P[k]!='\0';k++)
        {
            if(P[k]=='E')P[k]='S';
            else if(P[k]=='S')P[k]='E';

        }
        printf("Case #%d: %s\n",l+1,P);

    }
    return 0;
}