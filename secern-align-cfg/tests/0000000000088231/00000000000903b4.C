#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    for (int tc = 0; tc < T; tc++) {
        int N, ABSum;
        int A = 0;
        int B = 0;
        int DigitNum = 1;
        scanf("%d", &N);

        while (N) {
            ABSum = N % 10;
            if (ABSum !=4) {
                A += ABSum * DigitNum;
            } else {
                A += DigitNum;
                B += (ABSum - 1) * DigitNum;
            }
            N = N / 10;
            DigitNum *= 10;
        }

        printf("%d %d\n", A, B);
    }
    return 0;
}
