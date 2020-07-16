/*You Can Go Your Own Way*/

#include<stdio.h>

char P[50005];

int main()
{
	int i, N, t, T;
	scanf("%d", &T);
	for (t = 1; t <= T; t++)
	{
		scanf("%d", &N);
		scanf("%s", P);
		for (i = 0; i < 2 * N - 2; i++)
			P[i] = (P[i] == 'E') ? 'S' : 'E';
		printf("Case #%d: %s\n", t, P);
	}
	return 0;
}