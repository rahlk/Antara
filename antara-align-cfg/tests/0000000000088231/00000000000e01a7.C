#include<stdio.h>
int main()
{
    int t,i,n;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        if(n%2==0)
        {
            n=n/2;
            printf("case #%d: %d %d",i+1,n,n);
            printf("\n");
        }
        else
        {
            n=n/2;
            printf("case #%d: %d %d",i+1,n+1,n);
            printf("\n");
        }
    }
}