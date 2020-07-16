#include <stdio.h>
void main()
{
	int T, i, j, n, count;
	char N[103], A[103], B[103];
	scanf("%d", &T);
	for (i = 0; i < T; i++)
	{
		scanf("%s", N);
		for(j = 0; j <= 103; j++) A[j] = N[j];
		B[102] = '0';
		for (j = 0; j <= 103; j++)
		{
			if (N[j] == '4')
			{
				A[j] = '2';
				B[j] = '2';
			}
		}
		printf("Case #%d: %s %s\n", i+1, A, B);
		fflush(stdout);
	}
}