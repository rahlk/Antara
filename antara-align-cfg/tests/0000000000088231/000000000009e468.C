#include<stdio.h>
#include<math.h>
int main()
{
    int t,tt;
    scanf("%d",&t);
    while(t--)
    {
        long long int n,x,y,nn;
        scanf("%lld",&n);
        int i,d;
        x=0;
        i=0;
        tt=1;
        nn=n;
        while(n)
        {
            d=n%10;
            if(d>=1 && d<=4)
                d--;
            else if(d>=6 && d<=9)
                d--;
            else if(d==5)
                d=d-2;
            n=n/10;
            x=x+(d*pow(10,i));
            i++;
        }
        y=nn-x;
        if(y==nn)
        {
        	if(y!=0)
            {
            	y--;
            	x++;
			}
        }
        printf("Case #%d:%lld %lld\n",tt,x,y);
        tt++;
    }
    return 0;
}

