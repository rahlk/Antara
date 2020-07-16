#include<stdio.h>
int main()
{
    int t,n,p=1,a=0,b=0,rem;
    scanf("%d",&t);
    for (int i=1;i<=t;i++)
    {
        scanf("%d",&n);
        while(n>0)
        {
            rem=n%10;
            if(rem==4)
            {
                a=2*p+a;
                b=2*p+b;
                p=p*10;
                
            }
            else
            {
                b=rem*p+b;
                p=p*10;
            }
            n=n/10;
        }
         printf("Case #%d: %d %d",i,a,b);
    }
    return 0;
}