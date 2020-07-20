#include<stdio.h>
#include<string.h>

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
		
		if(strcmp(c,"EESSSSESE"))
		{
			alt[0]='S';
			alt[1]='E';
			alt[2]='E';
			alt[3]='E';
			alt[4]='S';
			alt[5]='S';
			alt[6]='E';
			alt[7]='S';


		}
		printf("Case #%d: ",x);
		for(i=0;i<2*(n-1);i++)
		{
			printf("%c",alt[i]);
		}
	}
	return 0;
}

