#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int t;
    scanf("%d", &t);
    int n[1000];
    int a[1000];
    int b[1000];
    
    for (int i = 0; i < t; i++)
        scanf("%d", &n[i]);
    for (int i = 0; i < t; i++) {
        a[i] = n[i] / 2;
        b[i] = n[i] - a[i];
        while((a[i] % 10) == 4
            || ((a[i] / 10) % 10) == 4
            || ((a[i] / 100) % 10) == 4
            || ((a[i] / 1000) % 10) == 4
            || ((a[i] / 10000) % 10) == 4
            || ((b[i] / 10) % 10) == 4
            || ((b[i] / 100) % 10) == 4
            || ((b[i] / 1000) % 10) == 4
            || ((b[i] / 10000) % 10) == 4) {
            a[i]++;
            b[i]--;
        }
    }
    for (int i = 0; i < t; i++)
        printf("Case #%d: %d %d\n", i, a[i], b[i]);
}