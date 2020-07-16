#include <stdio.h>


void main(void)
{
    int i, N, x;
    
    scanf("%d", &N);
    for (i=1; i<=N; i++) {
        scanf("%d", &x);
        printf("Case #%d: %d %d\n", i, 1, x - 1);
    }
}