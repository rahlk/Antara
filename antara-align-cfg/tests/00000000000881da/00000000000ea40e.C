#include<stdio.h>
#include<string.h>
void main()
{
    int T,N,len,k=1,i;
    scanf("%d",&T);
    while(T>0)
    {
        scanf("%d",&N);
        char P[2*N-2],res[2*N-2];
        scanf("%s",P);
        len = strlen(P);
        if(P[0]=='E')
            res[0]='S';
        if(P[0]=='S')
            res[0]='E';
        for(i=1;i<len;i++)
        {
            if(P[i]=='E'&&P[i-1]=='E'&&P[i+1]=='S')
                res[i]='E';
            else if(P[i]=='S'&&P[i-1]=='E'&&P[i+1]=='S')
                res[i]='E';
            else if(P[i]=='S'&&P[i-1]=='S'&&P[i+1]=='S')
                res[i]='E';
            else if(P[i]=='S'&&P[i-1]=='S'&&P[i+1]=='E')
                res[i]='E';
            else if(P[i]=='E'&&P[i-1]=='S'&&P[i+1]=='S')
                res[i]='S';
            else if(P[i]=='S'&&P[i-1]=='E'&&P[i+1]=='E')
                res[i]='E';
            else if(P[i]=='E'&&P[i-1]=='E'&&P[i+1]=='E')
                res[i]='S';
            else if(P[i]=='E'&&P[i-1]=='S'&&P[i+1]=='E')
                res[i]='S';
            else if(P[i]=='E'&&P[i-1]=='S'&&P[i+1]=='\0')
                res[i]='S';
            else if(P[i]=='S'&&P[i-1]=='E'&&P[i+1]=='\0')
                res[i]='E';
        }
        res[i]='\0';
        printf("Case #%d: %s\n",k++,res);
        --T;
    }
}
