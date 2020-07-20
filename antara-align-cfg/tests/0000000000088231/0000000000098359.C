#include <stdio.h>

int main(void)
{
	int T, i, j, k, chk;
	char N[102], ans1[102], ans2[102], tmp;

	scanf("%d\n", &T);
	
	for (i = 1; i <= T; i++)
	{
		j=0;
		do {
			scanf("%c", &N[j++]);
		} while(N[j-1] != '\n');
		
		N[--j] = '\0';

		for (k = 0; k < j; k++)
		{
			if (N[k] == '4')
			{
				ans1[k] = '3';
				ans2[k] = '1';
			}
			else
			{
				ans1[k] = N[k];
				ans2[k] = '0';
			}
		}
		
		ans1[k] = '\0';
		ans2[k] = '\0';

		printf("Case #%d: ", i);
		printf("%s ", ans1);
		
		chk=0;
		for (k = 0; k < j; k++)
		{
			if (chk)
				printf("%c", ans2[k]);
			else if (ans2[k] != '0')
			{
				chk++;
				k--;
			}
		}
		printf("\n");
	}

}