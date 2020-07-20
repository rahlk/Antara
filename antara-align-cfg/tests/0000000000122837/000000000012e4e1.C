#include <stdio.h>
#include <string.h>

int main() {
    int T, W;
    scanf("%d %d", &T, &W);

    for(int t=0; t<T; t++) {
        int n[10];
        for(int w=4; w<=9; w++) {
            printf("%d\n", w);
            scanf("%d", &n[w]);
        }

        int R1 = (n[7]-n[6])/64;
        int R3 = (n[9]-n[8]-256*R1)/4;
        int R5 = (n[5]-32*R1-2*R3)-(n[4]-16*R1-2*R3);

        int n4_ = n[4]- 16*R1- 2*R3-   R5;
        int n6_ = n[6]- 64*R1- 4*R3- 2*R5;
        int n8_ = n[8]-256*R1- 4*R3- 2*R5;
        int R4 = (2*n4_-n6_)/2;
        int R6 = (2*n6_-n8_)/2;
        int R2 = (n6_-2*R4-2*R6)/8;

        printf("%d %d %d %d %d %d\n", R1, R2, R3, R4, R5, R6);

        int result;
        scanf("%d", &result);
        if(result == -1) {
            printf("Wrong :(");
            return -1;
        }
    }

    return 0;
}
