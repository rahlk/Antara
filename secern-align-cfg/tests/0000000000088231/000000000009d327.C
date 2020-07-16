#include<stdio.h>

int main()
{
    int t,j;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%d",&j);
        int f;
        f= j - j/4;
        printf("Case #%d: %d %d",i,f,j/4);
    }
    return 0;
}
