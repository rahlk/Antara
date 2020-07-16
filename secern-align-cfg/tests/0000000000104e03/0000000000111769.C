#include<stdio.h>
int main()
{
    int a;
        scanf("%d",&a);
    while(a--)
    {
        int p,q;
         scanf("%d %d",&p,&q);
        if(p==q)
        {
         printf("IMPOSSIBLE");
        }
        else 
        {
         printf("POSSIBLE");
        }
    }
}