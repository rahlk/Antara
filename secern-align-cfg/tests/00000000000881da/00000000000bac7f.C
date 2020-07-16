#include<stdio.h>
#include<string.h>

int main()
{
	int t;
	scanf("%d", &t);
	for (int i = 1; i <= t; ++i)
	{
		int n;
		scanf("%d", &n);
		char s[50000];
		scanf("%s", s);
		printf("Case #%d: ", i);
		for (int j = 0; j < strlen(s); ++j)
		{
			if(s[j]=='E')
				printf("S");
			else
				printf("E");
		}	
		printf("\n");
	}
}