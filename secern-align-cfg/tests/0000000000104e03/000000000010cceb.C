#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&t);
    while(x--){
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