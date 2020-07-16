#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
    int i, j, k = 0, t;
    scanf("%d", & t);
    for (i = 0; i < t; i++) {
        k = 0;
        char * str = (char * ) malloc(sizeof(char) * 1000000);
        char * b = (char * ) malloc(sizeof(char) * 1000000);
        scanf("%s", str);
        for (j = 0; j < strlen(str); j++) {
            if (str[j] == '4') {
                str[j] = '2';
                b[k] = '2';
                k++;
            } else if (k != 0) {
                b[k] = '0';
                k++;
            }

        }
        if (k == 0) {
            b[k] = '0';
            k++;
        }
        b[k] = '\0';
        printf("Case #%d: %s %s\n", i, str, b);
        free(str);
        free(b);
    }
}