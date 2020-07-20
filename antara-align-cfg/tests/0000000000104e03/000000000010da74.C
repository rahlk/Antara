#include<stdio.h>
#include<conio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    int x,y;
    scanf("%d %d",&x,&y);
    if(x==y)
    {
        printf("IMPOSSIBLE");
    }
    else 
    printf("POSSIBLE");
    }
    return 0;
}