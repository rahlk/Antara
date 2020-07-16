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
    int n, i;
    long j,aux,sum;
    scanf("%d",&n);
    for (i = 1; i <= n; i++) {
        scanf("%ld", &sum);
        for(j = 1; j <= sum / 2; j++) {
            if(contains(j) == 0)
                continue;
            aux = sum - j;
            if(contains(aux) != 0) {
                printf("Case #%d: %ld %ld\n",i, aux, j);
                break;
            }
        }
    }
}