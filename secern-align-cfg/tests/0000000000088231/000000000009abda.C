#include<stdio.h>

int main() {
    char n[101], a[101], b[101];
    int t, i, j, k;
    scanf("%d", &t);
    for(i = 1; i <= t; i++) {
        scanf("%s", n);
        k = 101;
        for(j = 0; j < 100 && n[j] != '\0'; j++) {
            if(n[j] == '4') {
                a[j] = '3';
                b[j] = '1';
                if(k > j)
                    k = j;
            } else {
                a[j] = n[j];
                b[j] = '0';
            }
        }
        a[j] = '\0';
        b[j] = '\0';
        if(k == 101) {
            k = j - 1;
            b[k] = '0';
        }
        printf("Case #%d: %s %s\n", i, a, &(b[k]));
    }
    return 0;
}
