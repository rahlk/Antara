#include <stdio.h>

int main(void)
{
    int i, j, k = 0;
    scanf("%d\n", &i);
    while(k++ < i)
    {
        scanf("%d\n", &j);
        printf("Case #%d: ",k);
        while(j--) putchar(getchar()=="E"?"S":"E");
        putchar(getchar());
    }
    return 0;
}