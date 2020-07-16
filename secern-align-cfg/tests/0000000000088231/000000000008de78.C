#include<stdio.h>

int main()
{
int t,o;
scanf("%d", &t);
for(o=1;o<=t;o++)
{
    long long int n,a,t,b,x;
    scanf("%lld", &n);
    a=n;
    x=n;
    t=1;
    while(a!=0)
    {
        b=a%10;
        if(b==4)
        {
           x-=t; 
        }
        t*=10;
        a/=10;
    }
    printf("Case #%d: %lld %lld\n", o,x,n-x);
    
}
return 0;
}