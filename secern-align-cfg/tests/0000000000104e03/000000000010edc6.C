#include<stdio.h>
int main()
{
    int i;
    scanf("%d",&i);
    while(i--){
        int x ,y;
    scanf("%d%d",&x,&y);
    if(x==y){
        printf("IMPOSSIBLE");
        
    }
    else
    printf("POSSIBLE");
        
    }

    return 0;
}