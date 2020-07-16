#include <stdio.h>

int contains_four(int num) {
    int digit;

    while (num != 0) {
        digit = num % 10;
        num = num / 10;

        if (digit == 4) {
            return 1;
        }
    }

    return 0;
}

void numbers(int n, int test) {
    int one = 0;
    int two = 0;

    int i;
    for(i = 2; i <= n; i++) {
        one = n/i - 1;
        if (!contains_four(one)) {
            two = n - one;
            if (!contains_four(two)) {
                break;
            }
        }
    }

    printf("Case #%d: %d %d\n", test, one, two);
}

int main() {
    int num_tests;
    int number;
    scanf("%d", &num_tests);

    int i;
    for (i = 0; i < num_tests; i++) {
        scanf("%d", &number);
        numbers(number, i+1);
    }
    
    return 0;
}
