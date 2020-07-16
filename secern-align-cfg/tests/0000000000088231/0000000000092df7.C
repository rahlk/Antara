#include <stdio.h>

int main() {
    int num_inputs;
    scanf("%d", &num_inputs);
    for(int n = 1; n <= num_inputs; n++) {
        int input;
        scanf("%d", &input);
        int a = 1, b = input-1;
        int checker = b, multiplier = 1;
        while(checker != 0) {
            while(checker%10 == 4) {
                a += multiplier;
                b -= multiplier;
            }
            checker /= 10;
            multiplier *= 10;
        }
        printf("Case #%d: %d %d\n", n, a, b);
    }
}
