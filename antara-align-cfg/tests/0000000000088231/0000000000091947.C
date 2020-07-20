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

		for (int i = l - 1; i >= 0; i--)
		{
			if (arr[i] < 7)
			{
				n1[i] = arr[i] / 2;
				n2[i] = arr[i] / 2;
				if (arr[i] % 2 == 1)
					n1[i]++;
			}
			else
			{
				n2[i] = 1;
				n1[i] = arr[i] - 1;
			}	
		}

		printf("Case #%d: ", t);

		int i;

		for (i = 0; i < l && n1[i] == 0; i++);

		for (; i < l; i++)
			printf("%d", n1[i]);

		printf(" ");

		for (i = 0; i < l && n2[i] == 0; i++);

		for (; i < l; i++)
			printf("%d", n2[i]);

		printf("\n");
	}

	return 0;
}