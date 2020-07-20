#include<stdio.h>
int main()
{
    int i;
    scanf("%d",&i);
    while(i--){
    int a,b;
    scanf("%d %d",&a,&b);
    if(a==b)
    {
        printf("IMPOSSIBLE");
    }
    else 
    printf("POSSIBLE");
    }
}