#include <stdio.h>
#include <stdlib.h>

int gcd (int a, int b)
{	if (b == 0)
		return a;
	return gcd(b, a % b);
}

int* sort_pos(int *a, int n)
{	int *pos;
	pos = (int*)malloc(sizeof(int)*n);
	int i, j, temp, f = 0;
	for (i = 0; i < n; i++)
		pos[i] =  i;
	for (i = 0; i < n-1; i++)
	{	for (j = 0; j < n-i-1; j++)
		{	if (a[pos[j]] > a[pos[j+1]])
			{	temp = pos[j];
				pos[j] = pos[j+1];
				pos[j+1] = temp;
				f = 1;
			}
		}
		if(f==0)
			return pos;
	}
	int *sort_pos;
	sort_pos = (int*)malloc(sizeof(int)*n);
	for (i = 0; i < n; i++)
		sort_pos[pos[i]] = i;
	return sort_pos;
}

int main()
{	int t;
	scanf("%d", &t);
	int i = 1;
	while (i <= t)
	{	int n, l;
		scanf("%d %d", &n, &l);
		int crypto[l], j;
		for (j = 0;j < l; j++)
			scanf("%d", &crypto[j]);

		int *plain;
		plain = (int*)malloc(sizeof(int)*(l+1));
		int g = gcd (crypto[0], crypto[1]);
		plain[0] = crypto[0]/g;
		plain[1] = g;
		for (j = 2; j < l; j++)
		{	g = gcd (crypto[j-1], crypto[j]);
			plain[j] = g;
		}
		g = crypto[l-1]/g;
		plain[l] = g;
		// for (j = 0; j <= l; j++)
		// 	printf("%d ", plain[j]);
		// printf("\n");

		int *a;
		a = (int*)malloc(sizeof(int)*26);
		int k;
		int an = 0;
		for (j = 0; j <= l; j++)
		{	for (k = 0; k < 26; k++)
				if (a[k] == plain[j])
					break;
			if (k == 26)
				a[an++] = plain[j];
		}

		// for (j = 0; j < 26; j++)
		// 	printf("%d ", a[j]);
		// printf("\n");

		int *pos;
		pos = sort_pos(a, 26);

		int hash[10000] = {0};
		for (j = 0; j < 26; j++)
		{	hash[a[j]] = pos[j];
		}

		printf("Case #%d: ", i);
		for (j = 0; j <= l; j++)
			printf("%c", hash[plain[j]] + 'A');
		printf("\n");
		free(pos);
		i++;
	}
	return 0;
}
