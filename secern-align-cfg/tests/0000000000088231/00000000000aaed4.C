
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h> 

long powi(long x, unsigned n)
{
    long p = x;
    long r = 1;

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
        int n = 0;
        int y = 0;
        scanf("%d", &n);

        int value = n;
        double r = 0.0;
        while (value > 0) {
            int digit = value % 10;
            value /= 10;

            if (digit == 4){
                int sub = powi(10.0,r);
                n -=sub;
                y +=sub;
            }
            r++;
        }
        printf("Case #%d: %d %d",i,n,y);
    }
}