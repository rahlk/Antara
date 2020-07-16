#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>


void swap_str(char* str, int i);
void reorganiser(char* p, char* str, int n);

void find_path(int n, const char* p, char* str);
int how_many_char(char* str, char c, int n);
void p_going_east(char* str, int n, int i, char* p);
void p_going_south(char* str, int n, int i, char* p);

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

		reorganiser(p, str, n);

		printf("Case #%d: %s\n", i, str);

	}

	return 0;
}

void find_path(int n, const char* p, char* str)
{
	int i, e, s;
	

	for(i = 0; i < n; i++ )
	{
		if (p[i] == 'E')
		{
			p_going_east(str, n, i, p);
		}
		if (p[i] == 'S')
		{
			p_going_south(str, n, i, p);
		}
	}
}

int how_many_char(char* str, char c, int n)
{
	int i;
	int number_of = 0;

	for (i = 0; i < n; i++)
	{
		if (str[i] == c)
		{
			number_of++;
		}
	}

	return number_of;
}

void p_going_east(char* str, int n, int i, char* p)
{
	//on est sur le border
	if (how_many_char(str, 'E', n) == (n / 2))
	{
		str[i] = 'S';
	}
	//on est plus a l'est que le sud
	else if (how_many_char(str, 'E', n) > how_many_char(p, 'S', n))
	{
		str[i] = 'S';
	}
	//on est plus au sud que l'est et on etait pas sur la meme case
	else if (how_many_char(str, 'S', n) > how_many_char(p, 'E', n) && p[i - 1] != str[i - 1])
	{
		str[i] = 'E';
	}
	else
	{
		str[i] = 'S';
	}
}

void p_going_south(char* str, int n, int i, char* p)
{
	//on est sur le border
	if (how_many_char(str, 'S', n) == (n / 2))
	{
		str[i] = 'E';
	}
	//on est plus a l'est que le sud et on etait pas sur la meme case
	else if (how_many_char(str, 'E', n) > how_many_char(p, 'S', n) && p[i - 1] != str[i - 1])
	{
		str[i] = 'S';
	}
	//on est plus au sud que l'est
	else if (how_many_char(str, 'S', n) > how_many_char(p, 'E', n))
	{
		str[i] = 'E';
	}
	else
	{
		str[i] = 'E';
	}
}

//another strategy would be to just reorganise the string so that no two following character are identical
void reorganiser(char* p, char* str, int n)
{
	int i;
	int j = 0;
	strcpy(str, p);

	for (i = 0; i < n; i++)
	{
		while (str[i] == p[i] && str[i + 1] == p[i + 1])
		{
			swap_str(str,i,j);

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


