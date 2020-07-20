#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int x,i,n_digit,j,y;
    scanf("%d",&x);

    unsigned long long int q,sum=0,duplicacy_att;
    for(i=1;i<=x;i++){
        scanf("%llu",&q);
    
     

        duplicacy_att = q;
        n_digit = floor(log10(abs(q))) + 1;
        for(j=1;j<=n_digits;j++){
            y = duplicacy_att % 10;
            if(y==4)
                sum = sum + (int)round(pow(10,j-1));

            duplicacy_att = duplicacy_att / 10;
        }

        printf("Case #%d: %llu %llu\n",i,sum,q-sum);
        sum=0;

    }

}