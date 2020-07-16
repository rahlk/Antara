#include <stdio.h>
#include <string.h>

int main(void)
{
	char N[101];
	char res1[101];
	char res2[101];
	int T;
	int len;
	int i, j;

	scanf("%d", &T);
	
	for (i = 0; i < T; i++)
	{
		scanf("%s", N);
		len = strlen(N);
		for (j = 0; j < len; j++)
		{
			if (N[i] == '4')
			{
				res1[j] = '1';
				res2[j] = '3';
			}
			else
			{
				res1[j] = N[j];
				res2[j] = '0';
			}
		}
		printf("Case #%d: ", i + 1);
		for (j = 0; j < len; j++)
		{
			if (res1[j] != '0') break;
		}
		for (; j < len; j++)
		{
			printf("%c", res1[j]);
		}
		printf(" ");
		for (j = 0; j < len; j++)
		{
			if (res2[j] != '0') break;
		}
		for (; j < len; j++)
		{
			printf("%c", res2[j]);
		}
		printf("\n");
	}
	return 0;
}