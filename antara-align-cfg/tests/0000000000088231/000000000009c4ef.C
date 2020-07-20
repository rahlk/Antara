#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n,x,y,nn;
        scanf("%lld",&n);
        int i,d;
        x=0;
        i=0;
        nn=n;
        while(n)
        {
            d=n%10;
            if(d==4)
                d--;
            n=n/10;
            x=x+(d*pow(10,i));
            i++;
        }
        y=nn-x;
        
        printf("%lld %lld\n",x,y);
    }
    return 0;
}
