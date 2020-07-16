#include <stdio.h>

int main() {

    int cases;
    scanf("%d",&cases);
    for (int i = 1; i <= cases; i++) {
        int size;
        scanf("%d",&size);
        printf("Case #%d: ",i);
        for (int k = 0; k < 2*size-2; k++) {
            char lydia;
            scanf(" %c",&lydia);
            switch (lydia) {
                case 'E':
                    printf("S");
                    break;
                case 'S':
                    printf("E");
                    break;
                default:
                    printf(" invalid ");
            }
        }
        printf("\n");



    }


}
