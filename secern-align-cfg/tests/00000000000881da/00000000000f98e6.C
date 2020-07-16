#include<stdio.h>
#include<stdlib.h>
int main()
{
    long long t, n, i;
    char str[50004];
    char c;
    
    scanf("%lld", &t);
    while(t--)
    {
        scanf("%lld", &n);
        c = getchar_unlocked();
        while(c != 'E' || c != 'S')
            c = getchar_unlocked();
        while(c == 'E' || c == 'S')
        {
            if(c == 'E')
                printf("S");
            else
                printf("E");
            c = getchar_unlocked();
        }
        printf("\n");
    }
    return 0;
}