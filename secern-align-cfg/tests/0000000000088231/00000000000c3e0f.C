#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,t,no_of_digits,j,r;
    unsigned long long int n,same,sum=0;

    scanf("%d",&t);

    for(i=1;i<=t;i++)
    {
       scanf("%llu",&n);
       same=n;
       no_of_digits=floor(log10(abs(n)))+1;
       for(j=1;j<=no_of_digits;j++)
       {
          r=same%10;
          if(r==4)
            sum+=(int)round(pow(10,j-1));
           same=same/10;
       }
       printf("Case #%d: %llu %dd\n",i,sum,n-sum);
       sum=0;

    }
    return 0;
}
