#include<stdio.h>
int main()
{
    int a;
        scanf("%d",&a);
    int p,q;
        scanf("%d %d",&p,&q);
    while(a--)
    {
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