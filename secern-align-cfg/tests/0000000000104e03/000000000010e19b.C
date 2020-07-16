#include<stdio.h>
int main()
{
    int q;
    scanf("%d",&q);
    while(q--){
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