#include<stdio.h>
int main()
{
    int b;
    scanf("%d",&b);
    while(b--){
    int m,n;
    scanf("%d %d",&m,&n);
    if(m==n)
    {
        printf("IMPOSSIBLE");
    }
    else 
    printf("POSSIBLE");
    }
}