#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int N;
    scanf("%d" , &N);
    for(int j = 1 ; j<=N ; j++)
    {
        long long int a;
        scanf("%lld" , &a);
        long long int b=a,c=a;
        long long int d = a;
        for(int i = 0 ; d > 0 ; i++)
        {
            if(d%10 == 4)
            {
                b=b-pow(10,i);
            }
            d = d/10;
        }
        c = a - b;
        if(j!=N)
            printf("Case #%d: %lld %lld\n" , j , b , c);
        else
            printf("Case #%d: %lld %lld" , j , b , c);
    }
}