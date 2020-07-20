#include<stdio.h>
int main()
{
    int s;
    scanf("%d",&s);
    while(s--){
    int i,j;
    scanf("%d %d",&i,&j);
    if(i==1 && j==1 && i-j==1-1 && i+j==1+1)
    {
        printf("IMPOSSIBLE");
    }
    else 
    printf("POSSIBLE");
    }
}