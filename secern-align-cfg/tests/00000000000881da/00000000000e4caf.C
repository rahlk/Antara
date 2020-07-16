#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i, j, t;
    scanf("%d", &t);
    
    int n[100]; // size of rows in lydia
    char lydia[100][2000];
    
    for (i = 0; i < t; i++) {
        scanf("%d\n", &n[i]);
        for (j = 0; j < (2 * n[i] - 2); j++)
            lydia[i][j] = getchar();
                
     }
     
     for (i = 0; i < t; i++) {
        printf("Case #%d: ", i + 1);
        for (j = 0; j < (2 * n[i] - 2); j++) {
            if (lydia[i][j] == 'S') {
                printf("E");
            } else {
                printf("S");
            }
        }
        printf("\n");             
     }
}
