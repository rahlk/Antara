#include <stdio.h>
#include <string.h>

void findV(char* num, int len)
{
	for (int i = 0; i < len; i++)
	{
		if (num[i] == 'E')
			printf("S");
		else
			printf("E");
	}
}
int main(void)
{
	int cnt, j, len;
	char num[100010];
	
	scanf("%d", &cnt);

	for (int i = 1; i <= cnt; i++)
	{
		scanf("%d\n%s", &len, num);

		len = strlen(num);

		printf("Case #%d: ", i);

		findV(num, len);

		printf("\n");
	}

	return 0;
}