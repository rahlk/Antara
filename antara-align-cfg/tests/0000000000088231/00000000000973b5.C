#include <stdio.h>

int main(void) {
	// your code goes here
    int T, placeValue, j;
    scanf("%d", &T);
    long n, num1, num2;
    for (int i = 0; i < T; i++) {
        placeValue = 1;
        num1 = num2 = 0;
        scanf("%ld", &n);
        while (n != 0) {
            j = (int)(n % 10);
            if (j == 4) {
                num1 += 2 * placeValue;
                num2 += 2 * placeValue;
            } else {
                num1 += j * placeValue;
            }
            placeValue *= 10;
            n/=10;
        }
        printf("Case #%d: %ld %ld\n", i+1, num1, num2);
    }
	return 0;
}