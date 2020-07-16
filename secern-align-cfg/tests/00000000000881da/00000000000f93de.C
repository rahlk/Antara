#include<stdio.h>
#include<stdlib.h>
int main()
{
    long long t, n, i;
    char str[50004];
    scanf("%lld", &t);
    while(t--)
    {
        scanf("%lld", &n);
        scanf("%s", str);
        for(i = 0; i < n; i++)
        {
            if(str[i] == 'E')
                str[i] = 'S';
            else
                str[i] = 'E';
        }
        printf("%s\n", str);
    }
    return 0;
}