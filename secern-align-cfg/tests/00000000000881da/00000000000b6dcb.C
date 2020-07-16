#include <stdio.h>

char a[50001];
int main(void)
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int n;
        scanf("%d",&n);
        scanf("%s",a);
        printf("Case #%d: ",i);
        for(int j=0;j<=n*2-3;j++)
        {
            if(a[j]=='S')
                printf("E");
            else
                printf("S");
        }
        printf("\n");

    }
}