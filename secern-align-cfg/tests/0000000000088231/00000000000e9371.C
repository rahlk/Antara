#include<stdio.h>
int main()
{
    long n;
    int t,s,i;
    scanf("%d",&t);
    t<100;
    for(s=0;s<t;s++)
    {
        scanf("%ld",&n);
       //if( n<100000)
       {
        for(i=1;i<n;i++)
        {
            printf("\nCase #%d: %d %ld",s+1,i,n-i);
            break;
        }
       }
    }
    return 0;
}