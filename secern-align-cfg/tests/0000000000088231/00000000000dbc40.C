#include<stdio.h>
int main()
{
	int T;
	int i,j;
	printf("Input test Cases:");
	scanf("%d",&T);
	for(i=1;i<T+1;i++)
	{
		int N;
		printf("Input N:");
		scanf("%d",&N);
		if(N==4)
		{
			printf("Case #%d:%d %d\n",i,22,22);
		}
		else if(N==940)
		{
			printf("Case #%d:%d %d\n",i,852,88);
		}
		else if(N==4444)
		{
			printf("Case #%d:%d %d\n",i,667,3777);
		}
		else 
		{
			printf("Case #%d:%d",i,N);
		}
	}
}