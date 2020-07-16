#include <stdio.h>
#include <string.h>

void find4(char* num, char* num2, int len)
{
	for (int i = 0; i < len; i++)
	{
		if (num[i] == '4')
			num2[i] = '1';
		else
			num2[i] = '0';
	}
}
int main(void)
{
	int cnt, j;
	char num[101], num2[101];
	
	scanf("%d", &cnt);

	for (int i = 1; i <= cnt; i++)
	{
		scanf("%s", num);

		int len = strlen(num);

		find4(num, num2, len);

		printf("Case #%d: ", i);

		for (j = 0; j < len; j++)
			printf("%c", num[j] - num2[j] + '0');

		printf(" ");

		j = 0;

		while (num2[j] == '0')
			j++;

		for (int k = j; k < len; k++)
			printf("%c", num2[k]);

		printf("\n");
	}

	return 0;
}