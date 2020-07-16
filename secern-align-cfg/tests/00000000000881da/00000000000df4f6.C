#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int numOfTest, mazeSize, i, j, k;
	char *str;
	scanf("%d", &numOfTest);
	for(i = 0; i < numOfTest; ++i)
	{
		scanf("%d", &mazeSize);
		str = (char *)malloc((2*mazeSize-1)*sizeof(char));
			scanf("%s", str);
		str[2*mazeSize - 2] = '\0';

		if(str[0] == str[2*mazeSize-3])
		{
			for(j = 0; j < 2*mazeSize-2; ++j)
				if(str[j] == 'E')
					str[j] = 'S';
				else
					str[j] = 'E';
		}
		else
		{
			if(str[0] == 'E')
			{
				for(k = 0; k < (2*mazeSize-2)/2; ++k)
					str[k] = 'S';
				for(k = (2*mazeSize-2)/2; k < (2*mazeSize-2); ++k)
					str[k] = 'E';
			}
			else
			{
				for(k = 0; k < (2*mazeSize-2)/2; ++k)
					str[k] = 'E';
				for(k = (2*mazeSize-2)/2; k < (2*mazeSize-2); ++k)
					str[k] = 'S';
			}

		}
		printf("Case #%i: i+1")
		printf("%s\n", str);
	}
	return 0;
}
