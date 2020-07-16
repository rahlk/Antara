#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>


int main() {
    int T, j, i;
    
    scanf("%d", &T);

    for (int id = 1; id <= T; ++id) {
        for ( j = 1; j <= 96; j++){
            scanf("%d", &i);
            printf("%d 1\n", j%16+1);
            fflush(stdout);
        }
        for ( j = 1 ; j <= 4; j++){
            scanf("%d", &i);
            printf("%d 100\n", 96+j);
            fflush(stdout);
        }
    }
    return 0;
}