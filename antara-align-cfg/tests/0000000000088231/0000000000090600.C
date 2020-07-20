#include <stdio.h>
#include <string.h>

int T;
int l;
char input[101];
int arr[100];
int n1[100], n2[100];

int main()
{
	scanf("%d", &T);

	for (int t = 1; t <= T; t++)
	{
		scanf("%s", input);

		l = strlen(input);

		for (int i = l - 1; i >= 0; i--)
			arr[i] = input[i] - '0';

		for (int i = l - 1; i > 0; i--)
		{
			if (arr[i] < 0)
			{
				arr[i - 1]--;
				arr[i] += 10;
			}

			int b = arr[i] + 10;

			n1[i] = b / 2;
			n2[i] = b / 2;

			if (arr[i] % 2 == 1)
				n1[i]++;

			arr[i - 1]--;
		}

		if (arr[0] >= 7 && arr[0] <= 9)
		{
			n2[0] = 1;
			n1[0] = arr[0] - n2[0];
		}
		else
		{
			n1[0] = arr[0] / 2;
			n2[0] = arr[0] / 2;

			if (arr[0] % 2 == 1)
				n1[0]++;
		}

		printf("Case #%d: ", t);

		for (int i = 0; i < l; i++)
		{
			if (i == 0 && n1[i] == 0)
				continue;
			printf("%d", n1[i]);
		}

		printf(" ");

		for (int i = 0; i < l; i++)
		{
			if (i == 0 && n2[i] == 0)
				continue;
			printf("%d", n2[i]);
		}
		printf("\n");
	}

	return 0;
}