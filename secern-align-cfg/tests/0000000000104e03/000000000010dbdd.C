#include<stdio.h>
int main()
{
    int s;
    scanf("%d",&s);
    while(s--){
    int i,j;
    scanf("%d %d",&i,&j);
    if(i==j)
    {
        printf("IMPOSSIBLE");
    }
    else 
    printf("POSSIBLE");
    }
}