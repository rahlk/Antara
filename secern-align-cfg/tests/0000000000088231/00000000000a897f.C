#include <stdio.h>
#include <stdlib.h>

int check(long long int a)
{
    while(a>0)
    {
        if(a%10 == 4)
            return 0;
        a = a/10;
    }
    return 1;
}

int main()
{
    int N;
    scanf("%d" , &N);
    for(int j = 1 ; j<=N ; j++)
    {
        long long int a;
        scanf("%lld" , &a);
        long long int b,c;
        int d = 1;
        for(long long int i = 1 ; d == 1 ; i = i + 1)
        {
            if(check(i) && check(a-i))
            {
                b = i;
                c = a - i;
                d = 0;
            }
        }
        if(j!=N)
            printf("Case #%d: %lld %lld\n" , j , b , c);
        else
            printf("Case #%d: %lld %lld" , j , b , c);
    }
}