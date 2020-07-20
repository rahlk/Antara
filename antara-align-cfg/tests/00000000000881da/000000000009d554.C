#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>


void swap_str(char* str, int i, int j);
void reorganiser(char* p, char* str, int n);
void flip(char*p, char*str, int n);

int main()
{
	int n, t, i;
	char p[1000] = { '0' };
	char str[1000] = { '0' };

	scanf("%d", &t);
	
	for (i = 1; i <= t; i++)
	{
		scanf("%d", &n);
		n = ((2 * n) - 2);
		scanf("%s", p);

		flip(p, str, n);

		//reorganiser(p, str, n);

		printf("Case #%d: %s\n", i, str);

	}

	return 0;
}

void reorganiser(char* p, char* str, int n)
{
	int i;
	int j = 0;
	strcpy(str, p);

	for (i = 0; i < (n); i++)
	{
		if (i != (n - 1))
		{
			while (str[i] == p[i] && str[i + 1] == p[i + 1])
			{
				swap_str(str, i, j);

				j++;

				if ((j + i) == n)
				{
					j = -i;
				}
			}
		}
		else if(str[i] == p[i] && str[i - 1] == p[i - 1])
		{
			swap_str(str, i, j);
			j++;

			if ((j + i) == n)
			{
				j = -i;
			}
		}
		j = 0;
		
	}

}

void swap_str(char* str,int i, int j)
{
	char buffer;

	buffer = str[i+ j];
	str[i + j] = str[i];
	str[i] = buffer;
}

void flip(char*p, char*str, int n)
{
	int i;
	int j = 0;
	strcpy(str, p);

	for (i = 0; i < n; i++)
	{
		if (str[i] == 'E')
		{
			str[i] = 'S';
		}
		else
		{
			str[i] = 'E';
		}
	}
}


