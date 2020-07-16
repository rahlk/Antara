#include<stdio.h>
int main()
{
    int p;
    scanf("%d",&p);
    while(p--)
    {
        int q,r;
        scanf("%d %d",&q,&r);
        if(q==r)
        {
            printf("IMPOSSIBLE");
        }
        else
        printf("POSSIBLE");
    }
}