#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ANSWER 500
#define MAX_A 255

#define GET_WIN_CHAR(X) ( ((X) == 'R') ? ('P') : ( ((X)=='P') ? ('S') : ('R')) ) 

char answer[MAX_ANSWER + 1];
char other[MAX_A][MAX_ANSWER + 1];
int strLength[MAX_A];
int remainRobot[MAX_A];

int CheckingResult(char *answer, char *other)
{
	int idx = 0;
	int ans_len = strlen(answer);
	int oth_len = strlen(other);

	while (1)
	{
		char ansCh = answer[idx % ans_len];
		char othCh = other[idx % oth_len];
		if (ansCh == othCh)
		{
			idx++;
			continue;
		}
		if (ansCh == 'R' && othCh == 'S')
		{
			return 0;
		}
		else if (ansCh == 'S' && othCh == 'P')
		{
			return 0;
		}
		else if (ansCh == 'P' && othCh == 'R')
		{
			return 0;
		}
		else
		{
			return -1;
		}
	}
	return 0;
}

int main(void)
{
	int T, testcase;

	scanf("%d", &T);
	for (testcase = 1; testcase <= T; testcase++)
	{
		int A;
		int i;
		int idx = 0;
		int impossible = 0;
		int remainRobotCnt = 0;

		scanf("%d", &A);
		for (i = 0; i < A; i++)
		{
			scanf("%s", other[i]);
			remainRobot[i] = 1;
			strLength[i] = strlen(other[i]);
		}
		remainRobotCnt = A;

		while (idx < MAX_ANSWER && impossible == 0 && remainRobotCnt > 0)
		{
			char selectChar = 0;
			char secondChar = 0;

			for (i = 0; i < A && impossible == 0; i++)
			{
				if (remainRobot[i] == 0)
				{
					continue;
				}

				if (selectChar == 0)
				{
					selectChar = GET_WIN_CHAR(other[i][idx % strLength[i]]);
					secondChar = other[i][idx];
				}
				else
				{
					char winChar = GET_WIN_CHAR(other[i][idx % strLength[i]]);
					if (winChar == selectChar)
					{
						continue;
					}
					else
					{
						if (secondChar == 0)
						{
							if (selectChar != other[i][idx % strLength[i]])
							{
								impossible = 1;
								break;
							}
						}
						if (winChar != secondChar)
						{
							selectChar = other[i][idx % strLength[i]];
						}
						else
						{
							selectChar = secondChar;
						}
						secondChar = 0;
					}
				}
			}
			if (impossible == 0)
			{
				for (i = 0; i < A ; i++)
				{
					char winChar;
					if (remainRobot[i] == 0)
					{
						continue;
					}
					winChar = GET_WIN_CHAR(other[i][idx % strLength[i]]);
					if (winChar == selectChar)
					{
						remainRobot[i] = 0;
						remainRobotCnt--;
					}
				}
				answer[idx] = selectChar;
				idx++;
				answer[idx] = '\0';
			}
		}

		if (impossible == 1 || idx == MAX_ANSWER)
			printf("Case #%d: IMPOSSIBLE\n", testcase);
		else
		{
			for (i = 0; i < A; i++)
			{
				if (CheckingResult(answer, other[i]) == -1)
				{
					char *a = NULL;
					printf("It is Wrong!!!\n");
					*a = 'a';
				}
			}
			printf("Case #%d: %s\n", testcase, answer);
		}
	}
	return 0;
}