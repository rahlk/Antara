#include <stdio.h>
#include <string.h>

int main(void) {
    int T, i;
    char N[110];
    char b[110];
    scanf("%d", &T);
    int j = 1;
    while(j <= T) {
        scanf("%s", N);
        memset(b, 0, sizeof(b));
        i = 0;
        printf("Case #%d: ", j);
        while(N[i] != 0) {
            if(N[i] == '4') {
                printf("2");
                b[i] = '2';
            }
            else {
                printf("%c", N[i]);
                b[i] = '0';
            }
            i++;
        }
        printf(" ");
        i = 0;
        while(b[i] == '0') {
            i++;
        }
        while(b[i] != 0) {
            printf("%c", b[i]);
            i++;
        }
        printf("\n");
        j++;
    }
}
