#include <stdio.h>

int main(int argc, char const *argv[])
{
	int t;
	scanf("%d\n", &t);

	for(int i = 1; i <= t; i++)
	{
		int l;
		scanf("%d\n", &l);
		printf("Case #%d: ", i);
		for(int j = 0; j < l; j++)
		{
			int p = getchar_unlocked();
			if(p == 'S')
				putchar_unlocked('E');
			else
				putchar_unlocked('S');
		}
		putchar_unlocked(getchar_unlocked());
	}
	putchar_unlocked('\n');
	
	return 0;
}
