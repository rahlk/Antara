#include <stdio.h>
int main()
{
	int T, N;
	char input[100000] = { 0 };
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d", &N);
		getchar();
		scanf("%s", &input);
		printf("Case #%d: ", i + 1);
		for (int i = 0; i < 2 * N - 2; i++) {
			if (input[i] == 'S')
				printf("%c", 'E');
			else if (input[i] == 'E')
				printf("%c", 'S');
		}
		printf("\n");
		for (int i = 0; i < 2 * N - 2; i++)
			input[i] = 0;
	}
}