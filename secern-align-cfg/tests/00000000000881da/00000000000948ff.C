#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int i, t;
	scanf("%d", &t);
	for(i=0;i<t;i++)
	{
		long long int j, n;
		scanf("%lld", &n);
		char p[2*n-1];
		scanf("%s", p);
		printf("Case #%d: ", i+1);
		long long int len=strlen(p);
		for(j=0;j<len;j++)
		{
			if(p[j]=='S')
			{
				printf("E");
			}
			else
			{
				printf("S");
			}
		}
		printf("\n");
	}
}