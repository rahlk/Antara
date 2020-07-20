#include <stdio.h>

void display(char *num)
{
	int n, firatZero = 0;

	firatZero = 1;
	for (n = 0; n < 100; n++)
	{
		if (num[n] >= firatZero && num[n] < 10)
		{
			firatZero = 0;
			printf("%d", num[n]);
		}
	}
}
void main(void)
{
	int T = 0, t = 0, n = 0;
	char ch[2], num[101], A[101], B[101];

	scanf("%d", &T);
	for (t = 1; t <= T; t++)
	{
		for (n = 0; n < 100; n++)
		{
			num[n] = -1;
			A[n] = -1;
			B[n] = -1;
		}
		scanf("%s", &num);
		for (n = 0; n < 100; n++)
		{
			if (num[n] >= '0' && num[n] <= '9')
			{
				num[n] = num[n] - '0';
				A[n] = num[n] / 2;
				if (A[n] == 4)
				{
					A[n] = 3;
				}
				B[n] = num[n] - A[n];
			}
			else
			{
				num[n] = -1;
			}
		}

		printf("Case #%d: ", t);
		display(A);
		printf(" ");
		display(B);
		printf("\n");
	}
#if define(_DEBUG_)
	printf("\n\n\nenter................");
	scanf("%s", &ch);
#endif
}