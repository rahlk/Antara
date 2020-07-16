#include <stdio.h>

int main() {
    int num_inputs;
    scanf("%d", num_inputs);
    for(int n = 1; n <= num_inputs; n++) {
        int input;
        scanf("%d", input);
        int a, b;
        for(a = 1, b=input-1; a < input; a++,b--) {
            int checker = a, a_valid = 1, b_valid = 1;
            while(checker > 0 && a_valid) {
                if(( - (checker/10)*10) % 4 == 0) {
                    a_valid = 0;
                }
                checker /= 10;
            }
            if(!a_valid) {continue;}
            checker = b;
            while(checker > 0 && b_valid) {
                if(( - (checker/10)*10) % 4 == 0) {
                    b_valid = 0;
                }
                checker /= 10;
            }
            if(!b_valid) {continue;}
            printf("Case #%d: %d &d\n", n, a, b);
            break;
        }
    }
}