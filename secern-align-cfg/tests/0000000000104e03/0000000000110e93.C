#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    while(a--)
    {
        int n,m;
        scanf("%d %d",&n,&m);
        if(n==m)
        {
            printf("IMPOSSIBLE");
        }
        else
        {
            printf("POSSIBLE");
        }
        
        
    }
}