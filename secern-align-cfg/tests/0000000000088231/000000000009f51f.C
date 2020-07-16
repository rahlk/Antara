#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{	int t, i;
	scanf("%d", &t);
	i = 1;
	while (i <= t)
	{	char n[101];
		scanf("%s", n);
		int l;
		l = strlen(n);
		char n1[l+1], n2[l+1];
		int f = -1;
		int j;
		for (j = 0; j < l; j++)
		{	if (n[j] == '4')
			{	n1[j] = '3';
				n2[j] = '1';
				if (f == -1)
					f = j;
			}
			else
			{	n1[j] = n[j];
				n2[j] = '0';
			}
		}
		n1[l] = n2[l] = '\0';
		printf("%s ", n1);
		for (j = f; j < l; j++)
			printf("%c", n2[j]);
		printf("\n");
		i++;
	}
}
