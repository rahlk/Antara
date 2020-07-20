#include<stdio.h>
void main()
{
    long t,j;
    int i;
    long n[100];
    int has4();
    
    scanf("%ld",&t);
    for(i=0;i<t;i++)
        scanf("%ld",&n[i]);
    for(i=0;i<n;i++)
    {
        for(j=1;j<n+1;j++)
        {
            if(has4(i)&&has4(n[j]-i))
            {
                printf("Case #%d: %d %d",i+1,j,n[i]-j);
                break;
            }
        }
    }
}
int has4(long n)
{
    int d;
    while(n!=0)
    {
        d=n%10;
        if(d==4)
            return 0;
        n=n/10;
    }
    return 1;
}
