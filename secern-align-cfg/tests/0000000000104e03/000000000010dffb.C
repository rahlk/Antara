#include<stdio.h>
int main()
{
    int l;
    scanf("%d",&l);
    while(l--){
    int m,k;
    scanf("%d %d",&m,&k);
    if(m==k)
    {
        printf("IMPOSSIBLE");
    }
    else 
    printf("POSSIBLE");
    }
}