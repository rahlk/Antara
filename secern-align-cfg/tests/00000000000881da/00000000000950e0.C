#include <stdio.h>

int main() {
   int cases;
   scanf("%d", &cases);
   for(int n = 1; n <= cases; n++) {
        int to_print;
        scanf("%d", &to_print);
        char input[2*to_print-1];
        scanf("%s", input);
        printf("Case #%d: ", n);
        for(int i = 0; i < 2*to_print-2; i++) {
            if(input[i] == 'E') {
                printf("S");
            } else {
                printf("E");
            }
        }
        printf("\n");

   }
}
