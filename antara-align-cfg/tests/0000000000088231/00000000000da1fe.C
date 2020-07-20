#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int Test,i,nDigits,j,r;
    scanf("%d",&Test);

    unsigned long long int n,sum=0,dub;

    for(i=1;i<=Test;i++){
        scanf("%llu",&n);


        dub = n;
        nDigits = floor(log10(abs(n))) + 1;
        for(j=1;j<=nDigits;j++){
            r = dub % 10;
            if(r==4)
                sum = sum + (int)round(pow(10,j-1));

            dub = dub / 10;
        }

        printf("Case #%d: %llu %llu\n",i,sum,n-sum);
        sum=0;

    }

}