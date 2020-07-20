#include<stdio.h>
int main()
{
    int u;
    scanf("%d",&u);
    while(u--){
    int m,j;
    scanf("%d %d",&m,&j);
    if(m==j)
    {
        printf("IMPOSSIBLE");
    }
    else 
    printf("POSSIBLE");
    }
}