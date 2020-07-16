#include <stdio.h>

int main()
{
    int T,n;
    scanf("%d",&T);
    char a[100000];
    while(T--)
    {
        scanf("%d",&n);
        scanf("%s",a);
        int i;
        for(i=0;i<(2*n-2);i++)
        {
            if(a[i]=='E')
                printf("S");
            else
                printf("E");
        }
        printf("\n");
    }
    return 0;
}
