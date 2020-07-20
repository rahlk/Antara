#include <stdio.h>
#include <string.h>
int hasFour(int n)
{
	int f=0;
	while (n>0)
	{
		int d=n%10;
		if (d==4)
		{
			f=1;
			break;
		}
		n/=10;
	}
	return f;
}
void main()
{
	int T,i;
	scanf("%d",&T);
	char answers[T][1000];
	
	for (i=1;i<=T;i++)
	{
		int N,j,A,B;
		scanf("%d",&N);
		for (j=1;j<N;j++)
		{
			if (hasFour(j)==0 && hasFour(N-j)==0)
			{
				A=j;B=N-j;break;
			}
		}
		sprintf(answers[i-1],"%d %d",A,B);
	}

	for (i=0;i<T;i++)
		printf("Case #%d: %s\n",i+1,answers[i]);
}