#include<stdio.h>
int main()
{
    int i,l,k,m;
    scanf("%d",&l);
    for(i=1;i<=l;i++)
    {
        scanf("%d %d",&k,&m);
        if(k!=m)
        {
            printf("Case #%d: POSSIBLE",i);
            printf("\n");
        }
        else
        {
            printf("Case #%d: IMPOSSIBLE",i);
            printf("\n");
        }
    }
    return 0;
}