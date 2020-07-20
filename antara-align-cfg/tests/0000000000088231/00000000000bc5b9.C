#include <stdio.h>
#include <string.h>
int hasFour(long int n)
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
int main()
{
	int T,i;
	scanf("%d",&T);
	char answers[T][1000];
	
	for (i=1;i<=T;i++)
	{
		long int N,j,A,B;
		scanf("%ld",&N);
		for (j=N/2;j<N;j++)
		{
			if (hasFour(j)==0 && hasFour(N-j)==0)
			{
				A=j;B=N-j;break;
			}
		}
		sprintf(answers[i-1],"%ld %ld",A,B);
	}

	for (i=0;i<T;i++)
		printf("Case #%d: %s\n",i+1,answers[i]);
	
	return 0;
}