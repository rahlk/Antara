#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
int main()
{
    int T,i;
    scanf("%d",&T);
    while(T--)
    {
        int N;
        scanf("%d",&N);
        char*p=(char*)malloc(sizeof(char)*(2*N-1));
        char*q=(char*)malloc(sizeof(char)*(2*N-1));
        gets(p);
        __fpurge(stdin);
        for(i=0;*(p+i)!=0;i++)
        {
            if(*(p+i)=='S')
            *(q+i)='E';
            else
            *(q+i)='S';
        }
        *(q+i)='\0';
        printf("CASE #%d",T);
        for(i=0;*(q+i)!=0;i++)
        printf("%c",*(q+i));
    }
    return 0;
}