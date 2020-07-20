#include<stdio.h>
int main()
{
    int N,m,r,s,q=0;
    printf("enter m inputs");
    for(int i=1;i<=m;i++)
    {
        scanf("%d",&m);
        printf("enter value of N");
        scanf("%d",&N);
        for(int j=1;j<=10^100;j++)
        {
            q=N%10;
            if(q=4)
            break;
            N=N/10;
        }
        if(N>=4)
        {
            r=N/4;
            s=N-r;
            if(N=r+s)
            printf("value of %d",r);
            printf("value of %d",s);
        }
        
    }
}
