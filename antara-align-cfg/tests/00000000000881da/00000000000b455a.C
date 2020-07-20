#include<stdio.h>
int main()
{
	int tc;
	scanf("%d",&tc);
	while(tc--)
	{
		int n,i;
		scanf("%d",&n);
		char s[2*n-2],an[2*n-2];
		for(i=0;i<(2*n-2);i++)
		scanf("%c",&s[i]);
		for( i=0;i<(2*n-2);i++)
		{
			if(s[i]=='E')
			an[i]='S';
			if(s[i]=='S')
			an[i]='E';
		}
		for( i=0;i<(2*n-2);i++)
		printf("%c",an[i]);
		printf("\n");
	}
	return 0;
}