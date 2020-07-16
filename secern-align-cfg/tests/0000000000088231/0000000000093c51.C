#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);
    for (int t = 1; t <= T; t++) {
        char n1[101] = {0}, n2[101] = {0};
        scanf("%s", n1);
        
        int len = strlen(n1);
        for (int i = 0; i < len; i++) {
            if (n1[i] == '5') {
                n2[i] = '2';
                n1[i] -= 2;
            } else if (n1[i] == '0') {
                n2[i] = '0';
            } else {
                n2[i] = '1';
                n1[i] -= 1;
            }
        }
        printf("Case #%d: %s %s\n", t, n1, n2);
    }
}