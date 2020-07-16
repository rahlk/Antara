#include<stdio.h>
#include<math.h>

int main()
{
    int t, n, a, b, c, ctr = 0;
    scanf("%d", &t);
    int t1 = t;
    int n_temp, d;
    while(t--)
    {
        a = b = 0;
        ctr = 0;
        scanf("%d", &n);
        n_temp = n;
        while(n_temp > 0){
            d = n_temp % 10;
            if(d == 4)
            {
                a += (2 * (int)pow(10, ctr));
                b += (2 * (int)pow(10, ctr));
            }
            else
                a += (d * (int)pow(10, ctr));
            n_temp /= 10;
            ctr += 1;
        }
        printf("Case #%d: %d %d\n", t1 - t, a, b);
    }
    return 0;
}