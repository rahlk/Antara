#include <stdio.h>


int main(void)
{
	int T, N[100], i, seged;
	char P[100][2000];
	char Path[100][2000];

	// INPUT

	scanf("%i", &T);

	for (i = 0; i < T; i++)
	{
		scanf("\n%i", &N[i]);
		scanf("\n%s", &P[i]);
	}

	// PROCESS
	for (i = 0; i < T; i++)
	{
		for (seged = 0; seged <= ((2 * N[i]) - 2); seged++)
		{
			if (P[i][seged] == 0) { Path[i][seged] = 0; }
			else if (P[i][seged] == 'S') { Path[i][seged] = 'E'; }
			else if (P[i][seged] == 'E') { Path[i][seged] = 'S'; }
		}

		// OUTPUT
		printf("\nCase #%i: %s", (i + 1), Path[i]);
	}
	return 0;
}

