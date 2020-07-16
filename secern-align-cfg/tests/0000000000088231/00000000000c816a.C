#include <stdio.h>
#include <string.h>

int main() {
    int t, sn;
    char a[101], b[101], n[101];
    scanf("%d", &t);
    for (int i = 0; i < t; ++i) {
        memset(a, 0x0, sizeof(char)*101);
        memset(b, 0x0, sizeof(char)*101);
        memset(n, 0x0, sizeof(char)*101);
        scanf("%s", n);
        sn = strlen(n);
        for (int j = 0; j < sn; ++j) {
            if(n[j] == '4') {
                a[j] = '2';
                b[j] = '2';
            } else {
                a[j] = n[j];
                b[j] = '0';
            }
        }
        sn = strlen(b);
        for (j = sn - 1; j >= 0; --j) {
            if (b[j] == '0') 
                b[j] = '\0';
            else
                break;
        }
        printf("Case #%d: %s %s\n", i+1, a, b);
    }
    
    return 0;
}