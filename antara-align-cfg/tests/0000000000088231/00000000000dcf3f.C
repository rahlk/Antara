#include<stdio.h>
int main()
{
    int t,i,n;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        n=n/2;
        printf("case #%d: %d %d",i+1,n,n);
        printf("\n");
        
    }
    return 0;
}