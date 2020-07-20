#include<stdio.h>


int main()
{
	int t,x=0;
	scanf("%d",&t);
	while(t--)
	{
		x++;
		int n,i;
		scanf("%d",&n);
		char c[50000],alt[50000];
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
