#include<stdio.h>
int main()
{
    int p;
    scanf("%d",&p);
    while(p--){
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