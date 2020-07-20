#include<stdio.h>
#include<string.h>

int main()
{
    int t,cases=1;
    long long int n,a,b;
    char a1[30],b1[30];
    scanf("%d",&t);
    while(cases<=t)
    {
        scanf("%lld",&n);
        a=n/2;
        while(1)
        {
            b=n-a;
            sprintf(a1,"%lld",a);
            sprintf(b1,"%lld",b);
            if((strchr(a1,'4')==NULL)&&(strchr(b1,'4')==NULL))
            {
                printf("Case #%d: %lld %lld\n",cases,a,b);
                break;
            }
            else
            {
                a=a/2;
            }
        }
        cases++;
    }
    return 0;
}