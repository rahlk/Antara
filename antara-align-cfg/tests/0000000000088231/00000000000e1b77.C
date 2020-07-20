#include <stdio.h>
#include <stdlib.h>

int pow(int x, int n)
{
    if (n == 1) return x;
    if (n < 1) return 1;
    return (x * pow(x,n-1));
}

int log10 (int x)
{
    int i = 0;
    for (; x; i++)
    {x /= 10;}
    return i;
}


int nth_digit (int x, int n)
{
    x /= pow(10,n);
    return x % 10;
}


int convert_digits(int x, int from, int to)
{
    int i = 0;
    int stop = log10(x);
    
    while (i < stop)
    {
        if (nth_digit(x,i) == 4)
        {
            x -= pow(10,i);
        }
        i++;
    }
    return x;
}

int main()
{
    int n_cases = -1, x = 0, y = 0;
    scanf("%d\n",&n_cases);
    
    for (int i = 0;i < n_cases; i++)
    {
        scanf("%d\n", &x);
        //printf("x: %d", x);
        y = convert_digits(x,4,3);
        printf("Case #%d: %d %d\n", i+1, y, x-y);
    }

    return 0;
}