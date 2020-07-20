#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(void)
{
    long long int h,t,j,n,i,a,b,k,w,sum;
    long long int y[100],l[100];
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {   
        scanf("%lld",&n);
        w=n;
        j = 0;
        while (w != 0)
        {
            y[j] = w%10;
            j++;
            w = w/10;
        }
        h=0;
        for(k=0;k<j;k++)
        {
            if(y[k] == 4)
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