#include <stdio.h>

#define MAXN (200)

int main(void)
{
	int T;
	int testCase;
	char N[MAXN];
	char otherCoin[MAXN];
	int i;

	scanf("%d\n", &T);

	for (testCase = 0; testCase < T; testCase++)
	{
		int startOtherCoin = 0;
		int otherCoinIdx = 0;
		fgets(N, sizeof(N), stdin);
		
		printf("Case #%d: ", testCase + 1);
		for (i = 0; N[i] >= '0' && N[i] <= '9'; i++)
		{
			if (N[i] == '4')
			{
				N[i]--;
				if (startOtherCoin == 0)
				{
					startOtherCoin = 1;
				}
				otherCoin[otherCoinIdx++] = '1';
			}
			else
			{
				if (startOtherCoin == 1)
				{
					otherCoin[otherCoinIdx++] = '0';
				}
			}
		}
		N[i] = '\0';
		otherCoin[otherCoinIdx] = '\0';

		printf("%s %s\n", N, otherCoin);
	}
	return 0;
}