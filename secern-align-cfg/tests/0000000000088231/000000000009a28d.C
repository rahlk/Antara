#include<stdio.h>

int main() {
    char n[101], a[101], b[101];
    int t, i, j, k;
    scanf("%d", &t);
    for(i = 1; i <= t; i++) {
        scanf("%s", n);
        for(j = 0, k = 0; j < 101 && n[j] != '\0'; j++) {
            if(n[j] == '4') {
                a[j] = '3';
                b[k] = '1';
                k++;
            } else {
                a[j] = n[j];
            }
        }
        if(k == 0) {
            b[k] = '0';
            k++;
        }
        a[j] = '\0';
        b[k] = '\0';
        printf("Case #%d: %s %s\n", i, a, b);
    }
    return 0;
}
