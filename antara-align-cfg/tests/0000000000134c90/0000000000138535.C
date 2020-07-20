#include <stdio.h>
#include <ctype.h>
int main(void)
{
	char firstChar[256], resultChar, ch, tempStr[500];
	int T, id, A, passed, i;
	scanf("%d", &T);
	for(id = 1; id <= T; ++id)
	{
		passed = 1;
		scanf("%d", &A);
		for(i = 1; i <= A; ++i)
		{
			scanf("%s", tempStr);
			firstChar[i] = tempStr[0];
		}
		
		for(i = 1; i <= A; ++i)
		{
			if(i != 1 && firstChar[i] != firstChar[i-1])
			{
				passed = 0;
				break;
			}
			if(firstChar[1] == 'P')
				resultChar = 'S';
			else if(firstChar[1] == 'S')
				resultChar = 'R';
			else resultChar = 'P';
		}
		if(passed)
			printf("Case #%d: %c\n", id, resultChar);
		else
			printf("Case #%d: IMPOSSIBLE\n", id);
		fflush(stdin);
	}
}
