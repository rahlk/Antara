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
        int i;
        printf("Case #%d: ",j);
        for(i=0;i<(2*n-2);i++)
        {
            if(st[i]=='S')
            printf("E");
            else if(st[i]=='E')
            printf("S");
        }
        printf("\n");
    }
}