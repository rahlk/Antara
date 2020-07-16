#include<stdio.h>
int main()
{
    int s;
    scanf("%d",&s);
    while(s--)
    {
    int n,r;
    scanf("%d %d",&n,&r);
    if(n==r)
    {
        printf("IMPOSSIBLE");
    }
    else 
    printf("POSSIBLE");
    }
}