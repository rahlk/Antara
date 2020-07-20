#include <stdio.h>
#define MAXN 50000

char receivedN[MAXN * 2 - 2];

int main(void)
{
	int T, testcase;
	int N;
	scanf("%d", &T);

	for (testcase = 0; testcase < T; testcase++)
	{
		int i;
		int P;
		int remainE = 0, remainS = 0;
		int usingE = 0, usingS = 0;
		int otherUsingE = 0, otherUsingS = 0;
		scanf("%d", &N);

		getchar();
		P = N * 2 - 2;
		for (i = 0; i < P; i++)
		{
			scanf("%c", &receivedN[i]);
		}

		getchar();

		remainE = N - 1;
		remainS = N - 1;

		printf("Case #%d: ", testcase + 1);
		if (receivedN[0] == 'E')
		{
			printf("%c", 'S');
			usingS++;
			remainS--;
			otherUsingE++;
		}
		else
		{
			printf("%c", 'E');
			usingE++;
			remainE--;
			otherUsingS++;
		}
		if (receivedN[P - 1] == 'E')
		{
//			usingS++;
			remainS--;
		}
		else
		{
//			usingE++;
			remainE--;
		}
		for (i = 1; i < P - 1; i++)		// first and last is already setted
		{
			// other guy using
			if (receivedN[i] == 'E')
				otherUsingE++;
			else
				otherUsingS++;

			// select what using
			if (remainE >= remainS)
			{
				if (remainS != 0 && otherUsingS == usingS && otherUsingE == (usingE + 1))	// can't select E
				{
					// select S
					usingS++;
					remainS--;
					printf("%c", 'S');
				}
				else			// can select E
				{
					usingE++;
					remainE--;
					printf("%c", 'E');
				}
			}
			else
			{
				if (remainE != 0 && otherUsingE == usingE && otherUsingS == (usingS + 1))	// can't select S
				{
					// select E
					usingE++;
					remainE--;
					printf("%c", 'E');
				}
				else			// can select S
				{
					usingS++;
					remainS--;
					printf("%c", 'S');
				}
			}
		}
		if (receivedN[P - 1] == 'E')
		{
			printf("%c\n", 'S');
		}
		else
		{
			printf("%c\n", 'E');
		}

	}
	return 0;
}