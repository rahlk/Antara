#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	unsigned long T = 0, N = 0, A = 0, B = 0;
	scanf("%d", &T);
	for (unsigned long a = 1; a <= T; a++)
	{
		scanf("%d", &N);
		for (int b = 1; N > 0; N /= 10, b *= 10) {
			if (N % 10 == 5)
			{
				A += 3 * (N % 10)*b;
				B += 2 * b;
			}
			else if (N % 10 == 0);
			else
			{
				A += ((N % 10) - 1)*b;
				B += b;
			}

		}
			

		
		printf("Case #%d: %d %d\n", a, A, B);
		A = 0;
		B = 0;
	}
	printf("!");
	scanf("%d", &T);
	return 0;
}