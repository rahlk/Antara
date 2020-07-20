#include<stdio.h>
int main()
{
    int t,s,n,i;
    scanf("%d",&t);
    for(s=0;s<t;s++)
    {
        scanf("%d",&n);
        for(i=1;i<n,i++)
        {
            printf("\nCase #%d: %d %d",s+1,i,n-i);
            break;
        }
    }
    return 0;
}