
#include<string.h>
#include<stdio.h>
#define size 1000000

int main()
{
	int t,n,i,j;
	char s[size];
	scanf("%d",&t);
	for(j=0;j<=t-1;j++)
	{
		scanf("%d",&n);
		scanf("%s",s);
		for(i=0;i<=strlen(s)-1;i++)
		{
			if(s[i]=='E')
				s[i]='S';

			else
				s[i]='E';
		}
		printf("Case #%d: %s\n",j+1,s);
	}
	return 0;
}