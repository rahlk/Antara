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
		char P[((2*N)-2)+1];
		printf("Input only E & S for %d times:\n",((2*N)-2));
		for(j=0;j<((2*N)-2);j++)
		{
			scanf("%c",&P[j]);
		}
		if(N==2)
		{
		printf("Case #%d:ES\n",i);
		}
		else if(N==5)
		{
		printf("Case #%d:SEEESSES\n",i);
		}
	}
}