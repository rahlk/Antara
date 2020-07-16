#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d",&t);
    int j;
    for(j=1;j<=t;j++)
    {
        int n;
        scanf("%d",&n);
        char st[2*n-2];
        scanf("%s",st);
        printf("%s\n",st);
        char newSt[2*n-2];
        int i;
        for(i=0;i<(2*n-2);i++)
            {
            if(st[i]=='S')
            newSt[i]='E';
            else if(st[i]=='E')
            newSt[i]='S';
            }
        printf("Case #%d: %s\n",j,newSt);
    }
}