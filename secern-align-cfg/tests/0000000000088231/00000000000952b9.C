#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int number, input, digit;
	scanf("%d", &number);
	for (int i = 0; i < number; i++)
	{
		scanf("%d", &input);
		int num4[10] = { 0 };
		int temp = input;
		int sol = 0;
		int digitof4 = 1;
		int numof4 = 0;
		while (1)
		{
			digit = temp % 10;
			if (digit == 4) {
				num4[numof4] = digitof4;
				numof4++;
			}
			digitof4 = digitof4 * 10;
			temp = temp / 10;
			if (temp == 0) { break; }
		}
		for (int k = 0; num4[k] != 0; k++)
		{
			sol = sol + (2 * num4[k]);
		}
		printf("Case #%d: %d %d\n", i + 1, input - sol, sol);
	}
}