#include <stdio.h>

int main(int argc, char const *argv[])
{
    int t,n;
    scanf ("%d", &t);
    for (int i = 0; i < t; ++i)
    {
        scanf ("%d", &n);
        int a = 0;
        int b = 0;
        int val = 1;
        int x = n;
        while (x!= 0)
        {
            if (x%10 == 4)
            {
                a = a + 2*val;
                b = b + 2*val;
            }
            else
                a = a + (x%10)*val;
            x = x/10;
            val = val*10;
        }
        printf("Case #%d: %d %d\n",i+1, a,b );
    }
    return 0;
}