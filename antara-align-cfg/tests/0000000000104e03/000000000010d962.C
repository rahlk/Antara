#include<stdio.h>
int main()
{
    int k;
    scanf("%d",&k);
    while(k--){
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
