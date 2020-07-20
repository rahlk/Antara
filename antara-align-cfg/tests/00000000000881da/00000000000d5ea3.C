#include <stdio.h>


//------------------------------------- MAIN START -------------------------------------
int main(void)
{
	int T, N[10], i, seged;
	char P[10][20];
	char Path[10][20];

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
		for (seged = 0; seged < ( (2* N[i]) - 2 ); seged++)
		{
			if (P[i][seged] == 'S') { Path[i][seged] = 'E'; }
			else if (P[i][seged] == 'E') { Path[i][seged] = 'S'; }
		}

	// OUTPUT
		printf("Case #%i: %s \n", (i + 1), &Path[i]);
	}
	return 0;

}

//-------------------------------------- MAIN END --------------------------------------

