#include <stdio.h>
#include <math.h>

void solve(unsigned int n, unsigned int *a, unsigned int *b)
{
    int i=0;
    *a = 0;
    *b = 0;
    unsigned int temp = n;
    while(temp / 10 != 0) {
        if(temp % 10 == 4) {
            *a += 2 * pow(10, i);
            *b += 2 * pow(10, i);
        } else {
            *a += (temp%10) * pow(10,i);
        }
        temp /= 10;
        i++;
    }
    if(temp % 10 == 4) {
        *a += 2 * pow(10, i);
        *b += 2 * pow(10, i);
    } else {
        *a += (temp%10) * pow(10,i);
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