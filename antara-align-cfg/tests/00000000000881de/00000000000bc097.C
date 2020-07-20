#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int get_int();
int get_string(char*, char);

int mabs(int a) { if (a > 0) { return a; } return -a; }
int min(int a, int b) { if (a > b) { return b; } return a; }
int max(int a, int b) { if (a < b) { return b; } return a; }

void send(char* a, int n, int o, int k)
{
	char b[1025];
	b[1024] = '\0';

	int i, j = 0;
	for (i = 0; i < 1024; i++)
	{
		if (i%k == 0)
		{
			j = 1 - j;
		}
		b[i] = '0' + j;
	}
	char t = b[n];
	b[n] = '\0';
	printf("%s\n", b);
	fflush(stdout);
	b[n] = t;

	get_string(a, 10);
	for (i = n; i < 1025; i++)
	{
		a[i - o] = b[i];
	}
	//printf(">> read %s\n", a);
}

int main()
{
	char a[1025];
	int t = get_int();
	while (t-- != 0)
	{
		int i, j, k, ll, n = get_int(), b = get_int(), f = get_int();
		int l[1024];
		k = 16;
		send(a, n, b, k);
		i = 0, ll = 0;
		while (i < 1024)
		{
			j = i;
			while (j < 1024 && a[i] == a[j])
			{
				j++;
			}
			l[ll++] = k - j + i;
			//printf(">> >> %d\n", j - i);
			i = j;
		}
		k = k/2;
		int bc = 64;
		while (k > 0)
		{
			send(a, n, b, k);
			//printf(">> give %s\n", a);
			i = 0;
			int tm[1024], tc = 0;
			int at = 0;
			for (i = 0; i < bc; i++)
			{
				int ccc[2] = {0, 0};
				for (j = 0; j < 2*k - l[i]; j++)
				{
					if (a[at++] == '1')
					{
						ccc[0]++;
					}
					else
					{
						ccc[1]++;
					}
				}
				//printf(">> %d %d %d\n", 2*k - l[i], ccc[0], ccc[1]);
				tm[2*i] = k - ccc[0];
				tm[2*i + 1] = k - ccc[1];
			}
			assert(at == 1024 - b);
			for (i = 0; i < 2*bc; i++)
			{
				l[i] = tm[i];
			}
			k = k/2;
			bc = bc*2;
		}
		//for (i = 0; i < n; i++)
		//{
			//printf(">> %d: %d\n", i, l[i]);
		//}
		for (i = 0; i < 1024; i++)
		{
			//printf(">> %d\n", l[i]);
			if (l[i] == 1)
			{
				printf("%d ", i);
			}
		}
		printf("\n");
		int ac = get_int();
		if (ac == -1)
		{
			return 0;
		}
	}

	return 0;
}

int get_string(char* b, char t)
{
	int i = 0;
	char c = getchar();

	while (c != t)
	{
		b[i++] = c;
		c = getchar();
	}
	b[i] = '\0';
	return i;
}

int get_int()
{
	int ret = 0;
	char c  = getchar();
	int sgn;

	while (1)
	{
		if (c == EOF)
		{
			return EOF;
		}
		if (c >= '0' && c <= '9')
		{
			sgn = 1;
			break;
		}
		if (c == '-')
		{
			c = getchar();

			if (c < '0' || c > '9')
			{
				continue;
			}

			sgn = -1;
			break;
		}
		c = getchar();
	}

	while (1)
	{
		ret = ret*10 + c - '0';

		c = getchar();

		if (c < '0' || c > '9')
		{
			return sgn*ret;
		}
	}
}
