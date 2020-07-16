#include<stdio.h>
#include<cstdlib>
#include<string.h>

char s[10050];

int main(void)
{
	int t, n, num[105], count = 0, a;
		
	scanf("%d", &t);
	for(int i = 0; i < t; i++)
	{
		scanf("%d", &num[i]);
	}
	for(int i = 0; i < t; i++)
	{
		for(int j = 0; j < num[i]; j++)
		{
			itoa(j, s, 10);
			for(int p = 0; p < strlen(s); p++)
			{
				if(s[p] == '4')
				{
					count = 1;
				}
			}
			itoa(num[i] - j, s, 10);
			for(int q = 0; q < strlen(s); q++)
			{
				if(s[q] == '4')
				{
					count = 1;
				}
			}
			if(count == 0)
			{
				printf("Case #%d: %d %d\n", i+1, j, num[i]-j);
				break;
			}
		}
	}
	
	return 0;
}