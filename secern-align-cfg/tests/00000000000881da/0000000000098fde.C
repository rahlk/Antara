#include <stdio.h>

int main(void)
{
	int T, i, j, k;
	char ans[100000], tmp;

	scanf("%d", &T);

	for (i = 1; i <= T; i++)
	{
		scanf("%d\n", &j);
		j = 2*--j;
		for(k = 0; k < j; k++)
		{
			scanf("%c", &tmp);
			if (tmp == 'S')
				ans[k] = 'E';
			else
				ans[k] = 'S';
		}
		ans[k] = '\0';

		printf("Case #%d: ", i);
		printf("%s\n", ans);
	}

}