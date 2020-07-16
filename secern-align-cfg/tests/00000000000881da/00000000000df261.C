#include <stdio.h>

int main(void)
{
    int i, j, k = 0;
    scanf("%d\n", &i);
    while(k++ < i)
    {
        scanf("%d\n", &j);
        j -= 1; j *= 2;
        printf("Case #%d: ",k);
        while(j--) putchar(getchar()=='E'?'S':'E');
        getchar();
        putchar('\n');
    }
    return 0;
}