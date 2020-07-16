#include<stdio.h>
#include<string.h>

void main()
{
    int T,t,N,i;
    char P[100000],A[100000];
    scanf("%d",&T);
    t=T;
    while(T--)
    {
        scanf("%d",&N);

        scanf("%s",&P);
        
        for(i=0;P[i]!='\0';i++)
            {
                if(P[i]=='E')
                A[i]='S';
                
                if(P[i]=='S')
                A[i]='E';    
            }
        A[i]='\0';
        printf("Case #%d: %s\n",t-T,A); 
    }
}