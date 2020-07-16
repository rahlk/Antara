#include <stdio.h>
#include <math.h>

void solve(unsigned int n, unsigned int *a, unsigned int *b)
{
    int lastfour = 0, i=0;
    unsigned int temp = n;
    while(temp / 10 != 0) {
        if(temp % 10 == 4) {
            lastfour = i;
        }
        temp /= 10;
        i++;
    }
    if(temp % 10 == 4) {
        lastfour = i;
    }
    unsigned int t = pow(10,lastfour+1);
    *b = (n % t) / 2;
    *a = n / t * t + *b;
    
    if(n%2 == 1) {
        *b += 1;
    }
}

int main()
{
    int t;
    unsigned int n;
    scanf(" %d ", &t);
    for (int i = 1; i <= t; ++i) {
        unsigned int out1, out2;
        scanf(" %d ", &n);
        solve(n, &out1, &out2);
        printf("Case #%d: %d %d\n", i, out1, out2);
    }
    return 0;
}