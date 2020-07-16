#include <stdio.h>
#include <string.h>
int main()
{
    int t,n,i,j;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        int x=n*2-2;
        char path[x];
        scanf("%s",path);
        printf("Case #%d: ",i);
        for(j=0;j<x;j++)
        {
            if(path[j]=='S')
                printf("E");
            else
                printf("S");
        }
        printf("\n");
        
    }
}