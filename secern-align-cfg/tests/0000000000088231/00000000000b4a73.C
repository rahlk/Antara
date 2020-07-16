
#include <stdio.h>
#include <stdlib.h>


void Solve(unsigned int i)
{
	unsigned int N, A = 0, B = 0;
	scanf("%d", &N);

	int digit;

	while(N)
	{
		digit = N % 10;

		if(digit == 4)
		{
			A = A * 10 + 2;
			B = B * 10 + 2;
		}
		else
		{
			A = A * 10 + digit;
			//B = B;
		}

		N = N/10;

	}

	printf("Case #%d: %d %d\r\n", i, A, B);
	fflush(stdout);
}


int main(void) {

	unsigned int T;
	scanf("%d", &T);

	unsigned int i = 1;

	while (T)
	{
		Solve(i++);

		T--;
	}


	return 0;
}
