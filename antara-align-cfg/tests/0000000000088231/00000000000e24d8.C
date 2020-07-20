#include<stdio.h>
#include<math.h>
int main(void)
{
    long long int h,t,j,n,i,a,b,y[10],k,l[10],w,sum;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {   
        scanf("%lld",&n);
        w=n;
        while (w != 0)
        {
            j = 0;
            y[j] = w % 10;
            j++;
            w = w / 10;
        }
        h=0;
        for(k=0;k<j;k++)
        {
            if(y[k]==4)
            {
                l[h] = k;
                h++;
            }
        }
        sum=0;
        for(k=0;k<h;k++)
        {
            sum=sum+pow(10,l[k]);
        }
        printf("Case #%lld: %lld %lld\n",i,sum,n-sum);
    }
    return 0;
}