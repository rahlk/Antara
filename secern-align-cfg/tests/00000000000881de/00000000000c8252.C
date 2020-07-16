#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>
#include<math.h>
#include<malloc.h>

void print(int n, int step)
{
	int i;
	int count = 0;
	bool sw = false;
	for (i = 0; i < n; i++)
	{
		if (!sw)
		{
			printf("0");
			count++;
		}
		else
		{
			printf("1");
			count++;
		}
		if (count >= step)
		{
			count = 0;
			sw = !sw;
		}
	}
}
void CodeJam(int step, int n, int b)
{
	int correct;
	int i, j, k;
	int s;
	int mod[4];
	bool check = false;
	if (n % 16 == 0)
	{
		mod[0] = 0;
		mod[1] = 0;
		mod[2] = 0;
		mod[3] = 0;
	}
	else
	{
		mod[0] = 1;
		if (n % 8 == 0)
		{
			mod[1] = 0;
			mod[2] = 0;
			mod[3] = 0;
		}
		else
		{
			mod[1] = 1;
			if (n % 4 == 0)
			{
				mod[2] = 0;
				mod[3] = 0;
			}
			else
			{
				mod[2] = 1;
				if (n % 2 == 0)
				{
					mod[3] = 0;
				}
				else
				{
					mod[3] = 1;
				}
			}
		}
	}
	int size[5] = { (n / 16) + mod[0],(n / 8) + mod[1],(n / 4) + mod[2],(n / 2) + mod[3], n };
	char* arrayscan = (char*)malloc(sizeof(char) * (n - b));
	int** next = (int**)malloc(sizeof(int*) * ((n / 16) + (n / 8) + (n / 4) + (n / 2) + n + mod[0] + mod[1] + mod[2] + mod[3]));
	next[0] = (int*)malloc(sizeof(int) * ((n / 16) + mod[0]));
	next[1] = (int*)malloc(sizeof(int) * ((n / 8) + mod[1]));
	next[2] = (int*)malloc(sizeof(int) * ((n / 4) + mod[2]));
	next[3] = (int*)malloc(sizeof(int) * ((n / 2) + mod[3]));
	next[4] = (int*)malloc(sizeof(int) * n);
	for (int a = 0; a < 5; a++)
	{
		switch (step)
		{
		case 16:
			s = 0;
			break;
		case 8:
			s = 1;
			break;
		case 4:
			s = 2;
			break;
		case 2:
			s = 3;
			break;
		case 1:
			s = 4;
			break;
		}
		print(n, step);
		scanf("%s", arrayscan);
		for (i = 0; i < size[s]; i++)
		{
			next[s][i] = 0;
		}
		if (s == 0)
		{
			next[0][0] = 1;
			for (i = 1, j = 0; i < n - b; i++)
			{
				if (arrayscan[i - 1] != arrayscan[i])
				{
					j++;
				}
				next[0][j]++;
			}
		}
		else
		{
			for (i = 0, k = 0; i < size[s - 1]; i++)
			{
				for (j = 0; j < next[s - 1][i]; j++)
				{

					if (arrayscan[k] == '0')
					{
						next[s][i * 2]++;
					}
					else
					{
						next[s][i * 2 + 1]++;
					}
					k++;
				}
			}
		}
		if (step != 1)
		{
			step = step / 2;
		}
		else
		{
			for (i = 0; i < n; i++)
			{

				if (next[4][i] == 0)
				{
					if (check)
					{
						printf(" ");
					}
					printf("%d", i);
					check = true;
				}
			}
			check = false;
			scanf("%d", &correct);
		}
	}
}
int main()
{
	int i;
	int t;
	scanf("%d", &t);
	for (i = 1; i <= t; ++i)
	{
		int N, B, F;
		scanf("%d", &N);
		scanf("%d", &B);
		scanf("%d", &F);
		CodeJam(16, N, B);
	}
	return 0;
}