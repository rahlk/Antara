#include <stdio.h>
#include <stdlib.h>

void check(long long int *a , long long int *b)
{
    long long int c = *a;
    long long int d = *b;
    long long int flag = 0;
    while(flag == 0 && c>0)
    {
        if(c%10 == 4)
        {
            flag = 1;
            *a = *a - 1;
            *b = *b + 1;
        }
        else
            c = c/10;
    }
    if(flag == 1)
    {
        check(a,b);
    }
    else
    {
        while(flag == 0 && d>0)
        {
            if(d%10 == 4)
            {
                flag = 1;
                *a = *a - 1;
                *b = *b + 1;
            }
            else
                d = d/10;
        }
        if(flag == 1)
        {
            check(a,b);
        }
    }
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
        long long int d = 1;
        b = a;
        long long int i;
        for(i = 1 ; d == 1 ; i = i * 10)
        {
            if(b%4==0)
                d = 0;
            else
                b=b/10;
        }
        b = b*(i/10)-1;
        c = a - b;
        check(&b , &c);
        if(j!=N)
            printf("Case #%d: %lld %lld\n" , j , b , c);
        else
            printf("Case #%d: %lld %lld" , j , b , c);
    }
}