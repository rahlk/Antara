#include <stdin.h>

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
    int n, sum;
    scanf("%d",&n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &sum);
        for(int j = 1; j <= sum / 2; j++) {
            if(contains(j))
                continue;
            int aux = sum - j;
            if(!contains(aux)) {
                printf("Case #%d: %d %d\n",aux, j);
                break;
            }
        }
    }
}