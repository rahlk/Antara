#include<stdio.h>
#include<string.h>
int main()
{
	int t,i;
	scanf(" %d",&t);
	char n[100];
	while(t--)
	{
		int r;
		scanf(" %d",&r);
		scanf(" %s",n);
		for( i=0;i<strlen(n);i++)
		{
			if(n[i]=='S')
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