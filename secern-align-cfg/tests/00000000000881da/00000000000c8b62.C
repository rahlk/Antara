#include<stdio.h>
#include<string.h>
int main()
{
	int t;
	scanf("%d",&t);
	char n[100];
	while(t--)
	{
		scanf(" %s",n);
		for(int i=0;i<strlen(n);i++)
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