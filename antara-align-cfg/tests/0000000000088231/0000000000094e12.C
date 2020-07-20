#include <stdio.h>
#include <math.h>

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        long long int n;
        scanf("%lld", &n);
        long long int i;
        for(i=1; i<n; i++) {
            if(i + (n-i) == n) {
                printf("%d %d\n", i, n-i);
            }
        }
    }
    return 0;
}