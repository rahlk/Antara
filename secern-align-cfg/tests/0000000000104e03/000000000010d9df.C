#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    while(t--){
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