#include<stdio.h>
int main()
{
    int q;
    scanf("%d",&q);
    while(q--){
    int t,s;
    scanf("%d %d",&t,&s);
    if(t==s)
    {
        printf("IMPOSSIBLE");
    }
    else 
    printf("POSSIBLE");
    }
}