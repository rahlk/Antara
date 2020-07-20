#include<stdio.h>
intmain()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int m,n;
        scanf("%d%d",&m,&n);
        if(m==n)
        {
            printf("IMPOSSIBLE");
        }
        else
        printf("POSSIBLE");
    }
}