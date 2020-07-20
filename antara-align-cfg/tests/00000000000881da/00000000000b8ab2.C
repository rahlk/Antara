#include <stdio.h>
int main()
{
	int t,c=1;
	scanf("%d",&t);
	while(t--)
	{
		long int n,l;
		scanf("%ld",&n);
		l=2*n-2;
		char path[l];
		scanf("%s",path);
		for (int i = 0; path[i]!='\0'; i++)
		{
			if (path[i]=='S')
				path[i]='E';
			else
				path[i]='S';
		}
		printf("Case #%d: %s\n",c,path);
		c=c+1;
	}
	return 0;
}