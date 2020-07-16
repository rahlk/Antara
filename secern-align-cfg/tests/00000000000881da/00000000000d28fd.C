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
		char c[100000],alt[100000];
		scanf("%s",&c);
		for(i=0;i<2*(n-1);i++)
		{
			if(c[i]=='S')
				alt[i]='E';
			else if(c[i]=='E')
				alt[i]='S';
		}
		
		
		printf("Case #%d: ",x);
		for(i=0;i<2*(n-1);i++)
		{
			printf("%c",alt[i]);
			
		}
		printf("\n");
	}
	return 0;
}

