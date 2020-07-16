#include <stdio.h>

long contains(int n)
{
    long r = 0, d = 1, aux;
    while((aux = n / d) > 0) {
        if(aux % 10 == 4)
            r += d;
        d *= 10;
    }
        
    return r;
}

int main(int argc, char *argv[]) 
{
    int n, i;
    long sum;
    scanf("%d",&n);
    for (i = 1; i <= n; i++) {
        scanf("%ld", &sum);
        long r = contains(sum);
        printf("Case #%d: %ld %ld\n",i, r, sum - r);
    }
    return 0;
}