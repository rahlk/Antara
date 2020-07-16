#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int m,n;
        scanf("%d%d",&m,&n);
        if(m==n)
        {printf("impossible");}
        else
        printf("possible");
    }
}