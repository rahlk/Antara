#include <stdio.h>
#include <stdlib.h>

int main() {

	int T,testcase = 1;
	scanf("%d", &T);
	while (testcase <= T) {

		int N, num1 = 0, num2 = 0;
		scanf("%d", &N);

		for (double i = 1000000000; i >= 1; i = i / 10) {

			int digit = N / i;
			digit = digit % 10;
			
			if (digit == 1 || digit == 3 || digit == 7 || digit == 9) {

				num1 += i * 1;
				num2 += i * (digit - 1);

			}

			else if (digit == 5) {

				num1 += i * 2;
				num2 += i * 3;
			}

			else if (digit == 2 || digit == 4 || digit == 8) {

				num1 += i * 2;
				num2 += i * (digit - 2);
			}

			else if (digit == 6) {

				num1 += i * 3;
				num2 += i * 3;
			}

			else if (digit == 0) {

				num1 += i * 0;
				num2 += i * 0;
			}

		}

		printf("Case #%d: %d %d\n", testcase, num1, num2);
		testcase += 1;
	}

	return 0;
}