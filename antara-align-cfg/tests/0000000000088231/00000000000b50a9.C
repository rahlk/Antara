#include<stdio.h>

main()
{
    long long int n, a, b, weight, at, bt;
    int ti, t, digit;
    scanf("%d",&ti);
    for(t=0;t<ti;t++)
    {
        scanf("%lld",&n);
        at = n;
        weight = 1;
        bt = 0;
        while(at != 0)
        {
            digit = at % 10;
            if(digit == 4)
            {
                bt += 1*weight;
            }
            weight *= 10;
            at /= 10;
        }
        printf("Case #%d: %lld %lld", t+1, n-bt, bt);
        printf("\n");
    }
}