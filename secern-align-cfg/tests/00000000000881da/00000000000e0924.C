#include <stdio.h>

int main(int argc, char** argv)
{
	int nTestCases;
	scanf("%d", &nTestCases);

	int i;
	for(i = 0; i < nTestCases; i++)
	{
		int N;
		scanf("%d", &N);

		char L[(2*N) - 1], M[(2*N) - 1];
		scanf("%s", L);

		int j = 0;
		while(L[j] != '\0')
		{
			if(L[j] == 'E')
				M[j] = 'S';
			else
				M[j] = 'E';

			j++;
		}
		M[j] = '\0';
		printf("Case #%d: %s\n", i + 1, M);
	}

	return 0;
}
