#include <stdio.h>

char nthdigit(int x, int n)
{
    while (n--) {
        x /= 10;
    }
    return (x % 10) + '0';
}

int main (void)
{
    int T;
    int digit;
    
    
    scanf("%d", &T);
    
    int N[T];
    
    for(int i = 0; i<T; i++)
    {
        scanf("%d", &N[i]);
        digit = N[i]
    }
    
    int a = 0;
    
    for(int i = 0; i<T; i++)
    {
        a = N[i] - i;
    }
    
    
    
    
    
}