#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	int y=t;
	while(t--)
	{
		int n;
		scanf("%d",&n);
		char c[(2*n)-2];
		scanf("%s",&c);
		printf("Case #%d: ",y-t);
		for(int i=0;i<(2*n)-2;i++)
		{
			if(c[i]=='S')
			printf("E");
			else
			printf("S");
		}
		printf("\n");
	}
}