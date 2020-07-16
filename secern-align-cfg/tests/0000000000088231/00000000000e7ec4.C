#include<stdio.h>
int main()
{
    int t,s,n,i;
    scanf("%d",&t);
    t<100;
    for(s=0;s<t;s++)
    {
        scanf("%d",&n);
       if( n<100000)
       {
        for(i=1;i<n;i++)
        {
            printf("\nCase #%d: %d %d",s+1,i,n-i);
            break;
        }
       }
    }
    return 0;
}