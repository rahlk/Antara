#include<stdio.h>
int main()
{
   int h;
   scanf("%d",&h);
   while(h--)
   {
    int p,q;
    scanf("%d %d",&p,&q);
    if(p==q)
    {
       printf("IMPOSSIBLE");
    }
    else
    printf("POSSIBLE");
    }
}    