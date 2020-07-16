
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h> 

unsigned long long powi(unsigned long long x, unsigned n)
{
    unsigned long long p = x;
    unsigned long long r = 1;

    while (n > 0)
    {
        if (n % 2 == 1)
            r *= p;
        p *= p;
        n /= 2;
    }

    return(r);
}

int main()
{
    int testcases;
    scanf("%d", &testcases);

    for (int i = 1; i <= testcases; i++){
        unsigned long long n = 0;
        unsigned long long y = 0;
        scanf("%d", &n);

        unsigned long long value = n;
        double r = 0.0;
        while (value > 0) {
            int digit = value % 10;
            value /= 10;

            if (digit == 4){
                unsigned long long sub = powi(10.0,r);
                n -=sub;
                y +=sub;
            }
            r++;
        }
        printf("Case #%d: %d %d\n",i,n,y);
    }
}