#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int  T = 0, Num, E, S;
	char Ly[100000];
	char Me[100000];
	scanf("%d", &T);

	for (int a = 1; a <= T; a++)
	{
		Num = 0;
		E = 0;
		S = 0;
		for (int i = 0; i < 100000; i++)
		{
			Ly[i] = NULL;
			Me[i] = NULL;
		}

		getchar();
		scanf("%d", &Num);

		getchar();
		scanf("%s", Ly);
		printf("Case #%d ", a);
		for (int j = 0; j < 2 * Num - 2; j++)
		{
			if (Me[j] == 'E')
				E++;
			if (Me[j] == 'S')
				S++;

			if (E > S)
				Me[j] = 'S';
			if (S > E)
				Me[j] = 'E';
			if (E == S && Ly[j] == 'E')
				Me[j] = 'S';
			if (E == S && Ly[j] == 'S')
				Me[j] = 'E';


			printf("%c", Me[j]);
		}
		printf("\n");
	}
	return 0;
}