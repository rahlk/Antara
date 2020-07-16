#include <stdio.h>

int contains(int n)
{
    while(n > 0) {
        if(n%10 == 4)
            return 0;
        n /= 10;
    }
        
    return 1;
}

void main(int argc, char *argv[]) 
{
    int n, sum, i ,j, aux;
    scanf("%d",&n);
    for (i = 1; i <= n; i++) {
        scanf("%d", &sum);
        for(j = 1; j <= sum / 2; j++) {
            if(contains(j) == 0)
                continue;
            aux = sum - j;
            if(contains(aux) != 0) {
                printf("Case #%d: %d %d\n",i, aux, j);
                break;
            }
        }
    }
}