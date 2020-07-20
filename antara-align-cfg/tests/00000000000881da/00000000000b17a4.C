#include <stdio.h>
#include <string.h>

int main(void) {
    int T, i, j, wide;
    char P[100010];
    scanf("%d", &T);
    j = 1;
    while(j <= T) {
        scanf("%d", &wide);
        scanf("%s", P);
        printf("Case #%d: ", j);
        for (i = 0; i < 2*wide-2; i++) {
            if (P[i] == 'E') {
                printf("S");
            }
            else {
                printf("E");
            }
        }
        printf("\n");
        
        j++;
    }
}
