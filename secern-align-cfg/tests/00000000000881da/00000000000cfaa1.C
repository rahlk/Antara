#include<stdio.h>


int main()
{
	int t,x=1;
	scanf("%d",&t);
	while(t--)
	{
		int n,i;
		scanf("%d",&n);
		char c[1000],alt[1000];
		scanf("%s",&c);
		for(i=0;i<n;i++)
		{
			if(c[i]=='S')
				alt[i]='E';
			else if(c[i]=='E')
				alt[i]='S';
		}
		printf("Case #%d: ",x);
		for(i=0;i<n;i++)
		{
			printf("%c",alt[i]);
		}
	}
	return 0;
}
