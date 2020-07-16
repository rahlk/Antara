#include<stdio.h>

int main()
{
	int t, i, n, j;
	char c[100000];
	char d[100000];
	d[0]=' ';
	c[0]=' ';
	scanf("%d", &t);
	for(i=1; i<=t; i++)
	{
		scanf("%d", &n);
		for(j=1; j<=2*(n-1); j++)
		{
			scanf(" %c", &c[j]);
		}
		for(j=1; j<=2*(n-1); j++)
		{
			if(c[j]=='S')
			{
				d[j]='E';
			}
			else
			{
				d[j]='S';
			}
		}
		printf("Case #%d: ",i);
		for(j=1; j<=2*(n-1); j++)
		{
			printf("%c", d[j]);
		}
		printf("\n");
	}
	return 0;
}
